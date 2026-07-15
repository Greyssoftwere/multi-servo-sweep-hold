# multi-servo-sweep-hold
TTinkercad Circuits simulation demonstrating a sweep sequence and holding still at 90 degrees using four servo motors controlled via Arduino arrays .
# Equipment 
- 4 servo motor (not DC)
- Arduino board
- Wires
- Breadboard
  # Pins
  - The ground in servos is connected to the negetive in the breadboard and the negetive is connected in GND in Arduino
  - The power in  servos is connected to the positive in the breadboard and the positive is connected in 5V in Arduino
  - Each signal in the 4 servos is connected to the following pins (8 - 9 - 10 -11 )
 
    # coding
    
  
```cpp
#include <Servo.h>


Servo servos[4]; 
void setup() {

  for (int i = 0; i < 4; i++) {
    servos[i].attach(8 + i);
  }
  
  for (int j = 0; j <= 90; j++) {
    movingeAllServos(j);
    delay(11);
  }
for (int j = 90; j >=0; j--) {
    movingeAllServos(j);
    delay(11);
  }
 movingeAllServos(90);
}

void loop() {
  
}


void movingeAllServos(int angle) {
  for (int i = 0; i < 4; i++) {
    servos[i].write(angle); 
  }
}



```

# Video Demonstration



https://github.com/user-attachments/assets/3beeb2ab-455e-441c-80f8-25ef88ff7863


