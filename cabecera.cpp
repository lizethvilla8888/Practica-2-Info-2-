#include "cabecera.h"
/*
void problema1(int *arreglo ,dinero ){
    cout << *(arreglo+1)<<endl;
 return;
}

void Problema2 (char &arreglo){
    int aleatorio=0;
    srand(time(NULL));
    aleatorio = 65 + rand() % (90+1);
    return;
}
*/



void problema1 (){
int dinero ;
int cantidad [10]={50000,20000,10000,5000,2000,1000,500,200,100,50};
int numbillmon [10]={0,0,0,0,0,0,0,0,0,0}
                    ;
cout << "Ingrese cantidad de dinero:"<<endl;
cin >> dinero;

for (int i=0;i<10;i++){
     numbillmon[i]=dinero/cantidad [i];
     if (numbillmon[i]>0)
          dinero = dinero-(cantidad [i]*numbillmon[i]);
     }

for (int i=0;i<10;i++){
    cout << cantidad[i]<<" : " <<numbillmon[i]<<endl;
}
cout << "Faltante: "<<dinero<<endl;
}

void problema2 (){
srand(time (NULL));//para que cambien los valores
char vletras[100];
int vnum[100];

for (int i=0;i<100;i++){
     vnum[i] = 65+rand() %(90-65+1); //variable= limite inferior+rand ()%(limite superior+1-limite inferior)
     vletras[i]= vnum[i];
     cout << vletras[i]<<" ";
     }
cout <<"\n";
//letras abecedario
char letra;
int sum=0;
for (int i = 65; i<=90;i++){
     for (int j=0;j<100;j++){
         char verificacion = vletras[j];
         letra=i;
         if (letra ==verificacion)
            sum= sum+1;
     }
    if (sum >0 )
        cout << letra <<" = "<<sum<<endl;
  }

}

bool problema3(){

char cadena_1[101], cadena_2[101];
int longitud_1=0, longitud_2=0;
bool boleano_retorno=true;
cout << "Ingrese cadena de caractres 1: "<<endl;
scanf("%s",cadena_1);
cout << "Ingrese cadena de caractres 2: "<<endl;
scanf("%s",cadena_2);

for (int i =0;cadena_1[i]!= '\0';i++)
    longitud_1++;
for (int i =0;cadena_2[i]!= '\0';i++)
    longitud_2++;

if (longitud_1==longitud_2){
    for (int i =0;cadena_1[i] != '\0';i++)
        if (cadena_1[i] =! cadena_2[i])
            boleano_retorno = false;
}
else {
    cout << "Las cadenas de caracteres no son iguales"<<endl;
    boleano_retorno = false;
}
return boleano_retorno;
}

int  problema4 (char cadena[])
{
int numeros[100],longitud=0,numerofinal=0;

//ciclo para crear arreglo con los numeros int
for (int i =0;cadena[i]!= '\0';i++)
    {
    int num=0;
    num = cadena [i]-48;
    numeros[i]=num;
    longitud=longitud+1;
    }

//ciclo donde me multiplica cada numero por 10
for (int i=1;longitud>0;longitud--, i=i*10)
    {
    numeros [longitud-1]=numeros [longitud-1]*i;
    numerofinal= numerofinal+numeros [longitud-1];
    }
return numerofinal;
}

char *problema5 (){

int num_usuario, longitud_cadena ;
cout << "Ingrese numero a convertir en cadena de caracteres: "<<endl;
cin >> num_usuario;

longitud_cadena = longitud_numeros(num_usuario);
char cadena_caracteres[longitud_cadena];
char *puntero = cadena_caracteres;

if (num_usuario == 0)
    cout <<"Valor invalido"<<endl;

for (int i = 0;i < longitud_cadena; i++ ){
    cadena_caracteres [longitud_cadena-(i+1)] = (num_usuario%10)+48;
    num_usuario = num_usuario/10;
    }

cout << "La cadena de caraceres:"<<cadena_caracteres<<" Longitud cadena "<<longitud_cadena<<endl;
 return puntero;
}

