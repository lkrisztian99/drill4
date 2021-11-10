#include "std_lib_facilities.h"

bool egysegek(string egyseg){
	return (egyseg=="cm" || egyseg =="m" || egyseg =="in" || egyseg == "ft");
}


double valtas(double szam, string egyseg){
	if(egysegek(egyseg)==true){
		if(egyseg=="cm"){
			return szam*0.01;
		}
		else if(egyseg=="in"){
			return szam*2.54*0.01;
		}else if(egyseg == "ft"){
			return szam*12*2.54*0.01;
		}else if(egyseg=="m"){
			return szam*1;
		}
		
		
		
		
	}
	return 0;
	
}


int main(){
//első feladat
/*
	int szam1=0;
	int szam2=0;
	
	while(cin >> szam1 >> szam2){
	if(szam1=='|' || szam2=='|'){
	break;
	}else{
	cout << szam1 << " " << szam2 << "\n";
	}
	
	
	}

első feladat vége */

		//Második feladat
		/*
	int szam1=0;
	int szam2=0;
	
	while(cin >> szam1 >> szam2){
	if(szam1=='|' || szam2=='|'){
	break;
	}else{
	if(szam1<szam2){
		cout << "Smaller value is: " << szam1 << " The larger is : " << szam2 << endl;
	}else{
		cout << "Smaller value is: " << szam2 << " The larger is : " << szam1 << endl;
	}
	}
	
	
	}
	*/
	
	
	
	//harmadik feladat
	/*
	int szam1=0;
	int szam2=0;
	
	while(cin >> szam1 >> szam2){
	if(szam1=='|' || szam2=='|'){
		break;
	}else{
		if(szam1<szam2){
			cout << "Smaller value is: " << szam1 << " The larger is : " << szam2 << endl;
		}else if(szam1==szam2){		
			cout << "Tha numbers are equal" << endl;
		}else{
			cout << "Smaller value is: " << szam2 << " The larger is : " << szam1 << endl;
		}
		
	}
	
	
	}*/
	
	//Negyedik feladat
	/*
	double szam1=0;
	double szam2=0;
	
	while(cin >> szam1 >> szam2){
	if(szam1=='|' || szam2=='|'){
		break;
	}else{
		if(szam1<szam2){
			cout << "Smaller value is: " << szam1 << " The larger is : " << szam2 << endl;
		}else if(szam1==szam2){		
			cout << "Tha numbers are equal" << endl;
		}else{
			cout << "Smaller value is: " << szam2 << " The larger is : " << szam1 << endl;
		}
		
	}
	
	
	}*/
	
	//ötödik feladat
	/*
	double szam1=0;
	double szam2=0;
	
	while(cin >> szam1 >> szam2){
		if(szam1=='|' || szam2=='|'){
			break;
		}else{
			if(szam1<szam2){
				cout << "Smaller value is: " << szam1 << " The larger is : " << szam2 << endl;
				if((szam2-szam1)<0.01){
				cout << "The numbers are almost equal" << endl;
				}
				
			}else if(szam1==szam2){		
				cout << "Tha numbers are equal" << endl;
			}else{
				cout << "Smaller value is: " << szam2 << " The larger is : " << szam1 << endl;
				if((szam1-szam2)<0.01){
				cout << "The numbers are almost equal" << endl;
				}
			}			
		}		
	}
	*/
	
	//Hatos feladat
	
	double szam3=0;
	double min=9999999;
	double max=-9999999;
	string egyseg=" ";
	double osszes_ertek=0;
	int ertekek_szama=0;
	
	vector<double> adatok;
	
	while(cin >> szam3 >> egyseg){ //szam es mertek bekeres
		if(egysegek(egyseg)==true){			// adatok átváltása/tárolása és megadott értékek számának növelése
			osszes_ertek+=valtas(szam3,egyseg);
			ertekek_szama++;
			adatok.push_back(valtas(szam3,egyseg));
			sort(adatok);
			
			if(valtas(szam3,egyseg)<min){ //legnagyobb legkisseb eldontése
			min=valtas(szam3,egyseg);
			}
			
			if(valtas(szam3,egyseg)>max){
			max=valtas(szam3,egyseg);}
		
		cout << "The largest so far : " << max << "\n" << "The smallest so far: " << min << "\n" << "The number of values: " << ertekek_szama << "\n";
		cout << "The sum of values: " << osszes_ertek << " m" << "\n"  << "Elements of vector in order: " << endl;
		
		
		
		}
		for(double a:adatok){
			cout << a << ","; 
		}
		cout << "\n";
	}
	
return 0;
}


