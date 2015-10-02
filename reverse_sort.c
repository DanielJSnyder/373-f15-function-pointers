//By rewriting the compare function, which is used to do all the sort comparisons
//this version will overwrite the weak version of the function during linking.
int compare(int a, int b)
{
	return b-a;
}