void problema6 (){
char cadena[101]={},copia [101]={};//NULL
cout << "Ingrese cadena;"<<endl;
scanf("%s",cadena);

for (int i= 0;i<=100;i++)
{
    // si letra es minuscula
    if (cadena[i]>=97 && cadena[i]<=122)
    {
        copia[i]=cadena[i]-32;
    }
    // si letra es mayuscula
    if (cadena[i]<97 || cadena[i]>122)
    {
        copia [i]=cadena[i];
    }
}
cout <<"Original:      "<< cadena<<endl;
cout <<"En mayuscula: "<< copia<<endl;

}
void problema7(char *cadena, char *sin_repetir)
{
  *sin_repetir = '\0';
  for(int i=0;*(cadena+i)!='\0';i++) aux_p7(*(cadena+i),sin_repetir);

}

bool aux_p7(char c, char *cadena)
{
    int i=0;
    bool agregar = true;

    for(i=0;*(cadena+i)!='\0';i++){
        if(c == *(cadena+i)) agregar = false;
    }
    if(agregar){
        cadena[i] = c;
        cadena[i+1] = '\0';
    }
    return agregar;
}
void problema8 (){
int n;
cout << "Ingrese la cantidad de elementos:"<<endl;
cin >>n;

char cadena[n];
int numeros[n-1],contador = 0;
int num=0;

cout << "Ingrese cadena;"<<endl;
scanf("%s",cadena);

cout << "\n Original:\n"<<cadena<<endl;

//for que evalua los elementos de la cadena inegresada
for (int i = 0; i<=n;i++)
{
  //identifico si el carecter en la posicion [i] es un numero y lo llevo
  //a un arreglo numerico numeros[n]
  if (cadena [i]>= 48 && cadena [i]<=57)
  {
    num = cadena [i]-48;
    numeros [contador]=num;

    //elimino el caracter cadena [i].
    for (int k = i+1,eliminar=i;k<=n;k++,eliminar++)
        {cadena [eliminar]=cadena [k];}
    contador ++;
    i=i-1;
  }
}

cout << "\n Texto:\n "<< cadena <<"        "<<"\n Numeros: "<<endl;
for (int i = 0;i<contador;i++)
    cout <<numeros[i];

cout << endl;
}

void problema9 ()
{
int numdivisor,longitud=0,suma=0;
cout << "Ingrese numero para dividir cadena: "<<endl;
cin>>numdivisor;

char cadena[101];

cout << "Ingrese cadena de numeros:"<<endl;
scanf("%s",cadena);

cout << "Original: "<<cadena<<endl;

//ciclo para hallar longitud de la cadena de numeros
for (int i =0;cadena[i]!= '\0';i++)
    longitud++;

if (longitud%numdivisor!=0)
{
    //se repite hasta que se agregen los 0 a la izquierda necesarios a la cadena
    for (int i=0,ceros =0;longitud%numdivisor!=0;i++,ceros++)
        {
        //agrega 0 a la izquierda y corre cada elemento de la cadena 1 posición a la derecha
        for (int j = longitud;j>0;j--)
             {
             cadena[j] = cadena[j-1];
             }
        cadena [ceros]=48;
        longitud++;
        }
}
//convertir cadena de char a int y realizar la suma de num divididos
char subcadena [numdivisor+1];
int num= 0;
while (longitud>0)
{
subcadena [numdivisor]='\0';
    //creo cadena de char de long = numdivisor
    for (int copianumdivisor=numdivisor;copianumdivisor>0;copianumdivisor--)
        {
        subcadena[copianumdivisor-1]=cadena [longitud-1];
        longitud--;
        }
//subcadena se convierte en int y vuelve como num
num = problema4(subcadena);
suma=num+suma;
}

cout << "Suma: " <<suma << endl;
}

void problema10(){

}

