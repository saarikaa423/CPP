int getNegativeNumbersCount(vector<int> &arr) 
{
    // add your logic here
	int i,f,count=0;
	for(i=0;i<arr.size() ;++i)
	{
		f==1;
		if(arr[i]<0)
		{
			count++;
			f=1;
		}
		else
			f=0;
	}
	return count;
}
