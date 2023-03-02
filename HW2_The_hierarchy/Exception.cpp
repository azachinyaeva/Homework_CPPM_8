#include "Exception.h"

CreateFigureException::CreateFigureException(const std::string& message) : domain_error(message) {};
