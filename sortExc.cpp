template <typename T>
void insertSort(vector<int>&T)
{
  int j =0;
  for(int i = 0;i<a.size();i++)
  {
    T tmp = a[i];
    for(j=i,j>0&&tmp<a[j-1];i--)
        a[j] = a[j-1];
    a[j] = tmp;
  }
}

template<typename T>
void shellSort(vector<int>&T)
{
  for(int gap = a.size()/2,gap>0;gap/=2)
    for(int i = gap;i<a.size(),i++)
    {
      T tmp = a[i];
      int j= i;
      for(;j>0&&tmp<a[j-gap],j-=gap)
        a[j] = a[j-gap];
      a[j] = tmp;
    }
}
