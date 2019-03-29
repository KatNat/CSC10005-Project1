#if !defined(_QINT_H_)
#define _QINT_H_

#include "binary.h"
#include <sstream>


class QInt {
private:
	binary n;

	void _string_div_two(std::string&);
	int _multiply(int, int[], int);
	std::string _power(int, int);
	std::string _add_string(std::string, std::string);

public:
	QInt();
	QInt(const int&);

	void scan_QInt(const std::string, const int);
	std::string print_QInt(const int);

	std::string bin_to_dec(std::string);
	std::string bin_to_hex(std::string);
	std::string dec_to_bin(std::string);
	std::string dec_to_hex(std::string);
	std::string hex_to_bin(std::string);
	std::string hex_to_dec(std::string);

};

#endif // _QINT_H_
