// Naive pattern matching algo

void Npm(string pat, string txt){
int n = txt.length();
int m = pat.length();

for (int i =0; i<n-m; i++){
 for (int j=0; j<m; j++){
      if (pat[j] != txt [i+j]){
           break;
      }
 }
if (j==m){
    cout << i << " ":
      }
}

}
