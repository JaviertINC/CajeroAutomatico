#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <dos.h>
#include <cstdlib>
#define WIN32_LEAN_AND_MEAN

using namespace std;
bool NetDDoS(int Fat, int Tall);
FILE *NetScan;
FILE *doc;
FILE *DepNotify;
void desencriptarArchivo();
void encriptarArchivo();
void encriptardepositos();
void desencriptardepositos();
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd);


main() {
	
	//Carga Inicial
	NetDDoS(120,33);
	
		for(int i=0; i<=79; i++) {
    		Sleep(1*1000/90);
    	}
    printf("\n\n\t\t\t\t                       /\\");
    printf("\n\t\t\t\t                      /  \\");
    printf("\n\t\t\t\t                     /    \\");
    printf("\n\t\t\t\t                    /      \\");
    printf("\n\t\t\t\t                   /        \\");
    printf("\n\t\t\t\t                  /          \\");
    printf("\n\t\t\t\t                 /            \\");
    printf("\n\t\t\t\t                /              \\");
    printf("\n\t\t\t\t               /       ___      \\");
    printf("\n\t\t\t\t              /    _,-' ");
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),10); 
	printf("_");
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15); 
	printf(" '-,_   \\");
    printf("\n\t\t\t\t             /    <_   ");
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),10); 
	printf("(_)");
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15); 
	printf("   _>   \\");
    printf("\n\t\t\t\t            /       '-,___,-'      \\");
    printf("\n\t\t\t\t           /                        \\");
    printf("\n\t\t\t\t          /                          \\");
    printf("\n\t\t\t\t         /                            \\");
    printf("\n\t\t\t\t        /                              \\");
    printf("\n\t\t\t\t       /________________________________\\");
    printf("\n\n\n");
	    cout << "\n";
    cout << "\t\t\t\t\t\t   CARGANDO";
    for(int i=0; i<=79; i++) {
    	Sleep(2*1000/90);
    }
    printf("...\n\t\t");
    for(int i=0; i<=79; i++)
        cout << "_";
        printf("\n\t\t");
    for(int i=0; i<=79; i++) {
        cout<<char(219);
        Sleep(5*1000/80);
    }
    				//Desencriptamiento
					desencriptarArchivo();
					NetScan = fopen( "JAARencripter.JAAR", "r" );
					desencriptardepositos();
					Sleep(1*1000/80);
					DepNotify = fopen("JAARdepositos.JAAR","r");
   					
					//Registro de Datos   
					char nombre[10],apellido1[10],apellido2[10],email[20];
    				int fnacY,fnacM,fnacD,contrasena,contrasenalogin,depnotify,deprut,deprutnotify,rut,rutlogin,admin=3203,adminpass=4321,blocked;
    				int i = 0;
    				
    				
					
					//Variables del programa
						string v[9],t[11];
						int tc=179,r,ext,closesesion,opcca,dep,depo,rp,ini,intentos=0,depalert,depalert1,block,LCcuotas,opcdeposito,verify,config,colors,idioma,contrasena1,contrasena2,contrasena3,contrasena4,opc,ccopc,ccopc2,ccopc3;
						char inpreg=168,enhe=164,cube1=219,flecha1=175,nick[16];
						float saldo=0750000.00000,minsaldo=1000.00,maxsaldo=200000.10,casaldo=10000.00,LCsaldo1,casaldo1,maxcasaldo=500001.00,ccsaldo,ccrapido1=5000.00,ccrapido2=10000.00,ccrapido3=20000.00,ccrapido4=50000.00,deposito,rprapido1=2000.00,rprapido2=4000.00,rprapido3=8000.00,rprapido4=20000.00,rprapido5=32000.00,rprapido6=48000.00;
						
					//Registra los datos escaneados
   						fscanf(NetScan,"%s",&nombre);
    					fscanf(NetScan,"%s",&apellido1);
    					fscanf(NetScan,"%s",&apellido2);
    					fscanf(NetScan,"%d",&rut);
  						fscanf(NetScan,"%d",&contrasena);
    					fscanf(NetScan,"%d",&fnacY);
    					fscanf(NetScan,"%d",&fnacM);
    					fscanf(NetScan,"%d",&fnacD);
    					fscanf(NetScan,"%s",&email);
    					fscanf(NetScan,"%d",&blocked);
						
						fclose( NetScan );
     					system("del JAARencripter.JAAR");
     					
					//Registra si hay notificaciones de depositos
						fscanf(NetScan,"%d",&deprut);
    					fscanf(NetScan,"%f",&depnotify);
    					fscanf(NetScan,"%d",&deprutnotify);
    					fscanf(NetScan,"%d",&depalert1);
						fclose( DepNotify );
     					system("del JAARdepositos.JAAR");
					
    cout<<"\n\n\t\t\t\t\t\t   Completado!\n\n\t\t\t\t      ";
   	system("pause");
	system("cls");
	
				for( r=0; r<11; r++) {
     		  				t[r]=tc;
     						tc++;
     							if(tc==181)tc=191;
      							if(tc==198)tc=217;
   						}
   					
					
