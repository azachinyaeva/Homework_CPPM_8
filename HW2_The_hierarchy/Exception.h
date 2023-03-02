#pragma once
#include <iostream>


class CreateFigureException : public std::domain_error{

public:
	CreateFigureException (const std::string& message);

};
