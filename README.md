# Lokum_RP2040
Small programs examples for RP2040 Microcontroller ( Raspberry Pi Pico )

### About RP2040

RP2040 is a low-cost, high-performance microcontroller device with flexible digital interfaces. Key features:
* Dual Cortex M0+ processor cores, up to 133 MHz
* 264 kB of embedded SRAM in 6 banks
* 30 multifunction GPIO
* 6 dedicated IO for SPI Flash (supporting XIP with it is a feature used in the 'boot from flash' type of application. XIP mode enables execution of code from serial SPI flash instead of the more traditional way of executing the code from memories such as DDR/SRAM)
* Dedicated hardware for commonly used peripherals
* Programmable IO for extended peripheral support
* 4 channel ADC with internal temperature sensor, with 0.5 MSa/s (the MSa/s means MegaSAmples per Second which it is a measurement of sampling rate in millions of samples per second, here means 5k samples/s ), 12-bit conversion
* USB 1.1 Host/Device

### Contents of the examples
This mark :heavy_check_mark: mean the example is available. 
:warning: If there are any issues in the scripts of the examples write an issue in: [issues](https://github.com/walidamriou/Lokum_RP2040/issues "issues")  

- 0001 Getting Started (Blink) :heavy_check_mark:	    
- 0002 Blink with multifiles (include local .h and .c)  :heavy_check_mark: 
- 0003 GPIO Interrupt handler (Using /simulations/ESP8266_PWM_Generator_Arduino as input signal) :heavy_check_mark:

  
### Install tools 
#### Linux 
Open terminal and write: 
1- Get the script (if you do not have wget yet install it by: ``` sudo apt install wget ```):
```
$ wget https://raw.githubusercontent.com/raspberrypi/pico-setup/master/pico_setup.sh 1
```
2- Make the script executable:
```
$ chmod +x pico_setup.sh
```
3- Run it:
```
$ ./pico_setup.sh
```
4- Reboot your system when the install is done:
```
$ sudo reboot
```
The script will:  
• Create a directory called pico  
• Install required dependencies  
• Download the pico-sdk , pico-examples , pico-extras , and pico-playground repositories  
• Define PICO_SDK_PATH , PICO_EXAMPLES_PATH , PICO_EXTRAS_PATH , and PICO_PLAYGROUND_PATH in your ~/.bashrc  
• Build the blink and hello_world examples in pico-examples/build/blink and pico-examples/build/hello_world  
• Download and build picotool and copy it to /usr/local/bin  
• Download and build picoprobe  
• Download and compile OpenOCD (for debug support)  
• Download and install Visual Studio Code   
• Install the required Visual Studio Code extensions   
• Configure the Raspberry Pi UART for use with Raspberry Pi Pico   

* More on "Getting Started With Raspberry Pi Pico" file  
 
5- on VScode install "cmake-tools":  
https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools

6- Follow docs/How to build to build your project

### Serial (to see printf output)
```
sudo apt install minicom
minicom -b 115200 -o -D /dev/ttyACM0
```

### Copyright CC 2020 Walid Amriou

<a rel="license" href="http://creativecommons.org/licenses/by-nc-sa/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-nc-sa/4.0/88x31.png" /></a><br />This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-nc-sa/4.0/">Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License</a>.

__You are free to:__
  * Share — copy and redistribute the material in any medium or format
  * Adapt — remix, transform, and build upon the material
The licensor cannot revoke these freedoms as long as you follow the license terms.  

__Under the following terms:__
  * Attribution — You must give appropriate credit, provide a link to the license, and indicate if changes were made. You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.
  * NonCommercial — You may not use the material for commercial purposes.
  * ShareAlike — If you remix, transform, or build upon the material, you must distribute your contributions under the same license as the original.
  * No additional restrictions — You may not apply legal terms or technological measures that legally restrict others from doing anything the license permits.


the software or Code or Scripts or any files in this source is provided "as is" and the author disclaims all warranties with regard to this files including all implied warranties of merchantability and fitness. in no event shall the author be liable for any special, direct, indirect, or consequential damages or any damages whatsoever resulting from loss of use, data or profits, whether in an action of contract, negligence or other tortious action, arising out of or in connection with the use or performance of this software or code or scripts or any files in this source.

© The logo and the name of the project Lokum are owned by __Walid Amriou__, and do not fall under the open license for reconstruction, it must be preserved in full without modification. 

