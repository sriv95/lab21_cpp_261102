#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    if(argc>1){
        cout<<"---------------------------------\n";
        double sum=0;
        for(int i=1;i<argc;i++){
            sum += atof(argv[i]);
        }
        
        cout<<"Average of "<<argc-1<<" numbers = "<<sum/(argc-1)<<endl;
        cout<<"---------------------------------";
    }
    else cout<<"Please input numbers to find average.";
}