/*
 * Copyright © 2017-2020 The Crust Firmware Authors.
 * SPDX-License-Identifier: BSD-3-Clause OR GPL-2.0-only
 */

#ifndef DRIVERS_CLOCK_SUN50I_A64_CCU_H
#define DRIVERS_CLOCK_SUN50I_A64_CCU_H

enum {
	CLK_PLL_CPUX,
	CLK_PLL_DDR0,
	CLK_PLL_PERIPH0,
#if CONFIG(SOC_A64)
	CLK_PLL_DDR1,
#endif
	CLK_CPUX,
	CLK_BUS_DRAM,
	CLK_BUS_MSGBOX,
	CLK_DRAM,
	CLK_MBUS,
	SUN50I_A64_CCU_CLOCKS
};

#endif /* DRIVERS_CLOCK_SUN50I_A64_CCU_H */