void problema12 ()
{
int filas_colum =0;
cout <<"Ingrese numero de filas: "<<endl;
cin >> filas_colum;

int matriz [filas_colum][filas_colum],verificacion=0;
bool veri_horizontal = true,veri_vertical=true,veri_diagonal=true,veri_diagonal_secundaria=true;

//usuario ingresa matriz
for (int i = 0; i< filas_colum;i++)//i filas
{
    for (int j=0;j<filas_colum;j++)//j columnas
        {
         cout << "Dijite numero [" <<i<<"]["<<j<<"]:";
         cin >> matriz[i][j];
        }
}

//mostrar matriz, verificacion horizontal
for (int i = 0; i<filas_colum;i++)
{
     int suma_horizontal=0;
     for (int j=0;j<filas_colum;j++)
     {
         cout << " ["<<matriz[i][j]<<"] ";
         suma_horizontal = suma_horizontal + matriz[i][j];
     }
     if (verificacion==0)
         verificacion=suma_horizontal;

     if (suma_horizontal!=verificacion)
         veri_horizontal = false;

     cout <<"\n";
}

// verificacion=suma_vertical;
if (veri_horizontal==true )
{
    for (int j=0;j<filas_colum;j++)
    {
    int suma_vertical=0;
        for (int i=0;i<filas_colum;i++)
        {
            suma_vertical= suma_vertical+matriz[i][j];
        }

    if (suma_vertical!=verificacion)
        veri_vertical=false;
    }
}

//verificacion diagonal principal
if (veri_vertical==true)
{
   int suma_diagonal_principal=0;
   for (int j=0,i=0;j<filas_colum;j++,i++)
        {
         suma_diagonal_principal=suma_diagonal_principal+matriz[i][j];
        }
   if (suma_diagonal_principal!=verificacion)
        veri_diagonal=false;
}

//verificacion diagonal secundaria
if (veri_diagonal==true)
{
   int suma_diagonal_secundaria=0;
   for (int i=0,j=filas_colum-1;i<filas_colum;i++,j--)
       {
       suma_diagonal_secundaria=matriz[i][j]+suma_diagonal_secundaria;
       }
   if (suma_diagonal_secundaria!=verificacion)
       veri_diagonal_secundaria=false;
}

if (veri_horizontal==false || veri_vertical==false || veri_diagonal==false || veri_diagonal_secundaria==false)
    cout << "La matriz NO es cuadrado magico"<<endl;

if (veri_horizontal==true && veri_vertical==true && veri_diagonal==true && veri_diagonal_secundaria==true)
    cout << "La matriz es cuadrado magico"<<endl;
}

void problema13 ()
{
   /*
int filas,columnas;
cout <<"Ingrese numero de filas: "<<endl;
cin >> filas;

cout <<"Ingrese numero de columnas: "<<endl;
cin >> columnas;

int matriz [columnas][filas];
cout << "\n";

//usuario ingresa matriz
for (int i = 0; i< filas;i++)//i filas
    {
    for (int j=0;j<columnas;j++)//j columnas
        {
        cout << "Dijite numero [" <<i<<"]["<<j<<"]:";
        cin >> matriz[i][j];
        }
    }
//   */
int estrellas =0;
 // /*

int filas=6,columnas=8;
int matriz [6][8]={{0,3,4,0,0,0,6,8},//6 filas, 7 columnas
                  {5,13,6,0,0,0,2,3},
                  {2,6,2,7,3,0,10,0},
                  {0,0,4,15,4,1,6,0},
                  {0,0,7,12,6,9,10,4},
                  {5,0,6,10,6,4,8,0}};
// */

//i= filas, j= columnas
for (int i = 0; i<filas;i++)
{
     for (int j=0;j<columnas;j++)
     {
         cout << " "<<matriz[i][j]<<" ";
         if (i!=0 && j!=0)
         {
             if (i!=filas-1 && j!=columnas-1)
             {
             float suma=0;
             suma = (matriz[i][j]+matriz[i][j-1]+matriz[i][j+1]+matriz[i-1][j]+matriz[i+1][j]);
             suma = suma /5;
             if (suma >6.0)
                 estrellas++;
             }
         }
     }
cout <<"\n";
}

cout << "\nEstrellas: "<<estrellas<<endl;

}

