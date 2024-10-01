#pragma once
#include "Error.hpp"

#if defined LINUX || defined WINDOWS || defined GINT 

namespace oc {
	OpenCalcError init();
	OpenCalcError exit();
}

