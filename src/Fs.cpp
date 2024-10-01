#include <Fs.hpp>

std::excpected<OpenCalcFsError, std::vector<std::byte>> oc::fs::readFile(std::string& path) {
	#if defined LINUX
	
	#elif defined WINDOWS

	#endif	
}

