#include <iostream>
#include <time.h>
#include <fstream>

using namespace std;

//Send your txt file as input arg when running.

	

	int main(int argc, char **argv){
		string tfile;
		
		srand(time(0)); // random bi sayı
		
		tfile = argv[1];

		int linen=0;
		char c;
		int luckyline=0;

		ifstream filmFile(tfile);

		while(filmFile.get(c)){
			if(c == '\n'){
				linen++;		
			}

		}

		if(filmFile.eof())
				linen++;
		

		luckyline = (rand()%linen)+1;
		filmFile.close();
		filmFile.open(tfile);
		
		 while(filmFile.get(c)){
			
			if(luckyline-1 == 0)
				break;

			else if(c == '\n')
				luckyline--;
			
		}
		
		while(filmFile.get(c)){
			cout << c;

			if(c=='\n')
				break;
		}

		
		filmFile.close();

		return 0;
		
	}