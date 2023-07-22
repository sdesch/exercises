#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void print(int  q[][20], int row, int col){
	int  i, j; 
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
		cout<<"\t"<<q[i][j];
		cout<<"\n";
		}
		cout<<"\n";
}

int main(void){
	srand(time(0));
	int a[4][20], i ,j;
	
	for( i = 0; i < 4; ++i){
		for( j = 0;  j < 20; ++j){
		a[i][j] = ((rand() % 50)-1)+1;}
		}
	print(a,4,20);
	
	double suma=0;
	int max=a[0][20];
	int min=a[0][0];
	int gano=0;
	int perdio=0;
	bool repetir = true;
	
	int selection;
	do{
		cout<< "\n\n\t\t\tMenu de Opciones" << endl;
		cout<< "\t\t\t----------------" << endl;
		cout<<"\n 1: Ver promedio por grupo";
		cout<<"\n 2: Ver maxima nota por grupo";
		cout<<"\n 3: Ver minima nota por grupo";
		cout<<"\n 4: Ver cantidad de aprobados por grupo";
		cout<<"\n 5: Ver cantidad de reprobados por grupo";
		cout << "\t0. SALIR" << endl;
		cout<<"\n Ingrese su seleccion: ";
		
		cin>>selection;
		
		switch (selection){
			case 1: 
				double promedio[4];
				for(int i=0; i<4; i++){
					for(int j=0; j<20; j++){
					suma=suma+a[ i ][ j ];
						}
				promedio[ i ]=suma/20;
				suma=0;
				cout << endl;
				} 		
				cout << "======================\n";
				cout << "Promedio por grupo: " << endl;
				for(int i=0; i<4; i++)
				cout << i + 1 << " . " << promedio[ i ] << endl;
				cout << "======================\n";
			break;
			
			case 2:
				double maximo[4];
				for(int i=0; i<4; i++){
					for(int j=0; j<20; j++){
						if(max<a[i][j]){
							max=a[i][j];}
						}
					maximo[i]=max;
					max = a[0][0];
					cout << endl;
				}
				cout << "======================\n";
				cout << "Mayor nota por grupo: " << endl;
				for(int i=0; i<4; i++)
				cout << i + 1 << " . " << maximo[ i ] << endl;
				cout << "======================\n";
			break;
			
			case 3:
				double minimo[4];
				for(int i=0; i<4; i++){
					for(int j=0; j<20; j++){
						if(min>a[i][j]){
							min=a[i][j];}
						}
					minimo[i]=min;
					min = a[0][0];
					cout << endl;
				}
				cout << "======================\n";
				cout << "Menor nota por grupo: " << endl;
				for(int i=0; i<4; i++)
				cout << i + 1 << " . " << minimo[ i ] << endl;
				cout << "======================\n";
			break;
			
			case 4:
				double ganaron[4];
				for(int i=0; i<4; i++){
					for(int j=0; j<20; j++){
						if(a[ i ][ j ]>29){
						gano=gano+1;}
						}
					ganaron[i]= gano;
					gano = 0;
					cout << endl;
					}
				cout << "========================================\n";
				cout << "Cantidad de estudiantes que aprobaron: " << endl;
				for(int i=0; i<4; i++)
				cout << i + 1 << " . " << ganaron[ i ] << endl;
				cout << "========================================\n";
			break;
			
			case 5:
				double perdieron[4];
				for(int i=0; i<4; i++){
					for(int j=0; j<20; j++){
						if(a[ i ][ j ]<30){
						perdio=perdio+1;}
						}
					perdieron[i] = perdio;
					perdio = 0;
					cout << endl;
					}
				cout << "========================================\n";
				cout << "Cantidad de estudiantes que reprobaron: " << endl;
				for(int i=0; i<4; i++)
				cout << i + 1 << " . " << perdieron[ i ] << endl;
				cout << "========================================\n";
			break;
			
			case 0:
            	repetir = false;
            	break;
		}
	}
	while (repetir);
return 0;

}
