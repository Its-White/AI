#include "Path.h"

Path::Path() 
{
	connection = nullptr;
	cost = 0;
}

Path::Path(Node* a_connection)
{
	connection = a_connection;
	cost = 0;
}

Path::Path(Node* a_connection, float a_cost)
{
	connection = a_connection;
	cost = a_cost;
}


Path::~Path() 
{
}