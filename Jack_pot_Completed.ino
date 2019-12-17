#include "LedControl.h"                   

LedControl lc=LedControl(12,11,10,2); 

int button =  9 ;

byte One[]=
{
  B00011000,
  B00111000,
  B01011000,
  B00011000,
  B00011000,
  B00011000,
  B01111110,
  B00000000
};

 byte Two[]=
 {
  B00111100,
  B01001100,
  B00011000,
  B00110000,
  B01100000,
  B01000000,
  B01111110,
  B00000000
 };

  byte Three[]=
  {
  B00000000,
  B00111100,
  B01000110,
  B00011110,
  B00000110,
  B01000110,
  B00111100,
  B00000000
  };

  byte Four[]=
  {
  B00000000,
  B00001110,
  B00010110,
  B00100110,
  B01000110,
  B01111111,
  B00000110,
  B00000000
  };

  byte Five[]=
  {
  B00000000,
  B01111110,
  B01100000,
  B01100000,
  B01111110,
  B00000110,
  B01111110,
  B00000000
  };

  byte Six[]=
  {
  B00111100,
  B01000010,
  B01000000,
  B01000000,
  B01111110,
  B01100110,
  B01111110,
  B00000000
  };

  byte Seven[]=
  {
  B00000000,
  B01111110,
  B01000010,
  B01100010,
  B00000010,
  B00000010,
  B00000010,
  B00000000
  };

  byte Eight[]=
  {
  B00000000,
  B01111110,
  B01000010,
  B01111110,
  B01000010,
  B01111110,
  B00000000,
  B00000000
  };
  
 
  
void setup()
{
  lc.shutdown(0,false); 
  lc.setIntensity(0,8);    
  lc.clearDisplay(0);    
  lc.shutdown(1,false); 
  lc.setIntensity(1,8);    
  lc.clearDisplay(1);
  pinMode(button,INPUT);    
  randomSeed(analogRead(0));
}

void one1()
{  for (int i = 0; i < 8; i++)  
{
    lc.setRow(0,i,One[i]);
  }
}

void two1()
{  for (int i = 0; i < 8; i++)  
{
    lc.setRow(0,i,Two[i]);
  }
}        

void three1()
{  for (int i = 0; i < 8; i++)  
{
    lc.setRow(0,i,Three[i]);
  }
}

void four1()
{  for (int i = 0; i < 8; i++)  
{
    lc.setRow(0,i,Four[i]);
  }
}

void five1()
{  for (int i = 0; i < 8; i++)  
{
    lc.setRow(0,i,Five[i]);
  }
}

void six1()
{  for (int i = 0; i < 8; i++)  
{
    lc.setRow(0,i,Six[i]);
  }
}

void seven1()
{  for (int i = 0; i < 8; i++)  
{
    lc.setRow(0,i,Seven[i]);
  }
}

void eight1()
{  for (int i = 0; i < 8; i++)  
{
    lc.setRow(0,i,Eight[i]);
  }
}

void one2()
{  for (int i = 0; i < 8; i++)  
{
    lc.setRow(1,i,One[i]);
  }
} 


void two2()
{  for (int i = 0; i < 8; i++)  
{
    lc.setRow(1,i,Two[i]);
  }
}

void three2()
{  for (int i = 0; i < 8; i++)  
{
    lc.setRow(1,i,Three[i]);
  }
}         

void four2()
{  for (int i = 0; i < 8; i++)  
{
    lc.setRow(1,i,Four[i]);
  }
}         

void five2()
{  for (int i = 0; i < 8; i++)  
{
    lc.setRow(1,i,Five[i]);
  }
}         

void six2()
{  for (int i = 0; i < 8; i++)  
{
    lc.setRow(1,i,Six[i]);
  }
}

void seven2()
{  for (int i = 0; i < 8; i++)  
{
    lc.setRow(1,i,Seven[i]);
  }
}

void eight2()
{  for (int i = 0; i < 8; i++)  
{
    lc.setRow(1,i,Eight[i]);
  }
}

void loop()
{if(digitalRead(button) == HIGH){
  while(digitalRead(button) ==HIGH);
  delay(20000);
}
    
   switch (random(8))
   {
    case 0 : one1(); break;
    case 1 : two1(); break;
    case 2 : three1(); break;
    case 3 : four1(); break;
    case 4 : five1(); break;
    case 5 : six1(); break;
    case 6 : seven1(); break;
    case 7 : eight1(); break;
   }
  
   switch(random(8))
   {
    case 0 : one2(); break;
    case 1 : two2(); break;
    case 2 : three2(); break;
    case 3 : four2(); break;
    case 4 : five2(); break;
    case 5 : six2(); break;
    case 6 : seven2(); break;
    case 7 : eight2(); break;
   }
   delay(1000);
  }

  




