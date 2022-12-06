
vector<int> searchRange(vector<int> &arr, int key) {
   int first = -1, last = -1;
   for (int i = 0; i < arr.size(); i++) 
   {
       if (first == - 1 && key == arr[i]) 
       {
           first = i;
       }
       if (key == arr[i]) 
       {
           last = i;
       }
   }
   vector<int> index = {first, last};
   return index;
}