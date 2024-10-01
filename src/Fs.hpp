#pragma once
#include <expected>
#include <string>
#include <vector>

#include "Error.hpp"

namespace oc::fs {
	/// Reads a file from the specified path
	std::expected<OpenCalcFsError, std::vector<std::byte>> readFile(std::string& path);
	/// Writes data to the specified file at the specified path 
	std::expected<OpenCalcFsError, void> writeFile(std::string& path, std::vector& data);
}

