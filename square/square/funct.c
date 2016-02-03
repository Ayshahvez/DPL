//This function is part of an example of creating a C DLL for use in Excel
double _stdcall square(double *x)
{
	return *x * *x;
}