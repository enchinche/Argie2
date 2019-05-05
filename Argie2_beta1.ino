/*

Hi, I'm Germán, an argentinean in Barcelona. 

I'll be allways a "Guiri" programming, but I combine it  with What I Know about Architecture and Design and I made domotic lamps.

I invite you to see my project in

enchinche.com


This Software includes MIT, ADAFRUIT y PAINLESSMESH libraries.


//For Cheba, Studio and Faro, prototypes of domotic LED device that I made in Gràcia, Barcelona.


Ideas? Suggestions?
You can communicate with me by Whatsapp +34722148607

*/








typedef struct
 {
     int one;
     int two;
     int three;
 }  record_type;

record_type record[8];

void setup()
{
  Serial.begin (115200);

 // Colores Setup
 record[0].one = 1;
 record[0].two = 2;
 record[0].three = 3;
 
 record[1].one = 4;
 record[1].two = 5;
 record[1].three = 6;
 
 record[2] = (record_type) {1,2,3};
 
}

void loop()
{



for (int i=0; i<3; i++)
{
 Serial.println (record[i].one);  
}
delay (10000);
}



