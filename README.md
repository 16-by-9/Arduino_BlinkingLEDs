# Blinking LEDs 💡  

This project is a basic **Arduino sketch** that blinks multiple **LEDs at different intervals**. It demonstrates the use of **digitalWrite()**, **delay()**, and **for loops** to control LED states.

## 🛠 Features  
- **Multiple LEDs** blinking at different rates.  
- **Adjustable delay times** for custom blink patterns.  
- **Beginner-friendly** – easy to modify and expand.  

## 🔧 Hardware Requirements  
- 🔴 **LEDs** (Multiple)  
- 🛠 **Resistors** (330Ω recommended)  
- 💻 **Arduino Board** (Uno, Mega, Nano, etc.)  
- 🔌 **Jumper Wires**  

## 🚀 Wiring Guide  
| LED Pin  | Arduino Pin |
|---------|------------|
| **LED 1** | D5         |
| **LED 2** | D6         |

## 📜 Code Overview:

void setup() {
  // put your setup code here, to run once:
pinMode (5, OUTPUT);
pinMode (6, OUTPUT);

#define LED1 5

#define LED2 6

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite (5, HIGH);

delay(100);

digitalWrite (5, LOW);

digitalWrite (6, HIGH);

delay(100);

digitalWrite (6, LOW);
}