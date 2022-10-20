void sort_selection(int *arr, int n) {
  for (int i = n - 1; i >= 1; i--)
  {
    int max = *arr;
    int index = 0;
    for (int j = 1; j <= i; j++)
    {
      if (*(arr+j) > max)
      {
        max = *(arr+j);
        index = j;
      }
    }
    *(arr+index) = *(arr+i);
    *(arr+i) = max;
  }
}