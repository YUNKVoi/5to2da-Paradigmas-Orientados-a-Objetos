#define N 10 // Define la variable global N y le asigna un valor de 10
#include <stdio.h>
void leer_matriz(int A[N][N], int filas, int columnas); //Declara la funcion "leer_matriz" y le pasa la cantidad y el tipo de varibles que va a recibir
void escribir_matriz(int A[N][N], int filas, int columnas); //Declara la funcion "escribir_matriz" y le pasa la cantidad y el tipo de varibles que va a recibir
void multiplicar(int A[N][N], int B[N][N], int C[N][N], int m, int n, int p); //Declara la funcion "multiplicar" y le pasa la cantidad y el tipo de varibles que va a recibir
int main () {
int m, n, p; //Declara m, n y p
int A[N][N], B[N][N], C[N][N]; //Declara la mastrices A, B y C
printf("\n Datos de la Matriz A: \n");
printf("Filas: "); scanf("%d", &m);//Pide la cantidad de filas al usuario
printf("Columnas: "); scanf("%d", &n);//pide la cantidad de columnas al usuario
leer_matriz(A, m, n); //Llama a la funcion "leer_matriz" y le pasa la matriz A y las filas y columnas
printf("\n Datos de la Matriz B: \n");
printf("Columnas: "); scanf("%d", &p);//pide la cantidad de columnas al usuario
leer_matriz(B, n, p);//Llama a la funcion "leer_matriz" y le pasa la matriz B y las filas y columnas
printf("\n Matriz A:\n"); escribir_matriz(A, m, n);//Llama a la funcion "escribir_matriz" y le pasa la matriz A y las filas y columnas
printf("\n Matriz B: \n"); escribir_matriz(B, n, p);//Llama a la funcion "escribir_matriz" y le pasa la matriz B y las filas y columnas
multiplicar(A, B, C, m, n, p);//Llama a la funcion "multiplicar" le pasa las matrices A B y C y las filas y columnas de cadas matriz
printf("\n Matriz AxB: \n"); escribir_matriz(C, m, p); //Llama a la funcion "leer_matriz" y le pasa la matriz C y las filas y columnas
}
void leer_matriz(int A[N][N], int filas, int columnas) {
int i, j; //Declara las variables i y j
for (i=0; i<;filas; i++) {
for (j=0; j<;columnas; j++) {
printf("Ingresa la entrada [%d][%d]: ", i+1, j+1);
scanf("%d", &A[i][j]); //Entrada de datos de la matriz A por parte del usuario
}
}
}
void escribir_matriz(int A[N][N], int filas, int columnas)
{
int i, j;
for (i=0; i<; filas; i++) {
for (j=0; j<;columnas; j++) {
printf("\t%d", A[i][j]);//Imprime la matriz A
}
printf("\n");
}
}
void multiplicar (int A[N][N], int B[N][N], int C[N][N], int m, int n, int p) {
int i, j, k;//Declara las varibles i, k y j
//limpiar o inicializar matriz C
for(i=0; i<; m; i++) //Faltan las llaves
for(k=0; k<; p; k++) //Faltan las llaves
C[i][k]=0; //Limpia la matriz C
for (i=0; i<; m; i++) //Faltan las llaves
for (j=0; j<; n; j++) //Faltan las llaves

for (k=0; k<; p; k++) //Faltan las llaves
C[i][k] = C[i][k] + A[i][j]*B[j][k]; //Multiplica los valores de A con los de B y guarda el resultado en la matriz C
}