int *** generar_conj_matrices(unsigned short dim){
    int ***conj_matrices = new int **[4];
    conj_matrices[0] = generar_matriz(dim);
    for(unsigned short i=1;i<4;i++) conj_matrices[i] = rotar90(conj_matrices[i-1],dim);

    return conj_matrices;
}

int ** generar_matriz(unsigned short dim){
    int ** matriz = dinamica_p2(dim);

    for(unsigned short f=0;f<dim;f++){
        for(unsigned short c=0;c<dim;c++) matriz[f][c] = dim*f+(c+1);
    }

    return matriz;
}

int ** dinamica_p2(unsigned short dim){
    int ** a = new int* [dim];

    for(unsigned short i=0;i<dim;i++) a[i] = new int [dim];

    return a;
}

int ** rotar90(int ** matriz, unsigned short dim){
    int ** R_matriz = dinamica_p2(dim);

    for(unsigned short f=0;f<dim;f++){
        for(unsigned short c=0;c<dim;c++) R_matriz[c][dim-f-1] = matriz[f][c];
    }

    return R_matriz;
}

void imprimir_matriz(int **matriz, unsigned short dim){
    for(unsigned short f=0;f<dim;f++){
        for(unsigned short c=0;c<dim;c++) cout << matriz[f][c] << '\t';
        cout << endl << endl;
    }
}

void imprimir_conj_matrices(int ***conj_matrices, unsigned short dim){
    for(unsigned short i=0;i<4;i++){
        cout << "Matriz rotada " << i*90 << " grados" << endl << endl;
        imprimir_matriz(conj_matrices[i],dim);
        cout << endl << endl;
    }
}

void problema15 ()
{
// {0, 0, 8, 4} y {5, 2, 6, 7}, el rectángulo intersección C debe ser el arreglo {5, 2, 3, 2}.
//int r1[4]= {0,0,0,0}, r2[4] = {0,0,0,0}, c [4]= {0,0,0,0};
int r1[4]= {2,5,5,4}, r2[4] = {1,7,3,4},c [4]= {0,0,0,0} ;
///*
cout << "Ingrese rectangulo 1:"<<endl;
for (int i = 0; i< 4;i++)
{
  cout << "Dijite valores rectangulo 1: ";
  cout << "Valor: ["<<i<<"]: ";cin >> r1 [i];
} cout << "\n \n";
//*/
for (int i=0;i<4;i++)
{
  cout << "Dijite valores rectangulo 2: ";
  cout << "Valor: ["<<i<<"]: "; cin >> r2 [i];
} cout << "\n \n";

//rectangulo 2 arriba a la izquierda
    /*      r2
     *     ---- w
     *    |  _ |__
     *    | |  |  |
     *    p----   |
     *      |z    |
     *       -----
     *        r1
     */

if (r1[0] > r2[0] && r2 [1] > r1 [1])
{
  int  w,p,z;
    w = r2 [0] + r2 [2];//coordenada en x de esquina inferior derecha r2
    p = r2 [1] - r2 [3]; //coordenada en y de esquina inferior derecha r2
    z = r1 [1]- p;

  c[0]=r1[0],c[1]=r1[1], c[2]= w - r1[0] ,c[3]= z;
}

//rectangulo 2 arriba a la derecha
/*         r2
 *        ______
 *       |      |
 *       |      |
 *  _____|___x  |
 * |     |   |  |
 * |     y------
 * |         |
 *  ---------
 *   r1
 */

if (r2 [0] > r1[0] && r2 [1] > r1 [1] )
{
    int x, y;
    x= r1[0]+r1[2];
    y = r1[1]-(r2[1]-r2[3]);
    c[0]= r2 [0] , c[1]= r1 [1] , c[2]= x-r2[0], c [3]=y;
}

//rectangulo 2 abajo a la izquierda
/*         r1
 *         ----------
 *        |          |
 *   ---------x      |
 *  |     |   |      |
 *  |     |   |      |
 *  |     y----------
 *  |         |
 *   ---------
 *   r2
 */

if (r2 [0]>r1 [0] && r1 [1]>r2 [1])
{
  int x, y ;
  x = r2 [0] + r2 [3];
  y = r1 [0] - r1 [3];
  c[0]= r1[0] , c[1]= r2 [1] , c[2]= x-r1 [0], c [3]=r2 [1]-y;
}

// rectangulo 2 abajo a la derecha
/*         r1
 *   ---------
 *  |         |
 *  |     x___|___
 *  |     |   |   |
 *  |     |   |   |
 *   ---------y   |
 *        |       |
 *         ------- r2
 */

if (r1 [0] < r2 [0] && r1 [1] > r2 [1] )
{
int x, y ;
x = r1 [0] + r1 [2];
y = r1 [1] - r1 [3];
c[0]= r2[0] , c[1]= r2 [1] , c[2]= x-r2 [0], c[3]= y-r2 [1];
}

// rectangulo 2 contenido en rectangulo 1
/*     r1
 *    ----------      O r1 -------- r2
 *   |  ------  |         |        |
 *   | | r2   | |         |        |
 *   |  ------  |         |        |
 *    ----------           --------
 */
if (r1 [0]>= r2 [0] && r1 [1]>=r2 [1] &&r1 [2] >= r2 [2] && r1 [3] >= r2 [3])
    c[0]= r2 [0], c[1]= r2[1] , c[2]= r2[2], c[3]= r2[3];

// rectangulo 1 contenido en rectangulo 2
/*     r2
 *    ----------      O r1 -------- r2
 *   |  ------  |         |        |
 *   | | r1   | |         |        |
 *   |  ------  |         |        |
 *    ----------           --------
 */

if (r2[0] >= r1[0] && r2[1] >= r1[1] && r2[2] >= r1[2] && r1 [3] <= r2[3] )
   c[0]= r1 [0], c[1]= r1[1] , c[2]= r1[2], c[3]= r1[3];

for (int i = 0; i < 4 ; i++)
    cout << c [i]<< " ";

}

