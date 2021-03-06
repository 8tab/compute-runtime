/*
 * Copyright (C) 2020 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 */

#include "shared/source/helpers/hw_helper.h"

#include "opencl/test/unit_test/fixtures/device_fixture.h"
#include "test.h"

using namespace NEO;

typedef Test<DeviceFixture> HwHelperTest;

HWTEST_F(HwHelperTest, GivenHwInfoWithEnabledBliterWhenCheckCopyEnginesCountThenReturnedOne) {
    HardwareInfo hwInfo{};
    hwInfo.capabilityTable.blitterOperationsSupported = true;
    EXPECT_EQ(HwHelper::getCopyEnginesCount(hwInfo), 1u);
}

HWTEST_F(HwHelperTest, GivenHwInfoWithDisabledBliterWhenCheckCopyEnginesCountThenReturnedZero) {
    HardwareInfo hwInfo{};
    hwInfo.capabilityTable.blitterOperationsSupported = false;
    EXPECT_EQ(HwHelper::getCopyEnginesCount(hwInfo), 0u);
}