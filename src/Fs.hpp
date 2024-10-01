#pragma once
#include <expected>
#include <string>
#include <vector>

namespace oc::fs {
	enum class Error {
		// TODO
	};
	
	/// Reads a file from the specified path
	std::expected<std::vector<std::byte>, Error> readFile(std::string& path);
	/// Writes data to the specified file at the specified path 
	std::expected<void, Error> writeFile(std::string& path, std::vector<std::byte>& data);
}

