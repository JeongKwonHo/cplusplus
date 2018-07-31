
int main()
{
	int ar1[3]; //ok

	int s1 = 3;

	int ar2[s1]; //VC++ error

	const int s2 = 3;
	int ar3[s2];	// ok

	const int s3 = s1;
//	int ar4[s3];	// VC++ error


}
