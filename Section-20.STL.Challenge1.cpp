// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>
#include <deque>
#include<algorithm>
#include<string>

bool is_palindrome(const std::string& s)
{
	// You must implement this function.
	// Since we are learning the STL - use a deque to solve the problem.
	std::deque<char> a;
	std::string lower_str = s;
	std::transform(lower_str.begin(), lower_str.end(), lower_str.begin(),
		[](unsigned char c) { return std::tolower(c); });
	for (char ch : lower_str) {
		a.push_back(ch);
	}


	while (a.size() > 1) {
		if (a.front() != a.back()) {
			return false; // Not a palindrome
		}
		a.pop_front();
		a.pop_back();
	}
	return true;
	
}

int main()
{
	std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
		"avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
		"A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };

	std::cout << std::boolalpha;
	std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
	for (const auto& s : test_strings) {
		std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
	}
	std::cout << std::endl;
	return 0;
}