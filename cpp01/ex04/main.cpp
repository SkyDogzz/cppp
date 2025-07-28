#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

std::string getfile(std::ifstream *infile) {
	std::string line;
	std::string data = "";
	while (std::getline(*infile, line)) {
		data += line + '\n';
	}
	return data;
}

std::string replaceOccurence(std::string data, std::string s1, std::string s2) {
	std::string newData;
	int			posData = 0;
	int			sizeS1 = s1.length();
	while (data[posData]) {
		if (data.substr(posData, sizeS1) == s1) {
			newData += s2;
			posData += sizeS1;
		} else {
			newData += data[posData];
			posData++;
		}
	}
	return newData;
}

void writeToFile(std::ofstream *outfile, std::string data) {
	outfile->write(data.data(), data.length());
}

int main(int argc, char *argv[]) {
	std::ifstream infile;
	std::ofstream outfile;

	if (argc != 4) {
		std::cout << "Usage = " << argv[0] << " \"filename\" \"s1\" \"s2\"" << std::endl;
		std::exit(1);
	}
	infile.open(argv[1]);
	if (infile.is_open() == 0) {
		std::cerr << "Can't open infile: " << argv[1] << std::endl;
		exit(0);
	}

	std::string outfileName = std::string(argv[1]).append(".replace");
	outfile.open(outfileName.data());
	if (outfile.is_open() == 0) {
		std::cerr << "Can't open infile: " << argv[1] << std::endl;
		infile.close();
		exit(0);
	}
	std::string data = getfile(&infile);
	infile.close();
	std::string newData = replaceOccurence(data, argv[2], argv[3]);
	writeToFile(&outfile, newData);
	outfile.close();
}
