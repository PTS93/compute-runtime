/*
 * Copyright (C) 2018 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 */

#include "runtime/command_stream/preemption.h"
#include "runtime/command_stream/preemption.inl"

namespace OCLRT {

typedef BDWFamily GfxFamily;

template <>
struct PreemptionConfig<GfxFamily> {
    static constexpr uint32_t mmioAddress = 0x2248;
    static constexpr uint32_t maskVal = 0;
    static constexpr uint32_t maskShift = 0;
    static constexpr uint32_t mask = 0;

    static constexpr uint32_t threadGroupVal = 0;
    static constexpr uint32_t cmdLevelVal = (1 << 2);
    static constexpr uint32_t midThreadVal = 0;
};

template <>
void PreemptionHelper::programCmdStream<GfxFamily>(LinearStream &cmdStream, PreemptionMode newPreemptionMode, PreemptionMode oldPreemptionMode,
                                                   GraphicsAllocation *preemptionCsr, Device &device) {
    if (newPreemptionMode == oldPreemptionMode) {
        return;
    }

    uint32_t regVal = 0;
    if (newPreemptionMode == PreemptionMode::ThreadGroup) {
        regVal = PreemptionConfig<GfxFamily>::threadGroupVal;
    } else {
        regVal = PreemptionConfig<GfxFamily>::cmdLevelVal;
    }

    LriHelper<GfxFamily>::program(&cmdStream, PreemptionConfig<GfxFamily>::mmioAddress, regVal);
}

template <>
size_t PreemptionHelper::getRequiredPreambleSize<GfxFamily>(const Device &device) {
    return 0;
}

template <>
size_t PreemptionHelper::getRequiredStateSipCmdSize<GfxFamily>(const Device &device) {
    return 0;
}

template <>
void PreemptionHelper::programCsrBaseAddress<GfxFamily>(LinearStream &preambleCmdStream, Device &device, const GraphicsAllocation *preemptionCsr) {
}

template <>
void PreemptionHelper::programStateSip<GfxFamily>(LinearStream &preambleCmdStream, Device &device) {
}

template size_t PreemptionHelper::getRequiredCmdStreamSize<GfxFamily>(PreemptionMode newPreemptionMode, PreemptionMode oldPreemptionMode);
template size_t PreemptionHelper::getPreemptionWaCsSize<GfxFamily>(const Device &device);
template void PreemptionHelper::applyPreemptionWaCmdsBegin<GfxFamily>(LinearStream *pCommandStream, const Device &device);
template void PreemptionHelper::applyPreemptionWaCmdsEnd<GfxFamily>(LinearStream *pCommandStream, const Device &device);
template void PreemptionHelper::programInterfaceDescriptorDataPreemption<GfxFamily>(INTERFACE_DESCRIPTOR_DATA<GfxFamily> *idd, PreemptionMode preemptionMode);

} // namespace OCLRT
