#include "mbed.h"
#include "../lib/thermal-printer/AdafruitThermal.h"
 
AdafruitThermal Printer(USBRX, USBTX);
 
int main() {
        printf("Bye world");
        Printer.begin();
        Printer.setDefault();
        Printer.test();
        char *OutputText = "Better Work\n";
        Printer.print(OutputText);
        
        char *Testing_Foo = "Hello World!\n";
        Printer.print(Testing_Foo);
        
        // Printer.justify('C');
        // char *Text_Out11 = "normal\nline\nspacing\n";
        // Printer.print(Text_Out11);
        // Printer.setLineHeight(50);
        // char *Text_Out12 = "Taller\nline\nspacing\n";
        // Printer.print(Text_Out12);
        // Printer.setLineHeight(); // Reset to default
        // Printer.justify('L');
        
        // Printer.setSize('L');
        // char *Text_Out8 = "Large\n";
        // Printer.print(Text_Out8);
        
        // Printer.setSize('M');
        // char *Text_Out9 = "Medium\n";
        // Printer.print(Text_Out9);
        
        // Printer.setSize('S');
        // char *Text_Out10 = "Small\n";
        // Printer.print(Text_Out10);
 
        // Printer.doubleHeightOn();
        // char *Text_Out2 = "Double Height ON\n";
        // Printer.print(Text_Out2);
        // Printer.doubleHeightOff();
        
        // Printer.justify('R');
        // char *Text_Out3 = "Right Justified\n";
        // Printer.print(Text_Out3);
        
        // Printer.justify('C');
        // char *Text_Out4 = "Center Justified\n";
        // Printer.print(Text_Out4);
        
        // Printer.justify('L');
        // char *Text_Out5 = "Left Justified\n";
        // Printer.print(Text_Out5);
        
        // Printer.boldOn();
        // char *Text_Out6 = "Bold Text\n";
        // Printer.print(Text_Out6);
        // Printer.boldOff();
        
        /*
        Used to work. Stopped working after several tests for whatever reason
                      
        char *Text_Out1 = "Inverse ON\n";
        Printer.inverseOn();
        Printer.print(Text_Out1);
        Printer.inverseOff();
        */
}