#include <fstream>
#include <vector>
#include <iterator>
#include <iostream>
#include <iomanip>

int main() {

	std::ifstream file("hex.exe", std::ios::binary);
	std::ofstream out_file("../out.txt", std::ios::out);

	std::vector<char> bytes(
		(std::istreambuf_iterator<char>(file)), 
		(std::istreambuf_iterator<char>())
	);

	for(auto b : bytes)
		out_file << std::hex << (unsigned int)b;

	file.close();
	out_file.close();

	return 0;
}