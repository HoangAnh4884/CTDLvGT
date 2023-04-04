/*https://duongdinh24.com/thuat-toan-heap-sort/*/

void DoiSo(int &x, int &y)   { int z=x; x=y; y=z; }
 
void heap(int a[Max], int n, int i)
{
	int max=i;
	int left=i*2+1;
	int right=left+1;
	if(left<n && a[left]>a[max])
	{
		max=left; 
	}
	if(right<n && a[right]>a[max])
	{
		max=right; 
	} 
	if(max!=i)
	{
		DoiSo(a[i],a[max]);
		heap(a,n,max); 
	} 
} 

void heapSortTang(int a[], int n)
{
	for(int i=n/2-1; i>=0; i--)
	{
		heap(a,n,i); 
	} 
	for(int j=n-1; j>0; j--)
	{
		DoiSo(a[0], a[j]);
		heap(a,j,0); 
	} 
} 