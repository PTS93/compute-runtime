#
# Copyright (C) 2018 Intel Corporation
#
# SPDX-License-Identifier: MIT
#

if(IS_DIRECTORY ${IGDRCL_SOURCE_DIR}/.git)
  add_custom_target(lint
    ${IGDRCL_SOURCE_DIR}/scripts/lint${BRANCH_DIR_SUFFIX}/set_copyright.sh
    WORKING_DIRECTORY ${IGDRCL_SOURCE_DIR}
  )
  set_target_properties(lint PROPERTIES
    EXCLUDE_FROM_DEFAULT_BUILD TRUE
    EXCLUDE_FROM_ALL TRUE
  )
  add_custom_target(lint_head
    ${IGDRCL_SOURCE_DIR}/scripts/lint${BRANCH_DIR_SUFFIX}/set_copyright.sh HEAD
    WORKING_DIRECTORY ${IGDRCL_SOURCE_DIR}
  )
  set_target_properties(lint_head PROPERTIES
    EXCLUDE_FROM_DEFAULT_BUILD TRUE
    EXCLUDE_FROM_ALL TRUE
  )
endif()

