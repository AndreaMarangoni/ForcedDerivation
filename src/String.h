/*
 * String.h
 *
 *  Created on: 6 Jun 2014
 *      Author: andy
 */

#ifndef STRING_H_
#define STRING_H_

#include <string>

class String : public std::string {
public:
	String(const std::string& str);
	virtual ~String();

	static void TheMethod();
};

#endif /* STRING_H_ */
