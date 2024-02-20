vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int i=0,j=0; vector<int>u;
    while(i<a.size() && j<b.size()){
      if (a[i] <= b[j]) {
        if (u.size() == 0 || u.back() != a[i]) {
          u.push_back(a[i]);
        }
          i++;
        
      }
      else {
        if (u.size() == 0 || u.back() != b[j]) {
          u.push_back(b[j]);
        }
          j++;
        
      }
    }


    while(i<a.size()){
      if (u.back() != a[i]) {
          u.push_back(a[i]);
      }
      i++;
        
    }
    while(j<b.size()){
      if (u.back() != b[j]) {
          u.push_back(b[j]);
      }
      j++;
        
    }
    return u;
}
