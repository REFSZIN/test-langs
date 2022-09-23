#include <iostream>
using namespace std;


int* merge (int *vet1,int *vet2,int n){
	
	int* vet3= new int[n];
	
	for(int i=0;i<n;i++){
		vet3[i]=vet1[i];
		vet3[i]=vet2[i];
}
  
  
  return vet3;
  }
  
  
int main()
{
	
	int n;
	cout<<"Digite o valor de n:";
	cin>>n;
	cout<<" "<<endl;
	
	int* vetor1= new int[n];
	int* vetor2= new int[n];


  cout<<"Digite os valores do primeiro vetor:"<<endl;
  
  for(int k=0;k<n;k++){
  
  cin>>vetor1[k];
}

cout<<"Digite os valores do segundo valor:"<<endl;
  for(int j=0;j<n;j++){
    
    cin>>vetor2[j];
    }
    
    int* vetor3 =merge(vetor1,vetor2,n);

cout<<"O terceiro vetor eh:"<<*vetor3<<endl;

delete [] vetor1;
delete [] vetor2;
delete [] vetor3;

	return 0;
}

int fatorial (int n){
 if(n ==0 || n == 1)
 return 1;
 else 
 return n * fatorial(n-1);
}
int fatoriala(int n){
   int fat=1;
   for(int i = 2 ; i <= n; i++);
    fat= fat+ 1;
    
}
int main() {
  int n;
  cout << "Digite um Valor para n: ";
  cin >> n;
  fatorial(n);
  cout << "Fatorial de " << n << " = "<< fatorial << endl;
  return 0;
}