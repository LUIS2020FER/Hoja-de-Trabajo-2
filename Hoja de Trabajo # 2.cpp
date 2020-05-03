# include  < fstream >
# include  < iostream >
# include  < string >
# include  < cstdlib >
# include < ctime > 
# include  < stdio.h >
# include  < vector >
usando el  espacio de nombres  estándar ;

struct  Productos {
  codigo de cuerda;
  int minimo;
  int actual;
  proveedor de cuerdas;
  precio de flotación ;
};

void  agregar_producto () {
  Productos x;
  cout << " Ingrese código de producto " << " \ n " ;
  cin >> x. codigo ;
  cout << " Ingrese el minimo del producto " << " \ n " ;
  cin >> x. minimo ;
  cout << " Ingrese cantidad actual del producto " << " \ n " ;
  cin >> x. real ;
  cout << " Ingrese el proveedor del producto " << " \ n " ;
  cin >> x. proveedor ;
  cout << " Ingrese precio del producto " << " \ n " ;
  cin >> x. precio ;

    // grabamos producto en el archivo.
    ofstream miarchivo ( " stock.txt " , std :: ios_base :: app);
    miarchivo << x. codigo << " \ t " << x. minimo << " \ t " << x. << " \ t " real << x. proveedor << " \ t " << x. precio << endl;
    // Cerramos la escritura del archivo.
    miarchivo cerrar ();
}

vacío  leer_archivo () {
    // declaramos la variable para leer el archivo
    ifstream miarchivo;
    
    // archivo std :: ifstream ("myfile", std :: ios :: binary | std :: ios :: ate);
    // abrimos archivo
    miarchivo abierto ( " stock.txt " , ios :: in);
    
    // declara una cadena para contener cada línea de texto
    línea de cuerda;

    // recorrer mi archivo mientras exista la línea
    while ( getline (miarchivo, line))
    {
        cout << línea << endl;
        // grabo en memoria
        // en_memoria.push_back (línea);
    }

    // asegúrese de cerrar ifstream
    miarchivo cerrar ();
    cadena vacía;
    cin >> vacío;
    volver ;
}


int  main () {
  char tecla;
  cadena vacía;
  bool bandera = falso ;
  
  hacer
    {
        sistema ( " claro " );
        cin. claro ();
        cout << " Productos " << endl;
        cout << " ----------- " << endl << endl;
        cout << " \ t 1 .- Agregar Producto " << endl;
        cout << " \ t 2 .- Leer archivo y mostrar minimos " << endl;
        cout << " \ t 3 .- Salir " << endl << endl;
        cout << " Elije una opcion: " ;
 
        cin >> tecla;
 
		interruptor (tecla)
    		{
			caso  ' 1 ' :
				sistema ( " claro " );
        agregar_producto ();
        romper ;
 
			caso  ' 2 ' :
        sistema ( " claro " );
        leer_archivo ();
        romper ;

      caso  ' 3 ' :
				bandera = verdadero ;
				// salida (1);
				romper ;
 
			por defecto :
				sistema ( " claro " );
				cout << " Opción no valida. \ a \ n " ;
				getchar ();
        getline (cin, vacío);
				romper ;
		}
    } while (bandera! = verdadero );
  
  devuelve  0 ;
}
