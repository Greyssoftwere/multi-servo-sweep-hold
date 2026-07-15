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
