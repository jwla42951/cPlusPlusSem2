/*
 *
 *
 *
 */

#include "Options.h"

Options::Options ( )
{
	optA = false;
	optB = false;
}

Options::~Options ( )
{
}

void Options::checkOptions(string opt)
{
	if (opt == "optionA")
	{
		optA = true;
		return;
	}
	if (opt == "optionB")
	{
		optB = true;
		return;
	}
	return;
}
