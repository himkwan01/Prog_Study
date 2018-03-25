#include <bits/stdc++.h>
using namespace std;

int bin_search

/*------------------------------------------------------------------------------
 * 
 * Input:   ifile   input file name
 *          ofile   output file name
 * Result:  write to ofile with unique line
 -----------------------------------------------------------------------------*/
void remove_dup_line(char *ifile, char *ofile){
  ifstream in;
  ofstream out;
  vector<string> l;
  string temp;
  if(!in.open(ifile)){
    printf("Error: Input file name does not exist.\n");
    return;
  }
  
  while(in>>temp){
    l.push_back(l);
  }
  in.close();
  in.open(ifile);
  sort(l.begin(), l.end());
  vector<bool> used(l.size(),false);

  out.open(ofile);




  in.close();
  out.close();
}

int main(int argc, char **argv){

  if(argc!=2){
    printf("Usage: <input file name> <output file name>\n");
  }
  else{
    remove_dup_line(argv[0], argv[1]);
  }
  
  return 0;
}