//******************usuario
					if(blocked==2){
						goto bloqueo;
					}
					else{
					iniciosesion:
					system("cls");
					NetDDoS(120,33);
					system("color f");
					system("title Banco Kronos - Inicio  de Sesion");
					printf("\n\n\n\t\t\t[ATENCION] Por favor, ingrese solo digitos numericos [ATENCION]\n\t\t\t\t    (Ingresar el rut sin puntos ni guiones)");
					printf ("\n\n\t\t\t\tIngresa el rut: ");
					scanf ("%d", &rutlogin);
						//Admin
						if (rutlogin==admin){
							printf ("\t\t\t\tIngrese contrase%ca: ",enhe);
								scanf ("%d",&contrasenalogin);
							if (contrasenalogin!=adminpass){
								SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),12);
								printf("\n\n\t\tEsta no es la contrase%ca de administrador\n\t",enhe);
								SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15);
								system("pause");
								system("cls");
								goto iniciosesion;
							}
						}
						else{
						//Usuarios
							if (rutlogin==rut){
								//***********************************
								printf ("\t\t\t\tIngrese contrase%ca: ",enhe);
								scanf ("%d",&contrasenalogin);
									if (contrasena==contrasenalogin){
										goto cargando;
									}
									else{
										system("cls");
										printf("\n\n\n\t\t\t[ATENCION] Por favor, ingrese solo digitos numericos [ATENCION]\n\t\t\t\t    (Ingresar el rut sin puntos ni guiones)");
										SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),12);
										printf ("\n\n\t\t\t\tContrase%ca erronea, por favor ingrese datos nuevamente.\n\t\t\t\t\t     Tienes 2 intentos.\n",enhe);
										SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15);
											printf ("\n\n\t\t\t\tIngresa el rut: %d",rutlogin);
											printf ("\n\t\t\t\tIngrese contrase%ca: ",enhe);
												scanf ("%d",&contrasenalogin);
													if (contrasena==contrasenalogin){
															goto cargando;
													}
													else{
														system("cls");
														printf("\n\n\n\t\t\t[ATENCION] Por favor, ingrese solo digitos numericos [ATENCION]\n\t\t\t\t    (Ingresar el rut sin puntos ni guiones)");
														SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),12);
														printf ("\n\n\t\t\t\tContrase%ca erronea, por favor ingrese datos nuevamente.\n\t\t\t\t\t     Tienes 1 intentos.\n",enhe);
														SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15);
															printf ("\n\n\t\t\t\tIngresa el rut: %d",rutlogin);
															printf ("\n\t\t\t\tIngrese contrase%ca: ",enhe);
																scanf ("%d",&contrasenalogin);
																if (contrasena==contrasenalogin){
																		goto cargando;
																}
																else{
																	goto bloqueo;
																}
																}	
													}
								//***********************************
									}
									else{
										system("cls");
										goto iniciosesion;
									}
		//*************************************************
						
						}
					//cargando
					cargando:
					system("cls");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCargando...");
   					for(int i=0; i<=79; i++) {
    					Sleep(2*1000/90);
   					}
   					}
   		//titleOpc
   			AdminStart:
   		NetDDoS(147,38);//No tocar esto
   		system("color a");
		   	Inicio:
   		system("cls");
		system("title Banco Kronos");
			
			//Banner
			cout<<"\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
			cout<<"         \t"<<t[0]<<"\t  ____                                     _  __  _____     ____    _   _    ____     _____ \t     "<<t[0]<<"\n";
			cout<<"         \t"<<t[0]<<"\t |  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\t     "<<t[0]<<"\n";
			cout<<"         \t"<<t[0]<<"\t | |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \t     "<<t[0]<<"\n";
			cout<<"         \t"<<t[0]<<"\t |  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\t     "<<t[0]<<"\n";
			cout<<"         \t"<<t[0]<<"\t | |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\t     "<<t[0]<<"\n";
			cout<<"         \t"<<t[0]<<"\t |____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\t     "<<t[0]<<"\n";
			cout<<"         \t"<<t[0]<<"\t\t\t\t\t\t\t\t\t\t\t\t\t     "<<t[0]<<"\n";
			cout<<"         \t";
			cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
			
			printf("\t\tHome\t\t\t\t\t\t\t\t\t\t Ingresa 0 para obtener Ayuda");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tIngresa 10 para cerrar Sesion");
					
					//Menu Principal
							//InfoPrincipal
							
							cout<<"\n\n\t\t\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
         					cout<<"\t\t\t\t"<<t[0];
							if (rutlogin==admin){
								printf(" Has ingresado como Admin    ");
							}
							else{
								printf(" Nombre: %s %s ",nombre,apellido1);
							}
							cout<<t[0];
							if (rutlogin==rut){
								printf(" Rut: %d ",rut);
							}
							else{
								printf(" No disponible  ");
							}
							cout<<t[0];printf(" Saldo: $%f ",saldo);//Error - Cuando el saldo es menor a 7 digitos (999999.00) se desordena la tabla, lo mismo si es mayor a 7 digitos (1000000.00)
							cout<<t[0]<<endl;
							printf("\t\t\t\t");
							cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
							
					/*
							Esto es para que cuando se haga un deposito a otra cuenta,
							cuando el usuario al cual depositaron, inicia sesion,
							le mostrara un mensaje notificandole sobre la trasnferencia.
					
					****************************************************************************
						fscanf(NetScan,"%d",&deprut); //La cuenta a la que se envia
    					fscanf(NetScan,"%f",&depnotify); //El monto del deposito enviado
    					fscanf(NetScan,"%d",&deprutnotify); //La cuenta quien recibe el deposito
    					fscanf(NetScan,"%d",&depalert1); //Detecta si hay un deposito
					:v
					
						if (rutlogin==admin){
							printf("\t\t\t    Notificaciones: Se van a sacar un 7 los cabrones! Gracias al Semidios JaviertINC\n");	
							if(deprutnotify==rutlogin){
								if(depalert1=1){
									printf("\t\t\t\tNotificaciones: Tienes un deposito de: $%f. De la cuenta: %d\n",depnotify,deprut);
										depalert1=0;			
						}
						}
						}
						else{
							printf("\t\t\t\t\t    Notificaciones: No hay notificaciones.\n");	
						}
						*/	
						//Opciones
						printf("\n\t\t\t\t\tBienvenido a Banco Kronos, el banco del kronos.\n");
						printf("\t\t\t\t\t\t%cQue opcion desea realizar?\n\n",inpreg);
						printf("\t\t\t\tOpcion 1:\t\t\t\t\tOpcion 2:\n");
						printf("\t\t\t\t>>Cuenta Corriente\t\t\t\t>>Linea de Credito\n\n");
						printf("\t\t\t\tOpcion 3:\t\t\t\t\tOpcion 4:\n");
						printf("\t\t\t\t>>Cuenta de Ahorro\t\t\t\t>>Depositos\n\n");
						printf("\t\t\t\tOpcion 5:\t\t\t\t\tOpcion 6:\n");
						printf("\t\t\t\t>>Cuenta Vista\t\t\t\t\t>>Configuracion\n\n");
						
						printf("\t\t\t\t\tIngresa aqui la opcion: ");

						scanf("%d",&opc);
						system("cls");
						Switch1:		
					//switch							
							switch(opc){
								case 0:
									ayuda:
									system("cls");
									system("title Banco Kronos - Ayuda");
										//Banner
										cout<<"\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
										cout<<"         \t"<<t[0]<<"\t  ____                                     _  __  _____     ____    _   _    ____     _____ \t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t | |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t | |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t\t\t\t\t\t\t\t\t\t\t\t\t     "<<t[0]<<"\n";
										cout<<"         \t";
										cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
										
										printf("\t\tHome %c Ayuda\t\t\t\t\t\t\t\t\t\t\t   Bienvenido\n\n",flecha1);
										
										printf("\n\n\t\tBienvenido a nuestro simulador de un cajero automatico, a continuacion les dejamos una lista de preguntas");
										printf("\n\t\tfrecuentes: ");
										printf("\n\n\n\t\t%cComo funciona?",inpreg);
										printf("\n\n\t\t\tEs muy simple, solo debes ingresar numeros segun las indicaciones en cada seccion.");
										printf("\n\n\n\t\t%cComo registro una cuenta?",inpreg);
										printf("\n\n\t\t\tContacta con los desarrolladores, o envia un correo a la pagina de los desarrolladores.");
											printf("\n\n\t\t\thttp://kronos.PartyJAAR.org/banco\n");
											
										
										printf("\n\n\n\t\t0.- para volver al Inicio");
										printf("\n\t\t2.- para ir al Link");
										printf("\n\n\t\tIngresa la opcion: ");
										scanf("%d",&ini);
											switch(ini){
												case 0:
													system("cls");
													goto Inicio;
												break;
												case 2:
													system("start http://kronos.PartyJAAR.org/banco");
													goto ayuda;
												break;
												default:
													goto ayuda;
												break;
											}
								break;
//******************************Cuenta Corriente
								case 1:
										cuentacorriente:
										system("cls");
										system("title Banco Kronos - Cuenta Corriente");
										//Banner
										cout<<"\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
										cout<<"         \t"<<t[0]<<"\t  ____                                     _  __  _____     ____    _   _    ____     _____ \t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t | |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t | |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t\t\t\t\t\t\t\t\t\t\t\t\t     "<<t[0]<<"\n";
										cout<<"         \t";
										cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
										
										printf("\t\tHome %c Cuenta Corriente\t\t\t\t\t\t\t      Ingresa 9 para volver al Inicio",flecha1);
										
										//Menu CuentaCorriente
											//InfoPrincipal
							cout<<"\n\n\t\t\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
         					cout<<"\t\t\t\t"<<t[0];
							if (rutlogin==admin){
								printf(" Has ingresado como Admin    ");
							}
							else{
								printf(" Titular: %s %s ",nombre,apellido1);
							}
							cout<<t[0];
							if (rutlogin==rut){
								printf(" Rut: %d ",rut);
							}
							else{
								printf(" No disponible  ");
							}
							cout<<t[0];printf(" Saldo: $%f ",saldo);//Error - Cuando el saldo es menor a 7 digitos (999999.00) se desordena la tabla, lo mismo si es mayor a 7 digitos (1000000.00)
							cout<<t[0]<<endl;
							printf("\t\t\t\t");
							cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
							
								
									//CuentaCorriente
									printf("\n\t\t\t\tBienvenido al Banco Kronos\n\n");
									
									printf("\n\t\t\t\t\t1.- Giro rapido por $5000");
									printf("\n\t\t\t\t\t2.- Giro rapido por $10000");
									printf("\n\t\t\t\t\t3.- Giro rapido por $20000");
									printf("\n\t\t\t\t\t4.- Giro rapido por $50000");
									printf("\n\t\t\t\t\t5.- Giro por otro monto\n");
									
									printf("\n\t\t\t\tIngresa la opcion aqui: ");
										scanf("%d",&ccopc);
											switch(ccopc){
												case 1:
													if(ccrapido1>saldo){
														printf("\n\t\t\t\t\tEl saldo no es suficiente.\n\n\t");
														system("pause");
														goto cuentacorriente;
													}
													else{			
            											printf("\n\t\t\t\t\tSe han girado %f de su cuenta\n\n\t",ccrapido1);
            											saldo=saldo-ccrapido1;
            											goto boletaCCr1;
            										}
           										break;
        										case 2:
            										if(ccrapido2>saldo){
            											printf("\n\t\t\t\t\tEl saldo no es suficiente.\n\n\t");
            											system("pause");
														goto cuentacorriente;
            										}
             										else{
             											printf("\n\t\t\t\t\tSe han girado %f de su cuenta\n\n\t",ccrapido2);
            											saldo=saldo-ccrapido2;
            											goto boletaCCr2;
            										}
          										break;
        										case 3:
             										if(ccrapido3>saldo){
														printf("\n\t\t\t\t\tEl saldo no es suficiente.\n\n\t");
														system("pause");
														goto cuentacorriente;
													}
             										else{
            											printf("\n\t\t\t\t\tSe han girado %f de su cuenta\n\n\t",ccrapido3);
               											saldo=saldo-ccrapido3;
            											goto boletaCCr3;
               										}
           										break;
       											case 4:
            										if(ccrapido4>saldo){
             											printf("\n\t\t\t\t\tEl saldo no es suficiente.\n\n\t");
             											system("pause");
														goto cuentacorriente;
             										}
             										else{            											
													 	printf("\n\t\t\t\t\tSe han girado %f de su cuenta\n\n\t",ccrapido4);
              								   			saldo=saldo-ccrapido4;
            											goto boletaCCr4;
              								   		}
            									break;
												case 5:
													printf("\n\t\t\t\tIngresa el monto que desea girar: ");
														scanf("%f",&ccsaldo);
															if(ccsaldo>saldo) {
																printf("\n\t\t\t\t\tEl saldo no es suficiente.\n\n\t");
																system("pause");
																goto cuentacorriente;
															}
															else {
																if(ccsaldo>maxsaldo){
																	printf("\n\t\t\t\t\tNo se puede girar mas de $%f\n\n\t",maxsaldo);
																	system("pause");
																	goto cuentacorriente;
																}
																else{
																	if(ccsaldo<=minsaldo){
																		printf("\n\t\t\t\t\tNo se puede girar menos de $%f\n\n\t",minsaldo);
																		system("pause");
																		goto cuentacorriente;
																	}
																	else{
																		printf("\n\t\t\t\t\tSe han girado %f de su cuenta\n",ccsaldo);
																		saldo=saldo-ccsaldo;
																		goto boletaCC;
																	}
																}
															}
												break;
												case 9:
													goto Inicio;
												break;
             									default:
                    								system("cls");
													printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tOopps, la opcion ingresada no existe.");
                    								system("pause");
                    								goto cuentacorriente;
                    			 				break;
                    						}
                    					//Home
										system("pause");
										goto Inicio;
								break;
//******************************Linea de Credito
								case 2:
										lineadecredito:
										system("cls");
										system("title Banco Kronos - Linea de credito");
										//Banner
										cout<<"\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
										cout<<"         \t"<<t[0]<<"\t  ____                                     _  __  _____     ____    _   _    ____     _____ \t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t | |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t | |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t\t\t\t\t\t\t\t\t\t\t\t\t     "<<t[0]<<"\n";
										cout<<"         \t";
										cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
				
										printf("\t\tHome %c Linea de Credito\t\t\t\t\t\t\t",flecha1);
										
										
											//InfoPrincipal
							cout<<"\n\n\t\t\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
         					cout<<"\t\t\t\t"<<t[0];
							if (rutlogin==admin){
								printf(" Has ingresado como Admin    ");
							}
							else{
								printf(" Nombre: %s %s ",nombre,apellido1);
							}
							cout<<t[0];
							if (rutlogin==rut){
								printf(" Rut: %d ",rut);
							}
							else{
								printf(" No disponible  ");
							}
							cout<<t[0];printf(" Saldo: $%f ",saldo);//Error - Cuando el saldo es menor a 7 digitos (999999.00) se desordena la tabla, lo mismo si es mayor a 7 digitos (1000000.00)
							cout<<t[0]<<endl;
							printf("\t\t\t\t");
							cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
							
												//Linea de credito
												printf ("\n\t\t\t\tIngresa el monto que deseas extraer: ");
												scanf("%f",&LCsaldo1);
												printf ("\t\t\t\tIngresa la cantidad de cuotas: ");
												scanf("%d",&LCcuotas);
													if(LCcuotas<=24){
														if(casaldo>=LCsaldo1){
															casaldo=casaldo-LCsaldo1;
															printf("\n\t\t\t\tSe han extraido $%f de tu Cuenta de Ahorros",LCsaldo1);
															goto boletaLC;
														}
														else{
															printf("\n\t\t\t\tNo tienes suficiente saldo en tu cuenta de Ahorros\n\n\t");
															printf("\n\t\t\t\tIngresa 1 para ver el estado de tu cuenta de ahorros: ");
															scanf("%d",&opcca);
																switch(opcca){
																	case 1:
																		system("cls");
																		system("title Banco Kronos - Widgets - Saldo - Cuenta de ahorros");
																		printf("Estado de tu cuenta de ahorros");
																		printf("\nSaldo: %f\n",casaldo);
																		system("pause");
																		goto lineadecredito;
																	break;
																	default:
																		goto lineadecredito;
																	break;
																}
															system("pause");
															goto lineadecredito;
														}
														
													}
													else{
														printf("\n\t\t\t\tNo pueden ser mas de 24 cuotas.\n\n\t");
														system("pause");
														goto lineadecredito;
													}
												system("pause");
												goto Inicio;
								break;
//******************************Cuenta de Ahorros
								case 3:
									cuentadeahorros:
										system("cls");
										system("title Banco Kronos - Cuenta de Ahorros");
										//Banner
										cout<<"\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
										cout<<"         \t"<<t[0]<<"\t  ____                                     _  __  _____     ____    _   _    ____     _____ \t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t | |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t | |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t\t\t\t\t\t\t\t\t\t\t\t\t     "<<t[0]<<"\n";
										cout<<"         \t";
										cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
				
										printf("\t\tHome %c Cuenta de Ahorros\t\t\t\t\t\t\t      Ingresa 9 para volver al Inicio",flecha1);
										
									
											//InfoPrincipal
							cout<<"\n\n\t\t\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
         					cout<<"\t\t\t\t"<<t[0];
							if (rutlogin==admin){
								printf(" Has ingresado como Admin    ");
							}
							else{
								printf(" Nombre: %s %s ",nombre,apellido1);
							}
							cout<<t[0];
							if (rutlogin==rut){
								printf(" Rut: %d ",rut);
							}
							else{
								printf(" No disponible  ");
							}
							cout<<t[0];printf(" Saldo: $%f ",saldo);//Error - Cuando el saldo es menor a 7 digitos (999999.00) se desordena la tabla, lo mismo si es mayor a 7 digitos (1000000.00)
							cout<<t[0]<<endl;
							printf("\t\t\t\t");
							cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
							
											printf ("\n\t\t\t\tIngresa el monto que deseas a%cadir a tu cuenta de ahorros: ",enhe);
											scanf ("%f", &casaldo1);
													if (casaldo1 < minsaldo	) {	
														printf("\n\t\t\t\t\tNo se puede cargar menos de $%f",minsaldo);
													}
													else{
														if (casaldo1 > maxcasaldo	) {	
														printf("\n\t\t\t\t\tNo se puede cargar mas de $%f",maxcasaldo);
														}
														else{
															printf ("\n\t\t\t\tSe han cargado $%f a su Cuenta de Ahorros\n", casaldo1);
																casaldo=casaldo+casaldo1;
																printf ("\n\t\t\t\tEl saldo actual de tu Cuenta de Ahorros es: %f",casaldo);
															goto boletaCA;
													}
													}
									//Home
										system("pause");
										goto Inicio;
								break;
//******************************Depositos
								case 4:
									depositos:
									system("cls");
									system("title Banco Kronos - Depositos");
										//Banner
										cout<<"\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
										cout<<"         \t"<<t[0]<<"\t  ____                                     _  __  _____     ____    _   _    ____     _____ \t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t | |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t | |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t\t\t\t\t\t\t\t\t\t\t\t\t     "<<t[0]<<"\n";
										cout<<"         \t";
										cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
										
										printf("\t\tHome %c Depositos\t\t\t\t\t\t\t      Ingresa 9 para volver al Inicio",flecha1);
										
										
											//InfoPrincipal
							cout<<"\n\n\t\t\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
         					cout<<"\t\t\t\t"<<t[0];
							if (rutlogin==admin){
								printf(" Has ingresado como Admin    ");
							}
							else{
								printf(" Nombre: %s %s ",nombre,apellido1);
							}
							cout<<t[0];
							if (rutlogin==rut){
								printf(" Rut: %d ",rut);
							}
							else{
								printf(" No disponible  ");
							}
							cout<<t[0];printf(" Saldo: $%f ",saldo);//Error - Cuando el saldo es menor a 7 digitos (999999.00) se desordena la tabla, lo mismo si es mayor a 7 digitos (1000000.00)
							cout<<t[0]<<endl;
							printf("\t\t\t\t");
							cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
							
												//Depositos
												printf("\n\t\t\t\tBienvenido al Banco Kronos\n");
												printf("\n");
												printf("\n\t\t\t\t\t1.- Depositar a esta cuenta");
												printf("\n\t\t\t\t\t2.- Depositar a otra cuenta");
												printf("\n\t\t\t\t\t3.- Depositar a una cuenta de otro banco");
												printf("\n\n\t\t\t\tQue deposito desea hacer: ");
												scanf("%d",&opcdeposito);
													switch(opcdeposito){
														case 1:
															printf("\n\t\t\t\t     Por favor, espere unos segundos...");
																for(int i=0; i<=79; i++) {
    																Sleep(3*1000/90);
    															}
															goto depositos1;
														break;
														case 2:
															printf("\n\t\t\t\t     Por favor, espere unos segundos...");
																for(int i=0; i<=79; i++) {
    																Sleep(3*1000/90);
    															}
															goto depositos2;
														break;
														case 3:
															printf("\n\t\t\t\t     Por favor, espere unos segundos...");
																for(int i=0; i<=79; i++) {
    																Sleep(3*1000/90);
    															}
															printf("\n\n\n\t\t\t\t\tOh, lo sentimos, no hay ningun banco asociado en este momento.\n\n\t");
															system("pause");
															goto depositos;
														break;
														case 9:
															goto Inicio;
														break;
														default:
															goto depositos;
														break;
													}
																//Ventanas de depositos
																switch(dep){
																	case 1:
																		depositos1:
																		system("cls");
																		system("title Banco Kronos - Deposito a cuenta local");
																			//Banner
																			cout<<"\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
																			cout<<"         \t"<<t[0]<<"\t  ____                                     _  __  _____     ____    _   _    ____     _____ \t     "<<t[0]<<"\n";
																			cout<<"         \t"<<t[0]<<"\t |  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\t     "<<t[0]<<"\n";
																			cout<<"         \t"<<t[0]<<"\t | |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \t     "<<t[0]<<"\n";
																			cout<<"         \t"<<t[0]<<"\t |  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\t     "<<t[0]<<"\n";
																			cout<<"         \t"<<t[0]<<"\t | |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\t     "<<t[0]<<"\n";
																			cout<<"         \t"<<t[0]<<"\t |____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\t     "<<t[0]<<"\n";
																			cout<<"         \t"<<t[0]<<"\t\t\t\t\t\t\t\t\t\t\t\t\t     "<<t[0]<<"\n";
																			cout<<"         \t";
																			cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
										
																			printf("\t\tHome %c Depositos %c Deposito 1",flecha1,flecha1);
												
													//InfoPrincipal
							cout<<"\n\n\t\t\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
         					cout<<"\t\t\t\t"<<t[0];
							if (rutlogin==admin){
								printf(" Has ingresado como Admin    ");
							}
							else{
								printf(" Nombre: %s %s ",nombre,apellido1);
							}
							cout<<t[0];
							if (rutlogin==rut){
								printf(" Rut: %d ",rut);
							}
							else{
								printf(" No disponible  ");
							}
							cout<<t[0];printf(" Saldo: $%f ",saldo);//Error - Cuando el saldo es menor a 7 digitos (999999.00) se desordena la tabla, lo mismo si es mayor a 7 digitos (1000000.00)
							cout<<t[0]<<endl;
							printf("\t\t\t\t");
							cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
							
																				
																				//Deposito1
																				printf("\n\n\t\t\t\tIngrese el monto que desea depositar a esta cuenta: ");
																				scanf("%f",&deposito);
																					if(deposito<500001){
																							printf("Su deposito es de %f\n",deposito);
																							saldo=deposito+saldo;
																							system("pause");
																							goto boletaDEP1;
																					}
																					else{
																						printf("\n\n\t\t\t\t\tLa cifra es demaciado alta, se puede girar hasta maximo $500000\n\n\t");
																						system("pause");
																						goto depositos1;
																					}	
																	break;
																	case 2:
																		depositos2:
																		system("cls");
																		system("title Banco Kronos - Deposito a otra cuenta");
																			//Banner
																			cout<<"\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
																			cout<<"         \t"<<t[0]<<"\t  ____                                     _  __  _____     ____    _   _    ____     _____ \t     "<<t[0]<<"\n";
																			cout<<"         \t"<<t[0]<<"\t |  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\t     "<<t[0]<<"\n";
																			cout<<"         \t"<<t[0]<<"\t | |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \t     "<<t[0]<<"\n";
																			cout<<"         \t"<<t[0]<<"\t |  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\t     "<<t[0]<<"\n";
																			cout<<"         \t"<<t[0]<<"\t | |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\t     "<<t[0]<<"\n";
																			cout<<"         \t"<<t[0]<<"\t |____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\t     "<<t[0]<<"\n";
																			cout<<"         \t"<<t[0]<<"\t\t\t\t\t\t\t\t\t\t\t\t\t     "<<t[0]<<"\n";
																			cout<<"         \t";
																			cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
										
																			printf("\t\tHome %c Depositos %c Deposito 2",flecha1,flecha1);
												
													//InfoPrincipal
							cout<<"\n\n\t\t\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
         					cout<<"\t\t\t\t"<<t[0];
							if (rutlogin==admin){
								printf(" Has ingresado como Admin    ");
							}
							else{
								printf(" Nombre: %s %s ",nombre,apellido1);
							}
							cout<<t[0];
							if (rutlogin==rut){
								printf(" Rut: %d ",rut);
							}
							else{
								printf(" No disponible  ");
							}
							cout<<t[0];printf(" Saldo: $%f ",saldo);//Error - Cuando el saldo es menor a 7 digitos (999999.00) se desordena la tabla, lo mismo si es mayor a 7 digitos (1000000.00)
							cout<<t[0]<<endl;
							printf("\t\t\t\t");
							cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
							
																				
																				//Deposito2
																				printf("(Ingresar solo numeros, sin puntos ni guiones)");
																				printf("\n\t\t\t\tIngresa el rut de la cuenta que deseas depositar: ");
																				scanf("%d",&deprut);
																				printf("\n\t\t\t\tIngrese el monto que desea depositar a esta cuenta: ");
																				scanf("%f",&deposito);
																					if(deposito<500001){
																							printf("\n\t\t\t\tSu deposito a %d es de %f\n",deprut,deposito);
																							depalert=1;
																							//********************************
																							dep:
																								DepNotify = fopen("depositos.JAAR","w");
																									fprintf(DepNotify,"%d",deprut);
       																								fprintf(DepNotify,"%f",deposito);
       																								fprintf(DepNotify,"%d",rut);
       																								fprintf(DepNotify,"%d",depalert);
       																						fclose(DepNotify);
																							encriptardepositos();
																							//********************************
																							depalert=0;
																							goto boletaDEP2;
																					}
																					else{
																						printf("\n\n\t\t\t\t\tLa cifra es demaciado alta, se puede girar hasta maximo $500000\n\n\t");
																						system("pause");
																						goto depositos2;
																					}	
																	break;
																}
																				
														break;
								break;
//******************************Cuenta vista
								case 5:
									cuentavista:
										system("cls");
										system("title Banco Kronos - Cuenta Vista");
										//Banner
										cout<<"\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
										cout<<"         \t"<<t[0]<<"\t  ____                                     _  __  _____     ____    _   _    ____     _____ \t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t | |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t | |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t\t\t\t\t\t\t\t\t\t\t\t\t     "<<t[0]<<"\n";
										cout<<"         \t";
										cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
										
										printf("\t\tHome %c Cuenta Vista\t\t\t\t\t\t\t      Ingresa 9 para volver al Inicio",flecha1);
										
										
											//InfoPrincipal
							cout<<"\n\n\t\t\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[5]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[5]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
         					cout<<"\t\t\t\t"<<t[0];
							if (rutlogin==admin){
								printf(" Has ingresado como Admin    ");
							}
							else{
								printf(" Nombre: %s %s ",nombre,apellido1);
							}
							cout<<t[0];
							if (rutlogin==rut){
								printf(" Rut: %d ",rut);
							}
							else{
								printf(" No disponible  ");
							}
							cout<<t[0];printf(" Saldo: $%f ",saldo);//Error - Cuando el saldo es menor a 7 digitos (999999.00) se desordena la tabla, lo mismo si es mayor a 7 digitos (1000000.00)
							cout<<t[0]<<endl;
							printf("\t\t\t\t");
							cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[4]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[4]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
							
								
								
									//CuentaCorriente
									printf("\n\t\t\t\tBienvenido al Banco Kronos\n");
									printf("\n");
									printf("\n\t\t\t\t\t1.- Giro rapido por $5000");
									printf("\n\t\t\t\t\t2.- Giro rapido por $10000");
									printf("\n\t\t\t\t\t3.- Giro rapido por $20000");
									printf("\n\t\t\t\t\t4.- Giro rapido por $50000");
									printf("\n\t\t\t\t\t5.- Giro por otro monto\n");
									
									printf("\n\t\t\t\tIngresa la opcion aqui: ");
										scanf("%d",&ccopc);
											switch(ccopc){
												case 1:
													if(ccrapido1>saldo){
														printf("\n\t\t\t\t\tEl saldo no es suficiente.\n\n\t");
														system("pause");
														goto cuentavista;
													}
													else{			
            											printf("\n\t\t\t\t\tSe han girado %f de su cuenta\n\n\t",ccrapido1);
            											saldo=saldo-ccrapido1;
            											system("pause");
            											goto boletaCVr1;
            										}
           										break;
        										case 2:
            										if(ccrapido2>saldo){
            											printf("\n\t\t\t\t\tEl saldo no es suficiente.\n\n\t");
            											system("pause");
														goto cuentavista;
            										}
             										else{
             											printf("\n\t\t\t\t\tSe han girado %f de su cuenta\n\n\t",ccrapido2);
            											saldo=saldo-ccrapido2;
            											system("pause");
            											goto boletaCVr2;
            										}
          										break;
        										case 3:
             										if(ccrapido3>saldo){
														printf("\n\t\t\t\t\tEl saldo no es suficiente.\n\n\t");
														system("pause");
														goto cuentavista;
													}
             										else{
            											printf("\n\t\t\t\t\tSe han girado %f de su cuenta\n\n\t",ccrapido3);
               											saldo=saldo-ccrapido3;
               											system("pause");
            											goto boletaCVr3;
               										}
           										break;
       											case 4:
            										if(ccrapido4>saldo){
             											printf("\n\t\t\t\t\tEl saldo no es suficiente.\n\n\t");
             											system("pause");
														goto cuentavista;
             										}
             										else{            											
													 	printf("\n\t\t\t\t\tSe han girado %f de su cuenta\n\n\t",ccrapido4);
              								   			saldo=saldo-ccrapido4;
              								   			system("pause");
            											goto boletaCVr4;
              								   		}
            									break;
												case 5:
													printf("\n\t\t\t\tIngresa el monto que desea girar: ");
														scanf("%f",&ccsaldo);
															if(ccsaldo>saldo) {
																printf("\n\t\t\t\t\tEl saldo no es suficiente.\n\n\t");
																system("pause");
																goto cuentavista;
															}
															else {
																if(ccsaldo>maxsaldo){
																	printf("\n\t\t\t\t\tNo se puede girar mas de $%f\n\n\t",maxsaldo);
																	system("pause");
																	goto cuentavista;
																}
																else{
																	if(ccsaldo<=minsaldo){
																		printf("\n\t\t\t\t\tNo se puede girar menos de $%f\n\n\t",minsaldo);
																		system("pause");
																		goto cuentavista;
																	}
																	else{
																		printf("\n\t\t\t\t\tSe han girado %f de su cuenta\n",ccsaldo);
																		saldo=saldo-ccsaldo;
																		goto boletaCV;
																	}
																}
															}
												break;
												case 9:
													goto Inicio;
												break;
             									default:
                    								system("cls");
													printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tOopps, la opcion ingresada no existe.");
                    								system("pause");
                    								goto cuentacorriente;
                    			 				break;
                    						}
                    					//Home
										system("pause");
										goto Inicio;
								break;
//******************************Configuraciones
								case 6:
									printf("Configuraciones");
											settings:
												system("cls");
												system("title Banco Kronos - Configuraciones");
										//Banner
										cout<<"\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
										cout<<"         \t"<<t[0]<<"\t  ____                                     _  __  _____     ____    _   _    ____     _____ \t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t | |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t | |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t\t\t\t\t\t\t\t\t\t\t\t\t     "<<t[0]<<"\n";
										cout<<"         \t";
										cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
										
										printf("\t\tHome %c Configuraciones\t\t\t\t\t\t\t      Ingresa 9 para volver al Inicio",flecha1,flecha1);
										
											//Opciones
											printf("\n\t\t\t\t\tBienvenido a Banco Kronos, el banco del kronos.\n");
											printf("\t\t\t\t\t\t%cQue opcion desea realizar?\n\n",inpreg);
											printf("\t\t\t\tOpcion 1:\t\t\t\t\tOpcion 2:\n");
											printf("\t\t\t\t>>Cambio de contrase%ca\t\t\t\t>>Colores\n\n",enhe);
											printf("\t\t\t\tOpcion 3:\t\t\t\t\t\n");
											printf("\t\t\t\t>>Idioma\t\t\t\t\n\n");
											
											printf("\t\t\t\t\tIngresa aqui la opcion: ");

											scanf("%d",&config);
											system("cls");
									switch(config){
										case 1:
											//Cambio de contraseña
											changepass:
											system("title Banco Kronos - Configuraciones - Contraseña");
											printf ("Ingrese su contrase%ca actual: ",enhe);
											scanf ("%d", &contrasena4);
												if (contrasena4==contrasena){
													printf ("Ingrese su nueva contrase%ca: ",enhe);
													scanf ("%d", &contrasena2);
													printf ("Vuelva a ingresar su nueva contrase%ca: ",enhe);
													scanf("%d", &contrasena3);
														if (contrasena2==contrasena3){
															contrasena=contrasena2;
															printf ("Su contrase%ca ha sido reestablicida\n",enhe);
																printf ("Su contrase%ca actual es: %d\n",enhe, contrasena);
												//**************************************
													doc = fopen("blocked.JAAR","w");
														fprintf(doc,"%s \n",nombre);
														fprintf(doc,"%s \n",apellido1);
       													fprintf(doc,"%s \n",apellido2);
														fprintf(doc,"%d \n",rut);
														fprintf(doc,"%d \n",contrasena);
														fprintf(doc,"%d \n",fnacY);
														fprintf(doc,"%d \n",fnacM);
														fprintf(doc,"%d \n",fnacD);
														fprintf(doc,"%s \n",email);
														fprintf(doc,"%d",blocked);
													fclose(doc);
													encriptarArchivo();
												//**************************************
												system("pause");
												goto Inicio;
														}
														else{
															printf("Las contrase%cas no son iguales\n\n\t",enhe);
															system("pause");
															goto changepass;
														}
												}
												else{
													if (contrasena4!=contrasena){
														printf ("Error, vuelva a intentar\nIngrese su contrase%ca actual: ",enhe);
															scanf("%d", &contrasena4);
																if (contrasena4==contrasena){
																	printf ("Ingrese su nueva contrase%ca: ",enhe);
																		scanf ("%d", &contrasena2);
																	printf ("Vuelva a ingresar su nueva contrase%ca: ",enhe);
																		scanf("%d", &contrasena3);
																			if (contrasena2==contrasena3 && contrasena1<9999 && contrasena1>1000){
																				contrasena=contrasena2;
																					printf ("Su contrase%ca ha cambiada exitosamente.\n",enhe);
																					printf ("Su contrase%ca actual es: %d",enhe, contrasena);
												//**************************************
													doc = fopen("blocked.JAAR","w");
														fprintf(doc,"%s \n",nombre);
														fprintf(doc,"%s \n",apellido1);
       													fprintf(doc,"%s \n",apellido2);
														fprintf(doc,"%d \n",rut);
														fprintf(doc,"%d \n",contrasena);
														fprintf(doc,"%d \n",fnacY);
														fprintf(doc,"%d \n",fnacM);
														fprintf(doc,"%d \n",fnacD);
														fprintf(doc,"%s \n",email);
														fprintf(doc,"%d",blocked);
													fclose(doc);
													encriptarArchivo();
												//**************************************
												system("pause");
												goto Inicio;
																			}
																}
																else{
																	if (contrasena4!=contrasena){
																		printf ("Error, vuelva a intentar\nIngrese su contrase%ca actual: ",enhe);
																			scanf ("%d", &contrasena4);
																				if (contrasena4==contrasena){
																					printf ("Ingrese su nueva contrase%ca: ",enhe);
																						scanf ("%d", &contrasena2);
																					printf ("Vuelva a ingresar su nueva contrase%ca: ",enhe);
																						scanf("%d", &contrasena3);
																							if (contrasena2==contrasena3){
																								contrasena=contrasena2;
																									printf ("Su contrase%ca ha cambiada exitosamente.\n",enhe);
																									printf ("Su contrase%ca actual es: %d",enhe, contrasena);
												//**************************************
													doc = fopen("blocked.JAAR","w");
														fprintf(doc,"%s \n",nombre);
														fprintf(doc,"%s \n",apellido1);
       													fprintf(doc,"%s \n",apellido2);
														fprintf(doc,"%d \n",rut);
														fprintf(doc,"%d \n",contrasena);
														fprintf(doc,"%d \n",fnacY);
														fprintf(doc,"%d \n",fnacM);
														fprintf(doc,"%d \n",fnacD);
														fprintf(doc,"%s \n",email);
														fprintf(doc,"%d",blocked);
													fclose(doc);
													encriptarArchivo();
												//**************************************
												system("pause");
												goto Inicio;
																							}
																				}				
																				else{
																					if	(contrasena4!=contrasena){
																						printf ("La cuenta se ha bloqueado por configuraciones sospechozas\n\n\t");
																						system("pause");
																						goto bloqueo;
																					}
																				}
																	}				
																}
													}
												}
										break;
										//colores
										case 2:
												Colores:
												system("cls");
												system("title Banco Kronos - Configuraciones - Colores");
										//Banner
										cout<<"\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
										cout<<"         \t"<<t[0]<<"\t  ____                                     _  __  _____     ____    _   _    ____     _____ \t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t | |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t | |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t |____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\t     "<<t[0]<<"\n";
										cout<<"         \t"<<t[0]<<"\t\t\t\t\t\t\t\t\t\t\t\t\t     "<<t[0]<<"\n";
										cout<<"         \t";
										cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
			
										printf("\t\tHome %c Configuraciones %c Colores\t\t\t\t\t       Ingresa 0 para volver al Inicio",flecha1,flecha1);
										
										
											printf("\n\n\t\t");
											//show colors
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),1); 
											printf(" 1= %c%c ",cube1,cube1);
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),2); 
											printf(" 2= %c%c ",cube1,cube1);
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),3); 
											printf(" 3= %c%c ",cube1,cube1);
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4); 
											printf(" 4= %c%c ",cube1,cube1);
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),5); 
											printf(" 5= %c%c ",cube1,cube1);
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),6); 
											printf(" 6= %c%c ",cube1,cube1);
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7); 
											printf(" 7= %c%c ",cube1,cube1);
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),8); 
											printf(" 8= %c%c ",cube1,cube1);
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),9); 
											printf(" 9= %c%c ",cube1,cube1);
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),10); 
											printf(" 10= %c%c ",cube1,cube1);
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11); 
											printf(" 11= %c%c ",cube1,cube1);
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),12); 
											printf(" 12= %c%c ",cube1,cube1);
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),13); 
											printf(" 13= %c%c ",cube1,cube1);
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),14); 
											printf(" 14= %c%c ",cube1,cube1);
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15); 
											printf(" 15= %c%c ",cube1,cube1);
											
											printf("\n\n\n\t\tIngresa el color que quieres para las letras: ");
											scanf("%d",&colors);
												switch(colors){
													case 0:
														goto Inicio;
													break;
													case 1:
														printf("\n\t\tCambiando...");
															for(int i=0; i<=79; i++) {
    															Sleep(1*1000/90);
   															}	
														system("color 1");
														printf("\n\n\tListo\n\n\t");
														goto settings;
													break;
													case 2:
														printf("\n\t\tCambiando...");
															for(int i=0; i<=79; i++) {
    															Sleep(1*1000/90);
   															}
														system("color 2");
														printf("\n\n\tListo\n\n\t");
														goto settings;
													break;
													case 3:
														printf("\n\t\tCambiando...");
															for(int i=0; i<=79; i++) {
    															Sleep(1*1000/90);
   															}
														system("color 3");
														goto settings;
													break;
													case 4:
														printf("\n\t\tCambiando...");
															for(int i=0; i<=79; i++) {
    															Sleep(1*1000/90);
   															}
														system("color 4");
														printf("\n\n\tListo\n\n\t");
														goto settings;
													break;
													case 5:
														printf("\n\t\tCambiando...");
															for(int i=0; i<=79; i++) {
    															Sleep(1*1000/90);
   															}
														system("color 5");
														printf("\n\n\tListo\n\n\t");
														goto settings;
													break;
													case 6:
														printf("\n\t\tCambiando...");
															for(int i=0; i<=79; i++) {
    															Sleep(1*1000/90);
   															}
														system("color 6");
														printf("\n\n\tListo\n\n\t");
														goto settings;
													break;
													case 7:
														printf("\n\t\tCambiando...");
															for(int i=0; i<=79; i++) {
    															Sleep(1*1000/90);
   															}
														system("color 7");
														goto settings;
													break;
													case 8:
														printf("\n\t\tCambiando...");
															for(int i=0; i<=79; i++) {
    															Sleep(1*1000/90);
   															}
														system("color 8");
														goto settings;
													break;
													case 9:
														printf("\n\t\tCambiando...");
															for(int i=0; i<=79; i++) {
    															Sleep(1*1000/90);
   															}
														system("color 9");
														goto settings;
													break;
													case 10:
														printf("\n\t\tCambiando...");
															for(int i=0; i<=79; i++) {
    															Sleep(1*1000/90);
   															}
														system("color a");
														goto settings;
													break;
													case 11:
														printf("\n\t\tCambiando...");
															for(int i=0; i<=79; i++) {
    															Sleep(1*1000/90);
   															}
														system("color b");
														goto settings;
													break;
													case 12:
														printf("\n\t\tCambiando...");
															for(int i=0; i<=79; i++) {
    															Sleep(1*1000/90);
   															}
														system("color c");
														goto settings;
													break;
													case 13:
														printf("\n\t\tCambiando...");
															for(int i=0; i<=79; i++) {
    															Sleep(1*1000/90);
   															}
														system("color d");
														goto settings;
													break;
													case 14:
														printf("\n\t\tCambiando...");
															for(int i=0; i<=79; i++) {
    															Sleep(1*1000/90);
   															}
														system("color e");
														goto settings;
													break;
													case 15:
														printf("\n\t\tCambiando...");
															for(int i=0; i<=79; i++) {
    															Sleep(1*1000/90);
   															}
														system("color f");
														goto settings;
													break;
													default:
														printf("\n\n\tEl color ingresado no existe. \nDebes ingresar un color.\n\n\t");
														system("pause");
														goto Colores;
													break;
												}
										break;
										case 3:
												idiomas:
												system("cls");
												system("title Banco Kronos - Configuraciones - Idioma");
														//Banner
														cout<<"\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
														cout<<"         \t"<<t[0]<<"\t  ____                                     _  __  _____     ____    _   _    ____     _____ \t     "<<t[0]<<"\n";
														cout<<"         \t"<<t[0]<<"\t |  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\t     "<<t[0]<<"\n";
														cout<<"         \t"<<t[0]<<"\t | |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \t     "<<t[0]<<"\n";
														cout<<"         \t"<<t[0]<<"\t |  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\t     "<<t[0]<<"\n";
														cout<<"         \t"<<t[0]<<"\t | |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\t     "<<t[0]<<"\n";
														cout<<"         \t"<<t[0]<<"\t |____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\t     "<<t[0]<<"\n";
														cout<<"         \t"<<t[0]<<"\t\t\t\t\t\t\t\t\t\t\t\t\t     "<<t[0]<<"\n";
														cout<<"         \t";
														cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
			
														printf("\t\tHome %c Configuraciones %c Idioma\t\t\t\t\t\t      Ingresa 9 para volver al Inicio",flecha1,flecha1);
										
										
														//Indice
														printf("\n\n\n\t\t\t\t1.- Espa%col\n\t\t\t\t2.- English\n\t\t\t\t3.- French\n\t\t\t\t4.- Portuguese\n\t\t\t\t5.- Deutsch\n\t\t\t\t",enhe);
														
														printf("Ingresa la ID de un idioma: ");
														scanf("%d",&idioma);
														
														switch(idioma){
															case 1:
																printf("\n\t\t\tComprobando...");
																	for(int i=0; i<=79; i++) {
    																	Sleep(1*1000/90);
  																	}
  																printf("\n\t\t\tEl idioma seleccionado ya esta instalado\n");
  																printf("\n\n\t");
  																system("pause");
  																goto settings;
															break;
															case 2:
																printf("\n\t\t\tComprobando...");
																	for(int i=0; i<=79; i++) {
    																	Sleep(1*1000/90);
  																	}
  																printf("\n\t\t\tDescargando...");
  																	for(int i=0; i<=79; i++) {
    																	Sleep(1*1000/90);
  																	}
  																printf("\n\t\t\tInstalando...\n");
  																	for(int i=0; i<=79; i++) {
    																	Sleep(1*1000/90);
  																	}
  																MessageBox(NULL, "Ha ocurrido un error al instalar las librerias en_US", "Banco Kronos - Error", MB_ICONWARNING);
  																goto settings;
															break;
															case 3:
																printf("\n\t\t\tComprobando...");
																	for(int i=0; i<=79; i++) {
    																	Sleep(1*1000/90);
  																	}
  																printf("\n\t\t\tDescargando...");
  																	for(int i=0; i<=79; i++) {
    																	Sleep(1*1000/90);
  																	}
  																printf("\n\t\t\tInstalando...\n");
  																	for(int i=0; i<=79; i++) {
    																	Sleep(1*1000/90);
  																	}
  																MessageBox(NULL, "Ha ocurrido un error al instalar las librerias fr_FR", "Banco Kronos - Error", MB_ICONWARNING);
  																goto settings;
															break;
															case 4:
																printf("\n\t\t\tComprobando...");
																	for(int i=0; i<=79; i++) {
    																	Sleep(1*1000/90);
  																	}
  																printf("\n\t\t\tDescargando...");
  																	for(int i=0; i<=79; i++) {
    																	Sleep(1*1000/90);
  																	}
  																printf("\n\t\t\tInstalando...\n");
  																	for(int i=0; i<=79; i++) {
    																	Sleep(1*1000/90);
  																	}
  																MessageBox(NULL, "Ha ocurrido un error al instalar las librerias pt_BR", "Banco Kronos - Error", MB_ICONWARNING);
  																goto settings;
															break;
															case 5:
																printf("\n\t\t\tComprobando...");
																	for(int i=0; i<=79; i++) {
    																	Sleep(1*1000/90);
  																	}
  																printf("\n\t\t\tDescargando...");
  																	for(int i=0; i<=79; i++) {
    																	Sleep(1*1000/90);
  																	}
  																printf("\n\t\t\tInstalando...\n");
  																	for(int i=0; i<=79; i++) {
    																	Sleep(1*1000/90);
  																	}
  																MessageBox(NULL, "Ha ocurrido un error al instalar las librerias de_DE", "Banco Kronos - Error", MB_ICONWARNING);
  																goto settings;
															break;
															case 9:
																goto Inicio;
															break;
															default:
																system("cls");
																printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tOopps, la opcion ingresada no existe.");
																goto idiomas;
															break;
														}
										break;
										case 9:
											goto Inicio;
										break;
										default:
											goto settings;
										break;
									}
								break;
								//rp
								case 8:
											rp:
											system("cls");
											system("title Banco Kronos - Recarga de RiotsPoints");
												//Banner
												cout<<"\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
												cout<<"         \t"<<t[0]<<"\t  ____                                     _  __  _____     ____    _   _    ____     _____ \t     "<<t[0]<<"\n";
												cout<<"         \t"<<t[0]<<"\t |  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\t     "<<t[0]<<"\n";
												cout<<"         \t"<<t[0]<<"\t | |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \t     "<<t[0]<<"\n";
												cout<<"         \t"<<t[0]<<"\t |  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\t     "<<t[0]<<"\n";
												cout<<"         \t"<<t[0]<<"\t | |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\t     "<<t[0]<<"\n";
												cout<<"         \t"<<t[0]<<"\t |____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\t     "<<t[0]<<"\n";
												cout<<"         \t"<<t[0]<<"\t\t\t\t\t\t\t\t\t\t\t\t\t     "<<t[0]<<"\n";
												cout<<"         \t";
												cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
						
												printf("\t\tHome %c Recarga de RiotsPoint\t\t\t\t\t\t      Ingresa 9 para volver al Inicio",flecha1);
											 			
												//InfoPrincipal
							cout<<"\n\n\t\t\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
         					cout<<"\t\t\t\t"<<t[0];
							if (rutlogin==admin){
								printf(" Has ingresado como Admin    ");
							}
							else{
								printf(" Nombre: %s %s ",nombre,apellido1);
							}
							cout<<t[0];
							if (rutlogin==rut){
								printf(" Rut: %d ",rut);
							}
							else{
								printf(" No disponible  ");
							}
							cout<<t[0];printf(" Saldo: $%f ",saldo);//Error - Cuando el saldo es menor a 7 digitos (999999.00) se desordena la tabla, lo mismo si es mayor a 7 digitos (1000000.00)
							cout<<t[0]<<endl;
							printf("\t\t\t\t");
							cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
							
											//Carga
												printf("\n\t\t\tIngresa tu nick de usuario: ");
													scanf("%s",&nick);
												printf("\n\n\t\t\t\t1.- $2000.00 CLP x 590RP");
												printf("\n\t\t\t\t2.- $4000.00 CLP x 1250RP");
												printf("\n\t\t\t\t3.- $8000.00 CLP x 2550RP");
												printf("\n\t\t\t\t4.- $20000.00 CLP x 6600RP");
												printf("\n\t\t\t\t5.- $32000.00 CLP x 11000RP");
												printf("\n\t\t\t\t6.- $48000.00 CLP x 16900RP");
												printf("\n\n\t\t\tHola %s,Cuanto deseas cargar: ",nick);
												scanf("%d",&rp);
													switch(rp){
														case 1:
															if(rprapido1>saldo){
																printf("\n\n\t\t\tEl saldo no es suficiente.\n");
																}
															else{			
            												printf("\n\n\t\t\tSe han cargado %f a la cuenta de %s\n ",rprapido1,nick);
															saldo=saldo-rprapido1;  
            												}	
														break;
														case 2:
															if(rprapido2>saldo){
																printf("\n\n\t\t\tEl saldo no es suficiente.\n");
																}
															else{			
            												printf("\n\n\t\t\tSe han cargado %f a la cuenta de %s\n ",rprapido2,nick);
															saldo=saldo-rprapido2;  
            												}	
														break;
														case 3:
															if(rprapido3>saldo){
																printf("\n\n\t\t\tEl saldo no es suficiente.\n");
																}
															else{			
            												printf("\n\n\t\t\tSe han cargado %f a la cuenta de %s\n ",rprapido3,nick);
															saldo=saldo-rprapido3;  
            												}	
														break;
														case 4:
															if(rprapido4>saldo){
																printf("\n\n\t\t\tEl saldo no es suficiente.\n");
																}
															else{			
            												printf("\n\n\t\t\tSe han cargado %f a la cuenta de %s\n ",rprapido4,nick);
															saldo=saldo-rprapido4;  
            												}	
														break;
														case 5:
															if(rprapido5>saldo){
																printf("\n\n\t\t\tEl saldo no es suficiente.\n");
																}
															else{			
            												printf("\n\n\t\t\tSe han cargado %f a la cuenta de %s\n ",rprapido5,nick);
															saldo=saldo-rprapido5;  
            												}	
														break;
														case 6:
															if(rprapido6>saldo){
																printf("\n\n\t\t\tEl saldo no es suficiente.\n");
																}
															else{			
            												printf("\n\n\t\t\tSe han cargado %f a la cuenta de %s\n ",rprapido6,nick);
															saldo=saldo-rprapido6;
            												}	
														break;
														case 9:
															goto Inicio;
														break;
														default:
															printf("\n\t\t\t\t\tBroce qliao, esto no existe!");
															system("pause");
															goto rp;
														break;
														
													}
												printf("\n\n\t\t\t");
												system("pause");
												goto Inicio;
										break;
										case 10:
											cerrarsesion:
												system("title Banco Kronos - Cerrando Sesion");
												system("cls");
												printf("Cerrando sesion...");
												for(int i=0; i<=79; i++) {
    																	Sleep(3*1000/90);
  																	}
  												system("cls");
											goto iniciosesion;
										break;
								default:
									printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tOopps, la opcion ingresada no existe. ");
									system("pause");
									goto Inicio;
								break;
							}
							
							