void problema16 () {
    int n;
    long double total;
    long double factorial=1;
    long double factorial2=1;
    long double mul_f2=0;
    cout<<"Ingrese el numero de la malla"<<endl;
    cin>>n;
    long double suma=n+n;
      for (int i=1;i<=suma;i++)
           {
               factorial=factorial*i;
           }
       for (int j=1;j<=n;j++)
           {
               factorial2=factorial2*j;
           }
       mul_f2=factorial2*factorial2;
       total=factorial/mul_f2;
       cout<<"Para una malla de "<<n<<"X"<<n<<"  puntos hay   "<<total<<"   caminos"<<endl;
}

void problema17 ()
{
int num,num1=219,num2=0,divi1=0,divi2=0,suma=0;

cout<< "Ingrese numero: "<<endl;
cin >>num;

if (num > num1)
{
int copia1 = 220, copia2 = 284; // no sumar dos veces los mismos numeros
   while (num1 <= num)
    {
    num2=divisores(num1);//suma de div num1
    divi1=num2;
    divi2= divisores(num2);//0

        if ((num1==divi2 )&& (num2==divi1)&& (num1 != 496) && (copia1 != num2 )&& (copia2 != num1))
            {
            copia1 = num1; copia2 = num2;
            suma = suma + num1 + num2;
            }
    num1++;
     }
}
cout << "Suma: "<<suma<<endl<<"\n";
}
void problema18 (){
    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n, contador = 1;

    cout << "Ingrese el numero de permutacion que desea generar: ";
    cin >> n;
    //Aqui se generan las combinaciones
    while (next_permutation(nums.begin(), nums.end())) {
          if (contador == n) {
             for (auto num : nums) {
                  cout << num << " ";
               }
               cout << endl;
               break;
           }
           contador++;
       }
}
int divisores (int num){
int suma =0;
for (int i=1; i<=num/2 ;i++){
    if (num%i==0){
        suma = suma+i;
        //cout << i <<" ";
    }
}
//cout <<"Suma: "<< suma <<endl;
return suma;
}

int longitud_numeros(int num){
int longitud =0;
for (int i =0; num > 0; i++){
     num = num /10;
     longitud ++;
}
return longitud;
}
