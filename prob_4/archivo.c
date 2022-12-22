#define BLUE_LED p11
#define YELLOW_LED p12

//Defincion de entradas
DigitalIn sw1(SW1);
DigitalIn sw2(SW2);
DigitalIn sw3(SW3);
DigitalIn sw4(SW4);
DigitalIn sw5(SW5);

//Definicion de salidas
DigitalOut rled(RED_LED);
DigitalOut bled(BLUE_LED);
DigitalOut yled(YELLOW_LED);

void EsperaSW1(int* n1, int* n2, int* n3);
void EsperaSW2(int n1, int n2, int n3);

int main() 
{
    while(1)
    {
        int num1 = 0;
        int num2 = 0;
        int num3 = 0;
        
        EsperaSW1(&num1, &num2, &num3);
    
        EsperaSW2(num1, num2, num3);
     
    }
}

void EsperaSW1(int* n1, int* n2, int* n3)
{
    int temporal = 0;
    while(sw1.read() == 0)
    {
        if(sw3.read() == 1)
        {
            (*n1)++;
            while(sw3.read() == 1);
        }
        if(sw4.read() == 1)
        {
            (*n2)++;
            while(sw4.read() == 1);
        }
        if(sw5.read() == 1)
        {
            (*n3)++;
            while(sw5.read() == 1);
        }
    }
    
    if (*n1 > *n2)
    {
        temporal = *n2;
        *n1 = *n2;
        *n2 = temporal;
    }
    
    if (*n2 > *n3)
    {
        temporal = *n3;
        *n2 = *n3;
        *n3 = temporal;
    }
    
    if (*n1 > *n2)
    {
        temporal = *n2;
        *n1 = *n2;
        *n2 = temporal;
    }
}

void EsperaSW2(int n1, int n2, int n3)
{
   int i;
   
   while(sw2.read() == 0);
   
   for(i = 0;i < 2*n1; i++)
   {
       rled = !rled;
       wait_ms(500);
   }
   
   for(i = 0;i < 2*n2; i++)
   {
       bled = !bled;
       wait_ms(500);
   }
   
   for(i = 0;i < 2*n3; i++)
   {
       yled = !yled;
       wait_ms(500);
   }
}