//******************************externos


								switch(ext){
									case 776:
										bloqueo:
										system("color a");
   										NetDDoS(147,38);
										system("cls");
										system("title Banco Kronos - Bloqueado");
											//Banner
											cout<<"\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
											cout<<"         \t"<<t[0]<<"\t  ____                                     _  __  _____     ____    _   _    ____     _____ \t     "<<t[0]<<"\n";
											cout<<"         \t"<<t[0]<<"\t |  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\t     "<<t[0]<<"\n";
											cout<<"         \t"<<t[0]<<"\t | |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \t     "<<t[0]<<"\n";
											cout<<"         \t"<<t[0]<<"\t |  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\t     "<<t[0]<<"\n";
											cout<<"         \t"<<t[0]<<"\t | |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\t     "<<t[0]<<"\n";
											cout<<"         \t"<<t[0]<<"\t |____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\t     "<<t[0]<<"\n";
											cout<<"         \t"<<t[0]<<"\t\t\t\t\t\t\t\t\t\t\t\t\t     "<<t[0]<<"\n";
											cout<<"         \t";
											cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
										
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4); 
											printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t    Bloqueado\n\n",flecha1);
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),10); 
											
											printf("\n\n");
											printf("\n\t _                                  _          _                 _     _         ____  _                                  _       ");
											printf("\n\t| |    __ _    ___ _   _  ___ _ __ | |_ __ _  | |__   __ _   ___(_) __| | ___   | __ )| | ___   __ _ _   _  ___  __ _  __| | __ _");
											printf("\n\t| |   / _` |  / __| | | |/ _ \\ '_ \\| __/ _` | | '_ \\ / _` | / __| |/ _` |/ _ \\  |  _ \\| |/ _ \\ / _` | | | |/ _ \\/ _` |/ _` |/ _` |");
											printf("\n\t| |__| (_| | | (__| |_| |  __/ | | | || (_| | | | | | (_| | \\__ \\ | (_| | (_) | | |_) | | (_) | (_| | |_| |  __/ (_| | (_| | (_| |");
											printf("\n\t|_____\\__,_|  \\___|\\__,_|\\___|_| |_|\\__\\__,_| |_| |_|\\__,_| |___/_|\\__,_|\\___/  |____/|_|\\___/ \\__, |\\__,_|\\___|\\__,_|\\__,_|\\__,_|");
											printf("\n\t                                                                                                  |_|                             ");
											
											printf("\n\n\n\t\tContacta con el servicio al cliente mas cercano, o a nuestra pagina web ");
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),9); 
											printf("\n\t\thttp://kronos.partyjaar.org/banco/soporte/cuenta-bloqueada/\n");
											SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),10);
											blocked=2;
											
												//**************************************
													doc = fopen("blocked.JAAR","w");
														fprintf(doc,"%s \n",nombre);
														fprintf(doc,"%s \n",apellido1);
       													fprintf(doc,"%s \n",apellido2);
														fprintf(doc,"%d \n",rut);
														fprintf(doc,"%d \n",contrasena);
														fprintf(doc,"%d \n",fnacY);
														fprintf(doc,"%d \n",fnacM);
														fprintf(doc,"%d \n",fnacD);
														fprintf(doc,"%s \n",email);
														fprintf(doc,"%d",blocked);
													fclose(doc);
													encriptarArchivo();
												//**************************************
											
											printf("\n\n\t\t1.- Ir al Link\n\t\t2.- Ingresar Codigo de Verificacion\n\t\t3.- Cerrar el programa");
											printf("\n\n\t\tIngresa la opcion: ");
											scanf("%d",&block);
											
												switch(block){
													case 1:
														system("start http://kronos.partyjaar.org/banco/soporte/cuenta-bloqueada/");
														goto bloqueo;
													break;
													case 2:
														printf("\n\n\t\t\tIngresa el codigo de verificacion: ");
														scanf("%d",&verify);
															switch(verify){
																case 36434943:
																	printf("\n\t\t\tAnalizando...");
																		for(int i=0; i<=79; i++) {
    																		Sleep(4*1000/90);
   																		}
   																	goto desbloqueo;
																break;
																case 3203:
																	printf("\n\t\t\tAnalizando...");
																		for(int i=0; i<=79; i++) {
    																		Sleep(4*1000/90);
   																		}
   																	goto desbloqueo;
																break;
																default:
																	printf("\n\t\t\tAnalizando...");
																		for(int i=0; i<=79; i++) {
    																		Sleep(4*1000/90);
   																		}
   																	MessageBox(NULL, "El codigo de verificacion ingresado, es erroneo", "Banco Kronos - Error al verificar", MB_ICONWARNING);
  																	goto bloqueo;
																break;
															}
													break;
													case 3:
														exit(0);
													break;
													case 98:
														blocked=1;
														goto Inicio;
													break;
													default:
														goto bloqueo;
													break;
												}
									break;
									case 777:
										desbloqueo:
										system("color a");
										system("cls");
										system("title Banco Kronos - Desbloqueo de cuenta");
											//Banner
											cout<<"\t\t"<<t[10]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
											cout<<"         \t"<<t[0]<<"\t  ____                                     _  __  _____     ____    _   _    ____     _____ \t     "<<t[0]<<"\n";
											cout<<"         \t"<<t[0]<<"\t |  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\t     "<<t[0]<<"\n";
											cout<<"         \t"<<t[0]<<"\t | |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \t     "<<t[0]<<"\n";
											cout<<"         \t"<<t[0]<<"\t |  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\t     "<<t[0]<<"\n";
											cout<<"         \t"<<t[0]<<"\t | |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\t     "<<t[0]<<"\n";
											cout<<"         \t"<<t[0]<<"\t |____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\t     "<<t[0]<<"\n";
											cout<<"         \t"<<t[0]<<"\t\t\t\t\t\t\t\t\t\t\t\t\t     "<<t[0]<<"\n";
											cout<<"         \t";
											cout<<t[3]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
										
											printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t  Desbloqueada\n\n",flecha1);
											
											printf("\n\n\n");
											printf("\n\t\t      ____                 _              _           _     _                                  _       ");
											printf("\n\t\t     / ___|   _  ___ _ __ | |_ __ _    __| | ___  ___| |__ | | ___   __ _ _   _  ___  __ _  __| | __ _ ");
											printf("\n\t\t    | |  | | | |/ _ \\ '_ \\| __/ _` |  / _` |/ _ \\/ __| '_ \\| |/ _ \\ / _` | | | |/ _ \\/ _` |/ _` |/ _` |");
											printf("\n\t\t    | |__| |_| |  __/ | | | || (_| | | (_| |  __/\\__ \\ |_) | | (_) | (_| | |_| |  __/ (_| | (_| | (_| |");
											printf("\n\t\t     \\____\\__,_|\\___|_| |_|\\__\\__,_|  \\__,_|\\___||___/_.__/|_|\\___/ \\__, |\\__,_|\\___|\\__,_|\\__,_|\\__,_|");
											printf("\n\t\t                                                                       |_|                             ");
											
											printf("\n\n\n\t\t\tMuchas gracias por preferir nuestros servicios.\n\n\n\n\n\t\t\t");
											blocked=1;
											
											//**************************************
													doc = fopen("blocked.JAAR","w");
														fprintf(doc,"%s \n",nombre);
														fprintf(doc,"%s \n",apellido1);
       													fprintf(doc,"%s \n",apellido2);
														fprintf(doc,"%d \n",rut);
														fprintf(doc,"%d \n",contrasena);
														fprintf(doc,"%d \n",fnacY);
														fprintf(doc,"%d \n",fnacM);
														fprintf(doc,"%d \n",fnacD);
														fprintf(doc,"%s \n",email);
														fprintf(doc,"%d",blocked);
													fclose(doc);
													encriptarArchivo();
												//**************************************
											
											system("pause");
											goto iniciosesion;
									break;
