
 /*********************************************************************
 **                                                                 **       
 **                          TÏTOL: Math is fun                     ** 
 **                                                                 **
 **                                                                 ** 
 **  Nom: Salva Ramírez                            Data: 10/04/2017 **
 ********************************************************************/
//************************ INCLUDE ***********************************


//*********************** VARIABLES **********************************
int num = 64;



//************************* SETUP ************************************

void setup() {      // configura el final de salida
  
Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.println("Different formats for the same number:"); // escriu el mateix nº de diferents formes

  Serial.write(num); // escriu el nº
  Serial.println();
  
  Serial.println(num);
  Serial.println(num,DEC); // escriu en decimal
  
  Serial.println(num,BIN);  // escriu en binari
  
  Serial.println(num,HEX);  // escriu en hexadecimal
  
  Serial.println(num,OCT);  // escriu en octogonal

}

//************************** LOOP ************************************

void loop() {                    // inicia el bucle del programa


}


//************************ FUNCIONS **********************************
