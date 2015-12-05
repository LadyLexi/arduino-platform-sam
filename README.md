# arduino-platform-sam
Temporary testing repository for https://github.com/arduino/Arduino/pull/1823 
No changes to code have been made at this time. Current files have fixed Board issues with the DUE...  
Refer To below for Description of Author and code changes
 For more information, see the website at: http://www.arduino.cc/  
12 12   or the forums at: http://www.arduino.cc/forum/    
13   -You can also follow Arduino on twitter at: https://twitter.com/arduino or like Arduino on Facebook at: https://www.facebook.com/official.arduino  
 13  +You can also follow Arduino on twitter at: https://twitter.com/arduino or  
 14  +like Arduino on Facebook at: https://www.facebook.com/official.arduino  
14 15     
15 16   * To report a *bug* in the software or to request *a simple enhancement* go to:  
16 17   http://github.com/arduino/Arduino/issues  

 
 @@ -35,11 +36,18 @@ Credits 
35 36   --------  
36 37   Arduino is an open source project, supported by many.  
37 38     
38   -The Arduino team is composed of Massimo Banzi, David Cuartielles, Tom Igoe,  
39   -Gianluca Martino, Daniela Antonietti, and David A. Mellis.  
40   -  
41   -Arduino uses the [GNU avr-gcc toolchain](http://gcc.gnu.org/wiki/avr-gcc), [avrdude](http://www.nongnu.org/avrdude/), [avr-libc](http://www.nongnu.org/avr-libc/), and code from  
42   -[Processing](http://www.processing.org) and [Wiring](http://wiring.org.co).  
 39  +The Arduino team is composed of Massimo Banzi, David Cuartielles, Tom Igoe  
 40  +and David A. Mellis.  
 41  +  
 42  +Arduino uses  
 43  +[GNU avr-gcc toolchain](http://gcc.gnu.org/wiki/avr-gcc),  
 44  +[GCC ARM Embedded toolchain](https://launchpad.net/gcc-arm-embedded),  
 45  +[avr-libc](http://www.nongnu.org/avr-libc/),  
 46  +[avrdude](http://www.nongnu.org/avrdude/),  
 47  +[bossac](http://www.shumatech.com/web/products/bossa),  
 48  +[openOCD](http://openocd.org/)  
 49  +and code from [Processing](http://www.processing.org)  
 50  +and [Wiring](http://wiring.org.co).  
43 51     
44 52   Icon and about image designed by [ToDo](http://www.todo.to.it/)  
45 53     