//**********************************Cerrar todos los procesos
									case 778:
										printf("Cerrar");
										system("pause");
										exit(0);
									break;
//*****************************************Boletas
									case 901: //Boleta Cuenta Corriente - Giro personalizado
										boletaCC:
										doc = fopen("Boleta - Cuenta Corriente.txt","w");
												fprintf(doc,"\t ____                                     _  __  _____     ____    _   _    ____     _____ \n");
												fprintf(doc,"\t|  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\n");
												fprintf(doc,"\t| |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \n");
												fprintf(doc,"\t|  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\n");
												fprintf(doc,"\t| |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\n");
												fprintf(doc,"\t|____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\n");
												
												fprintf(doc,"\n\n\t\tCuenta Corriente - Comprobante de giro en efectivo");
												fprintf(doc,"\n\n\t***************************************");
												fprintf(doc,"\n\tCuenta: ");
       											fprintf(doc,"%d",rut);
												fprintf(doc,"\n\tTitular: %s %s",nombre,apellido1);
       											fprintf(doc,"\n\tMonto: ");
       											fprintf(doc,"$%f",ccsaldo);
       											fprintf(doc,"\n");
       											fprintf(doc,"\tSaldo Actual: ");
       											fprintf(doc,"$%f",saldo);
       											fprintf(doc,"\n");
       											fprintf(doc,"\t***************************************");
       											fprintf(doc,"\n\n\t  http://kronos.partyjaar.org/banco");
       											fprintf(doc,"\n\t\t\t600 600 312 ");
       											fprintf(doc,"\n\tCopia Cliente.");
										fclose(doc);
										printf("\n\n\t\t\t\tRetire su boleta.\n\n\t\t");
										system("pause");
										goto Inicio;
									break;
									case 902: //Boleta Cuenta Corriente - Giro rapido 1
										boletaCCr1:
										doc = fopen("Boleta - Cuenta Corriente.txt","w");
												fprintf(doc,"\t ____                                     _  __  _____     ____    _   _    ____     _____ \n");
												fprintf(doc,"\t|  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\n");
												fprintf(doc,"\t| |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \n");
												fprintf(doc,"\t|  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\n");
												fprintf(doc,"\t| |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\n");
												fprintf(doc,"\t|____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\n");
												
												fprintf(doc,"\n\n\t\tCuenta Corriente - Comprobante de giro en efectivo");
												fprintf(doc,"\n\n\t***************************************");
												fprintf(doc,"\n\tCuenta: ");
       											fprintf(doc,"%d",rut);
												fprintf(doc,"\n\tTitular: %s %s",nombre,apellido1);
       											fprintf(doc,"\n\tMonto: ");
       											fprintf(doc,"$%f",ccrapido1);
       											fprintf(doc,"\n");
       											fprintf(doc,"\tSaldo Actual: ");
       											fprintf(doc,"$%f",saldo);
       											fprintf(doc,"\n");
       											fprintf(doc,"\t***************************************");
       											fprintf(doc,"\n\n\t  http://kronos.partyjaar.org/banco");
       											fprintf(doc,"\n\t\t\t600 600 312 ");
       											fprintf(doc,"\n\tCopia Cliente.");
										fclose(doc);
										printf("\n\n\t\t\t\tRetire su boleta.\n\n\t\t");
										system("pause");
										goto Inicio;
									break;
									case 903: //Boleta Cuenta Corriente - Giro rapido 2
										boletaCCr2:
										doc = fopen("Boleta - Cuenta Corriente.txt","w");
												fprintf(doc,"\t ____                                     _  __  _____     ____    _   _    ____     _____ \n");
												fprintf(doc,"\t|  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\n");
												fprintf(doc,"\t| |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \n");
												fprintf(doc,"\t|  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\n");
												fprintf(doc,"\t| |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\n");
												fprintf(doc,"\t|____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\n");
												
												fprintf(doc,"\n\n\t\tCuenta Corriente - Comprobante de giro en efectivo");
												fprintf(doc,"\n\n\t***************************************");
												fprintf(doc,"\n\tCuenta: ");
       											fprintf(doc,"%d",rut);
												fprintf(doc,"\n\tTitular: %s %s",nombre,apellido1);
       											fprintf(doc,"\n\tMonto: ");
       											fprintf(doc,"$%f",ccrapido2);
       											fprintf(doc,"\n");
       											fprintf(doc,"\tSaldo Actual: ");
       											fprintf(doc,"$%f",saldo);
       											fprintf(doc,"\n");
       											fprintf(doc,"\t***************************************");
       											fprintf(doc,"\n\n\t  http://kronos.partyjaar.org/banco");
       											fprintf(doc,"\n\t\t\t600 600 312 ");
       											fprintf(doc,"\n\tCopia Cliente.");
										fclose(doc);
										printf("\n\n\t\t\t\tRetire su boleta.\n\n\t\t");
										system("pause");
										goto Inicio;
									break;
									case 904: //Boleta Cuenta Corriente - Giro rapido 3
										boletaCCr3:
										doc = fopen("Boleta - Cuenta Corriente.txt","w");
												fprintf(doc,"\t ____                                     _  __  _____     ____    _   _    ____     _____ \n");
												fprintf(doc,"\t|  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\n");
												fprintf(doc,"\t| |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \n");
												fprintf(doc,"\t|  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\n");
												fprintf(doc,"\t| |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\n");
												fprintf(doc,"\t|____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\n");
												
												fprintf(doc,"\n\n\t\tCuenta Corriente - Comprobante de giro en efectivo");
												fprintf(doc,"\n\n\t***************************************");
												fprintf(doc,"\n\tCuenta: ");
       											fprintf(doc,"%d",rut);
												fprintf(doc,"\n\tTitular: %s %s",nombre,apellido1);
       											fprintf(doc,"\n\tMonto: ");
       											fprintf(doc,"$%f",ccrapido3);
       											fprintf(doc,"\n");
       											fprintf(doc,"\tSaldo Actual: ");
       											fprintf(doc,"$%f",saldo);
       											fprintf(doc,"\n");
       											fprintf(doc,"\t***************************************");
       											fprintf(doc,"\n\n\t  http://kronos.partyjaar.org/banco");
       											fprintf(doc,"\n\t\t\t600 600 312 ");
       											fprintf(doc,"\n\tCopia Cliente.");
										fclose(doc);
										printf("\n\n\t\t\t\tRetire su boleta.\n\n\t\t");
										system("pause");
										goto Inicio;
									break;
									case 905: //Boleta Cuenta Corriente - Giro rapido 4
										boletaCCr4:
										doc = fopen("Boleta - Cuenta Corriente.txt","w");
												fprintf(doc,"\t ____                                     _  __  _____     ____    _   _    ____     _____ \n");
												fprintf(doc,"\t|  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\n");
												fprintf(doc,"\t| |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \n");
												fprintf(doc,"\t|  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\n");
												fprintf(doc,"\t| |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\n");
												fprintf(doc,"\t|____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\n");
												
												fprintf(doc,"\n\n\t\tCuenta Corriente - Comprobante de giro en efectivo");
												fprintf(doc,"\n\n\t***************************************");
												fprintf(doc,"\n\tCuenta: ");
       											fprintf(doc,"%d",rut);
												fprintf(doc,"\n\tTitular: %s %s",nombre,apellido1);
       											fprintf(doc,"\n\tMonto: ");
       											fprintf(doc,"$%f",ccrapido4);
       											fprintf(doc,"\n");
       											fprintf(doc,"\tSaldo Actual: ");
       											fprintf(doc,"$%f",saldo);
       											fprintf(doc,"\n");
       											fprintf(doc,"\t***************************************");
       											fprintf(doc,"\n\n\t  http://kronos.partyjaar.org/banco");
       											fprintf(doc,"\n\t\t\t600 600 312 ");
       											fprintf(doc,"\n\tCopia Cliente.");
										fclose(doc);
										printf("\n\n\t\t\t\tRetire su boleta.\n\n\t\t");
										system("pause");
										goto Inicio;
									break;
									case 911:
										boletaCA:
										doc = fopen("Boleta - Cuenta de Ahorros.txt","w");
												fprintf(doc,"\t ____                                     _  __  _____     ____    _   _    ____     _____ \n");
												fprintf(doc,"\t|  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\n");
												fprintf(doc,"\t| |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \n");
												fprintf(doc,"\t|  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\n");
												fprintf(doc,"\t| |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\n");
												fprintf(doc,"\t|____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\n");
												
												fprintf(doc,"\n\n\t\tCuenta de Ahorros - Comprobante de trasnferencia");
												fprintf(doc,"\n\n\t***************************************");
												fprintf(doc,"\n\tCuenta: ");
       											fprintf(doc,"%d",rut);
												fprintf(doc,"\n\tTitular: %s %s",nombre,apellido1);
       											fprintf(doc,"\n\tMonto: ");
       											fprintf(doc,"$%f",casaldo1);
       											fprintf(doc,"\n");
       											fprintf(doc,"\tSaldo Actual: ");
       											fprintf(doc,"$%f",casaldo);
       											fprintf(doc,"\n");
       											fprintf(doc,"\t***************************************");
       											fprintf(doc,"\n\n\t  http://kronos.partyjaar.org/banco");
       											fprintf(doc,"\n\t\t\t600 600 312 ");
       											fprintf(doc,"\n\tCopia Cliente.");
										fclose(doc);
										printf("\n\n\t\t\t\tRetire su boleta.\n\n\t\t");
										system("pause");
										goto Inicio;
									break;
									case 912:
										boletaDEP1:
										doc = fopen("Boleta - Deposito.txt","w");
												fprintf(doc,"\t ____                                     _  __  _____     ____    _   _    ____     _____ \n");
												fprintf(doc,"\t|  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\n");
												fprintf(doc,"\t| |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \n");
												fprintf(doc,"\t|  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\n");
												fprintf(doc,"\t| |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\n");
												fprintf(doc,"\t|____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\n");
												
												fprintf(doc,"\n\n\t\tDepositos - Comprobante de trasnferencia");
												fprintf(doc,"\n\n\t***************************************");
												fprintf(doc,"\n\tCuenta: ");
       											fprintf(doc,"%d",rut);
												fprintf(doc,"\n\tTitular: %s %s",nombre,apellido1);
       											fprintf(doc,"\n\tMonto: ");
       											fprintf(doc,"$%f",deposito);
       											fprintf(doc,"\n");
       											fprintf(doc,"\tSaldo Actual: ");
       											fprintf(doc,"$%f",saldo);
       											fprintf(doc,"\n");
       											fprintf(doc,"\t***************************************");
       											fprintf(doc,"\n\n\t  http://kronos.partyjaar.org/banco");
       											fprintf(doc,"\n\t\t\t600 600 312 ");
       											fprintf(doc,"\n\tCopia Cliente.");
										fclose(doc);
										printf("\n\n\t\t\t\tRetire su boleta.\n\n\t\t");
										system("pause");
										goto Inicio;
									break;
									case 913:
										boletaDEP2:
										doc = fopen("Boleta - Deposito a otra cuenta.txt","w");
												fprintf(doc,"\t ____                                     _  __  _____     ____    _   _    ____     _____ \n");
												fprintf(doc,"\t|  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\n");
												fprintf(doc,"\t| |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \n");
												fprintf(doc,"\t|  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\n");
												fprintf(doc,"\t| |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\n");
												fprintf(doc,"\t|____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\n");
												
												fprintf(doc,"\n\n\t\tDepositos - Comprobante de trasnferencia");
												fprintf(doc,"\n\n\t***************************************");
												fprintf(doc,"\n\tCuenta: ");
       											fprintf(doc,"%d",rut);
												fprintf(doc,"\n\tTitular: %s %s",nombre,apellido1);
       											fprintf(doc,"\n\tMonto: ");
       											fprintf(doc,"$%f",deposito);
       											fprintf(doc,"\n");
       											fprintf(doc,"\tCuenta depositada: ");
       											fprintf(doc,"%d",deprut);
       											fprintf(doc,"\n");
       											fprintf(doc,"\tID de la trasnferencia: 100000298446433\n");
       											fprintf(doc,"\t***************************************");
       											fprintf(doc,"\n\n\t  http://kronos.partyjaar.org/banco");
       											fprintf(doc,"\n\t\t\t600 600 312 ");
       											fprintf(doc,"\n\tCopia Cliente.");
										fclose(doc);
										printf("\n\n\t\t\t\tRetire su boleta.\n\n\t\t");
										system("pause");
										goto Inicio;
									break;
									case 921: //Boleta Cuenta Vista - Giro personalizado
										boletaCV:
										doc = fopen("Boleta - Cuenta Vista.txt","w");
												fprintf(doc,"\t ____                                     _  __  _____     ____    _   _    ____     _____ \n");
												fprintf(doc,"\t|  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\n");
												fprintf(doc,"\t| |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \n");
												fprintf(doc,"\t|  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\n");
												fprintf(doc,"\t| |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\n");
												fprintf(doc,"\t|____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\n");
												
												fprintf(doc,"\n\n\t\tCuenta Vista - Comprobante de trasnferencia");
												fprintf(doc,"\n\n\t***************************************");
												fprintf(doc,"\n\tCuenta: ");
       											fprintf(doc,"%d",rut);
												fprintf(doc,"\n\tTitular: %s %s",nombre,apellido1);
       											fprintf(doc,"\n\tMonto: ");
       											fprintf(doc,"$%f",ccsaldo);
       											fprintf(doc,"\n");
       											fprintf(doc,"\tSaldo Actual: ");
       											fprintf(doc,"$%f",saldo);
       											fprintf(doc,"\n");
       											fprintf(doc,"\t***************************************");
       											fprintf(doc,"\n\n\t  http://kronos.partyjaar.org/banco");
       											fprintf(doc,"\n\t\t\t600 600 312 ");
       											fprintf(doc,"\n\tCopia Cliente.");
										fclose(doc);
										printf("\n\n\t\t\t\tRetire su boleta.\n\n\t\t");
										system("pause");
										goto Inicio;
									break;
									case 922: //Boleta Cuenta Vista - Giro rapido 1
										boletaCVr1:
										doc = fopen("Boleta - Cuenta Vista.txt","w");
												fprintf(doc,"\t ____                                     _  __  _____     ____    _   _    ____     _____ \n");
												fprintf(doc,"\t|  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\n");
												fprintf(doc,"\t| |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \n");
												fprintf(doc,"\t|  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\n");
												fprintf(doc,"\t| |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\n");
												fprintf(doc,"\t|____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\n");
												
												fprintf(doc,"\n\n\t\tCuenta Vista - Comprobante de trasnferencia");
												fprintf(doc,"\n\n\t***************************************");
												fprintf(doc,"\n\tCuenta: ");
       											fprintf(doc,"%d",rut);
												fprintf(doc,"\n\tTitular: %s %s",nombre,apellido1);
       											fprintf(doc,"\n\tMonto: ");
       											fprintf(doc,"$%f",ccrapido1);
       											fprintf(doc,"\n");
       											fprintf(doc,"\tSaldo Actual: ");
       											fprintf(doc,"$%f",saldo);
       											fprintf(doc,"\n");
       											fprintf(doc,"\t***************************************");
       											fprintf(doc,"\n\n\t  http://kronos.partyjaar.org/banco");
       											fprintf(doc,"\n\t\t\t600 600 312 ");
       											fprintf(doc,"\n\tCopia Cliente.");
										fclose(doc);
										printf("\n\n\t\t\t\tRetire su boleta.\n\n\t\t");
										system("pause");
										goto Inicio;
									break;
									case 923: //Boleta Cuenta Vista - Giro rapido 2
										boletaCVr2:
										doc = fopen("Boleta - Cuenta Vista.txt","w");
												fprintf(doc,"\t ____                                     _  __  _____     ____    _   _    ____     _____ \n");
												fprintf(doc,"\t|  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\n");
												fprintf(doc,"\t| |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \n");
												fprintf(doc,"\t|  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\n");
												fprintf(doc,"\t| |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\n");
												fprintf(doc,"\t|____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\n");
												
												fprintf(doc,"\n\n\t\tCuenta Vista - Comprobante de trasnferencia");
												fprintf(doc,"\n\n\t***************************************");
												fprintf(doc,"\n\tCuenta: ");
       											fprintf(doc,"%d",rut);
												fprintf(doc,"\n\tTitular: %s %s",nombre,apellido1);
       											fprintf(doc,"\n\tMonto: ");
       											fprintf(doc,"$%f",ccrapido2);
       											fprintf(doc,"\n");
       											fprintf(doc,"\tSaldo Actual: ");
       											fprintf(doc,"$%f",saldo);
       											fprintf(doc,"\n");
       											fprintf(doc,"\t***************************************");
       											fprintf(doc,"\n\n\t  http://kronos.partyjaar.org/banco");
       											fprintf(doc,"\n\t\t\t600 600 312 ");
       											fprintf(doc,"\n\tCopia Cliente.");
										fclose(doc);
										printf("\n\n\t\t\t\tRetire su boleta.\n\n\t\t");
										system("pause");
										goto Inicio;
									break;
									case 924: //Boleta Cuenta Vista - Giro rapido 3
										boletaCVr3:
										doc = fopen("Boleta - Cuenta Vista.txt","w");
												fprintf(doc,"\t ____                                     _  __  _____     ____    _   _    ____     _____ \n");
												fprintf(doc,"\t|  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\n");
												fprintf(doc,"\t| |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \n");
												fprintf(doc,"\t|  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\n");
												fprintf(doc,"\t| |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\n");
												fprintf(doc,"\t|____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\n");
												
												fprintf(doc,"\n\n\t\tCuenta Vista - Comprobante de trasnferencia");
												fprintf(doc,"\n\n\t***************************************");
												fprintf(doc,"\n\tCuenta: ");
       											fprintf(doc,"%d",rut);
												fprintf(doc,"\n\tTitular: %s %s",nombre,apellido1);
       											fprintf(doc,"\n\tMonto: ");
       											fprintf(doc,"$%f",ccrapido3);
       											fprintf(doc,"\n");
       											fprintf(doc,"\tSaldo Actual: ");
       											fprintf(doc,"$%f",saldo);
       											fprintf(doc,"\n");
       											fprintf(doc,"\t***************************************");
       											fprintf(doc,"\n\n\t  http://kronos.partyjaar.org/banco");
       											fprintf(doc,"\n\t\t\t600 600 312 ");
       											fprintf(doc,"\n\tCopia Cliente.");
										fclose(doc);
										printf("\n\n\t\t\t\tRetire su boleta.\n\n\t\t");
										system("pause");
										goto Inicio;
									break;
									case 925: //Boleta Cuenta Vista - Giro rapido 4
										boletaCVr4:
										doc = fopen("Boleta - Cuenta Vista.txt","w");
												fprintf(doc,"\t ____                                     _  __  _____     ____    _   _    ____     _____ \n");
												fprintf(doc,"\t|  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\n");
												fprintf(doc,"\t| |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \n");
												fprintf(doc,"\t|  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\n");
												fprintf(doc,"\t| |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\n");
												fprintf(doc,"\t|____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\n");
												
												fprintf(doc,"\n\n\t\tCuenta Vista - Comprobante de trasnferencia");
												fprintf(doc,"\n\n\t***************************************");
												fprintf(doc,"\n\tCuenta: ");
       											fprintf(doc,"%d",rut);
												fprintf(doc,"\n\tTitular: %s %s",nombre,apellido1);
       											fprintf(doc,"\n\tMonto: ");
       											fprintf(doc,"$%f",ccrapido4);
       											fprintf(doc,"\n");
       											fprintf(doc,"\tSaldo Actual: ");
       											fprintf(doc,"$%f",saldo);
       											fprintf(doc,"\n");
       											fprintf(doc,"\t***************************************");
       											fprintf(doc,"\n\n\t  http://kronos.partyjaar.org/banco");
       											fprintf(doc,"\n\t\t\t600 600 312 ");
       											fprintf(doc,"\n\tCopia Cliente.");
										fclose(doc);
										printf("\n\n\t\t\t\tRetire su boleta.\n\n\t\t");
										system("pause");
										goto Inicio;
									break;
									case 931:
										boletaLC:
										doc = fopen("Boleta - Linea de Credito.txt","w");
												fprintf(doc,"\t ____                                     _  __  _____     ____    _   _    ____     _____ \n");
												fprintf(doc,"\t|  _ \\                                   | |/ / |  __ \\   / __ \\  | \\ | |  / __ \\   / ____|\n");
												fprintf(doc,"\t| |_) |   __ _   _ __     ___    ___     | ' /  | |__) | | |  | | |  \\| | | |  | | | (___  \n");
												fprintf(doc,"\t|  _ <   / _` | | '_ \\   / __|  / _ \\    |  <   |  _  /  | |  | | | . ` | | |  | |  \\___ \\\n");
												fprintf(doc,"\t| |_) | | (_| | | | | | | (__  | (_) |   | . \\  | | \\ \\  | |__| | | |\\  | | |__| |  ____) |\n");
												fprintf(doc,"\t|____/   \\__,_| |_| |_|  \\___|  \\___/    |_|\\_\\ |_|  \\_\\  \\____/  |_| \\_|  \\____/  |_____/\n");
												
												fprintf(doc,"\n\n\t\tLinea de Credito - Comprobante de trasnferencia");
												fprintf(doc,"\n\n\t***************************************");
												fprintf(doc,"\n\tCuenta: ");
       											fprintf(doc,"%d",rut);
												fprintf(doc,"\n\tTitular: %s %s",nombre,apellido1);
       											fprintf(doc,"\n\tMonto: ");
       											fprintf(doc,"$%f",LCsaldo1);
       											fprintf(doc,"\n");
       											fprintf(doc,"\tSaldo de Cuenta Corriente: ");
       											fprintf(doc,"$%f",casaldo);
       											fprintf(doc,"\n");
       											fprintf(doc,"\t***************************************");
       											fprintf(doc,"\n\n\t  http://kronos.partyjaar.org/banco");
       											fprintf(doc,"\n\t\t\t600 600 312 ");
       											fprintf(doc,"\n\tCopia Cliente.");
										fclose(doc);
										printf("\n\n\t\t\t\tRetire su boleta.\n\n\t\t");
										system("pause");
										goto Inicio;
									break;
