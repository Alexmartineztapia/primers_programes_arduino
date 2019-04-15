    
/*****************************************************************
**                                                              **
**                        Títol: tempera tura aigua IF          **
**                                                              **
**                                                              **
**                                                              **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
int tempAigua = 50;
//*****************************SETUP******************************

void setup() {                 //Configura el final de salida
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua >= 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  }
  else 
  {
    Serial.print("Aigua encara no bull");
}

}

void loop(){}
