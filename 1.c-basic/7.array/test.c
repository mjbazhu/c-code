                      //本身arr是一个指针
int binary_search(int arr[], int x,int sz)
{
	int left = 0;
	int right = sz-1;
	do
	{
		int mid = (left + right) / 2;
		if (arr[mid] < x)
		{
			left = mid + 1;
		}else if (arr[mid] > x)
		{
			right = mid - 1;
		} 
		else
		{
			return mid;
		}
	} while (left<=right);
	return -1;
}