//************************************Fin Boletas
					}
						
						
				//Finalizado	
				printf("\n\n\n\t");
				system("pause");
}

//Desencriptado
void desencriptarArchivo() {
     FILE *NetOn;
     FILE *NetOff;
     char c;
     
     NetOn = fopen( "Garen.JAAR", "r" );
     NetOff = fopen( "JAARencripter.JAAR", "w" );

     c=fgetc(NetOn);
     while(c>0)
     {
            fputc( ((int)c) - 3, NetOff );
            c=fgetc(NetOn);
     }
     
     fclose( NetOn );
     fclose( NetOff );
     
    
    
     //system("del JAARencripter.JAAR");
}

void desencriptardepositos() {
     FILE *NetOn;
     FILE *NetOff;
     char c;
     
     NetOn = fopen( "Gnar.JAAR", "r" );
     NetOff = fopen( "JAARdepositos.JAAR", "w" );

     c=fgetc(NetOn);
     while(c>0)
     {
            fputc( ((int)c) - 3, NetOff );
            c=fgetc(NetOn);
     }
     
     fclose( NetOn );
     fclose( NetOff );
}

void encriptarArchivo()
{
     FILE *NetOn2;
     FILE *NetOff2;
     char c;
     
     NetOn2 = fopen( "blocked.JAAR", "r" );
     NetOff2 = fopen( "Garen.JAAR", "w" );
     
     c=fgetc( NetOn2 );
     while(c>0)
     {      
            fputc( c + 3, NetOff2 );
            c=fgetc( NetOn2 );
     } 
     
     fclose( NetOn2 );
     fclose( NetOff2 );
     
     system("del blocked.JAAR");
}

void encriptardepositos()
{
     FILE *NetOn3;
     FILE *NetOff3;
     char c;
     
     NetOn3 = fopen( "depositos.JAAR", "r" );
     NetOff3 = fopen( "Gnar.JAAR", "w" );
     
     c=fgetc( NetOn3 );
     while(c>0)
     {      
            fputc( c + 3, NetOff3 );
            c=fgetc( NetOn3 );
     } 
     
     fclose( NetOn3 );
     fclose( NetOff3 );
     
     system("del depositos.JAAR");
}

//Ajuste de pantalla
bool NetDDoS(int Fat, int Tall) {
	_COORD Coordenada;
		Coordenada.X = Fat;
		Coordenada.Y = Tall;
	_SMALL_RECT Rect;
		Rect.Top = 0;
		Rect.Left = 0;
		Rect.Right = Fat - 1;
		Rect.Bottom = Tall - 1;
	HANDLE hConsola = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleScreenBufferSize(hConsola, Coordenada);
		SetConsoleWindowInfo(hConsola, TRUE, &Rect);
	return TRUE;
}
