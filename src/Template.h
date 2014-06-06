/*
 * Template.h
 *
 *  Created on: 6 Jun 2014
 *      Author: andy
 */

#ifndef TEMPLATE_H_
#define TEMPLATE_H_

template<class Class>
class Template {
public:
	Template();
	virtual ~Template();

	/* Whatever */

	void methodThatUsesAnotherMethod();
};

#endif /* TEMPLATE_H_ */

template<typename Class>
Template<Class>::Template() {

}

template<typename Class>
Template<Class>::~Template() {

}

template<typename Class>
void Template<Class>::methodThatUsesAnotherMethod() {
		Class::TheMethod();
}





