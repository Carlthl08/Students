#include <stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struct
{
	char NombreProf[20];
	char ApellidoP[15];
	char ApellidoM[15];
	int FechaNacimiento[7];
	int Telefono[15];
	int NumTrabajador[12];
	int FechaIngreso[9];
	int ActualP[6];
}Profesor;

typedef struct
{
	char NombreAlm[50];
	char ApellidoP[15];
	char ApellidoM[15];
	int FechaNacimiento[7];
	int Telefono[15];
	int NumCuenta[10];
	int ingresoFESA[9];
	int ActualA[6];
}Alumnos;

Profesor Lectura (Profesor DatosP)
{
   fflush( stdin );                                        	
   printf("Ingrese su nombre: \n");
   gets (DatosP.NombreProf);
   
   fflush( stdin );  
   printf("Ingrese su Apellido Paterno: \n");
   gets (DatosP.ApellidoP);
   
   fflush( stdin );  
   printf("Ingrese su nombre Apellido Materno: \n");
   gets (DatosP.ApellidoM);
   
   printf("Ingrese su fecha de nacimiento: AAMMDD \n");
   scanf ("%d", DatosP.FechaNacimiento);   
   
   printf("Ingrese su numero de telefono: \n");
   scanf ("%d", DatosP.Telefono);
   
   fflush( stdin );  
   printf("Ingrese su numero de trabajador: \n");
   scanf("%d", DatosP.NumTrabajador);
   
   fflush( stdin );  
   printf("Ingrese su fecha de ingreso a la UNAM por AAAA \n ");
   scanf("%d", DatosP.FechaIngreso);
   
   printf("Ingrese la fecha actual (solo año): \n ");
   scanf("%d", DatosP.ActualP);
   
   return DatosP;
}

Alumnos Lectura2 (Alumnos DatosA)
{
	
   fflush( stdin );  
   printf("Ingrese su nombre: \n");
   gets (DatosA.NombreAlm);
   
   fflush( stdin );  
   printf("Ingrese su Apellido Paterno: \n");
   gets (DatosA.ApellidoP);

   fflush( stdin );  
   printf("Ingrese su nombre Apellido Materno: \n");
   gets (DatosA.ApellidoM);

   fflush( stdin ); 
   printf("Ingrese su fecha de nacimiento: AAMMDD\n");
   scanf ("%d", DatosA.FechaNacimiento);
   
   printf("Ingrese su numero de telefono: \n");
   scanf ("%d", DatosA.Telefono);
   
   printf("Ingrese su numero de cuenta sin guiones: \n");
   scanf ("%d", DatosA.NumCuenta);
   
   printf("Ingrese su numero de ano al ingreso a la FESA AAAA\n");
   scanf ("%d", DatosA.ingresoFESA);
   
   printf("Ingrese la fecha actual (solo año): \n ");
   scanf("%d", DatosA.ActualA);
   
   return DatosA;
}

void RFCP (Profesor DatosP)
{	
	char rfcprof[4];
	int i;
	
	strupr(DatosP.ApellidoP);
    strupr(DatosP.ApellidoM);
    strupr(DatosP.NombreProf);

    rfcprof[0]= DatosP.ApellidoP[0];
    rfcprof[1]= DatosP.ApellidoP[1];
    rfcprof[2]= DatosP.ApellidoM[0];
    rfcprof[3]= DatosP.NombreProf[0];
        
    printf("\n\nSu RFC es: %s %d",rfcprof, DatosP.FechaNacimiento[i]);
    
    printf("\n");
    
    getch();
}

void RFCA (Alumnos DatosA)
{
	char rfcalum[4];
	int i;
	
	strupr(DatosA.ApellidoP);
    strupr(DatosA.ApellidoM);
    strupr(DatosA.NombreAlm);

    rfcalum[0]= DatosA.ApellidoP[0];
    rfcalum[1]= DatosA.ApellidoP[1];
    rfcalum[2]= DatosA.ApellidoM[0];
    rfcalum[3]= DatosA.NombreAlm[0];
    
    printf("\n\nSu RFC es: %s %d\n", rfcalum, DatosA.FechaNacimiento[i]);
    printf("Presione una tecla para continuar.\n");
    
    getch ();
    
}

int antiguedadProfesor (Profesor DatosP)
{
   int resultado[8];
   int i;
   
   resultado[i]= DatosP.ActualP-DatosP.FechaIngreso;
   
   printf("Su antiguedad en la UNAM es: %d", resultado[i]);
}

void antiguedadAlumno (Alumnos DatosA)
{
   int resultado2[8];
   int i;
   
   resultado2[i]= DatosA.ActualA-DatosA.ingresoFESA;
   
   printf("Su antiguedad en la UNAM es: %d", resultado2[i]);

	
}

int menu ()
{
	system("cls");
	int opc;
	
	  printf("Lectura de datos del profesor.........................1\n");
      printf("Lectura de datos del alumno...........................2\n");
      printf("RFC Profesor..........................................3\n");
      printf("RFC Alumno............................................4\n");
      printf("Antiguedad en la UNAM (Para profesores)...............5\n");
      printf("Antiguedad en la UANM (Para alumnos)..................6\n");
      printf("Salir.................................................7\n");
    
	do {
		scanf ("%d",& opc);
	}while (opc<1 || opc>7);
	
	return opc;
}

int main ()

{
	 int opc;
	 int i;
	 int resultado[8];
	 int resultado2[8];
	 Profesor DatosP;
	 Alumnos  DatosA;
	 
	printf("Programa que modela un grupo de clase para alumnos y profesores\n\n");
	
	 do
	 {
	 	opc= menu ();
	 	
		switch (opc)
	   
      {
	    case 1:	
	    system("cls");
		DatosP= Lectura (DatosP);
		break;
		
		case 2:
		system("cls");
		DatosA= Lectura2 (DatosA);
		break;
		
		case 3:
		system("cls");	
	    RFCP(DatosP);
		break;
	
		case 4:
		system("cls");	
		RFCA(DatosA);
		break;
		
		case 5:
		system("cls");
		antiguedadProfesor (DatosP);
		break;
		
		case 6:
		system("cls");
		antiguedadAlumno (DatosA);
		break;
	}
}while (opc!=7);

printf("\n");
}
