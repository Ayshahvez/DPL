//	This function uses double array dIn as an argument with dimensions iSizeIn
//	and puts results in double array dOut with dimensions iSizeOut
//	For this example, dIn and dOut are the same size so iSizeOut is ignored
//	But in general, dIn and dOut can have different dimensions
int _stdcall useArray(double* dIn, double* dOut, int* iSizeIn, int* iSizeOut)
{
	int i, j, iHeight, iWidth;  //iHeight is coloum; iWidth is row
	iHeight = iSizeIn[0]; //first index assign to coloumn
	iWidth = iSizeIn[1]; //first index assign to coloumn
	for (i = 0; i<iHeight; i++) {//for current coloumn based on i
		for (j = 0; j<iWidth; j++) {//for current row based on j
			dOut[i*iWidth + j] = dIn[i*iWidth + j] * 10; //
		}
	}
	return 0;
}