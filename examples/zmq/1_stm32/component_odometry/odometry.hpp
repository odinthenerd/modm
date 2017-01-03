/*
 * Copyright (c) 2016, Sascha Schade
 *
 * This file is part of the modm project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
// ----------------------------------------------------------------------------

#ifndef COMPONENT__ODOMETRY_HPP
#define COMPONENT__ODOMETRY_HPP

#include <xpcc/communication/xpcc/abstract_component.hpp>
#include <xpcc/processing/timer.hpp>

#include "communication/packets.hpp"

namespace component
{
	class Odometry : public xpcc::AbstractComponent
	{
	public:
		Odometry(uint8_t id, xpcc::Dispatcher &communication);
		
		void
		update();

	public:
		// Callback for xpcc
		void actionSetLedRed(const xpcc::ResponseHandle& responseHandle, const robot::packet::Bool *payload);
		
	private:
		xpcc::ShortPeriodicTimer timer;
	};
}

#endif // COMPONENT__ODOMETRY_HPP