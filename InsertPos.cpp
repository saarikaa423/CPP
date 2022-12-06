int getInsertPosition(vector<int> &arr, int key) {
    // add your logic here
	int l=0,u=arr.size(),mid;
	mid=(l+u)/2;
	
	if(l<u)
	{
		if(arr[mid]==key)
			return mid;
		
		if(key<arr[mid])
		{
			while(l<mid && arr[l]<key)
			{
				if(arr[l]==key)
				{
					return l;
					break;
				}
				l++;
			}
			if(key<arr[l])
				return l;
		}
		if(key>arr[mid])
		{
			l=mid+1;
			while( l<u && arr[l]<key)
			{
				if(arr[l]==key)
				{
					return l;
					break;
				}
				l++;
			}
			if(key>arr[l]  && l<u)
				return l-1;
			else
				return l;
			
		}
	}	
}
