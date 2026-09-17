int i = 0;

const uint8_t sineTable[38] = {
  146, 166, 184, 201, 216, 229, 240, 247,
  252, 254, 252, 247, 240, 229, 216, 201,
  184, 166, 146, 146, 166, 184, 201, 216, 
  229, 240, 247, 252, 254, 252, 247, 240, 
  229, 216, 201, 184, 166, 146};

void setup() {

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  TCCR1A = 0;
  TCCR1B = 0;

  TCCR1A |= _BV(WGM11);
  TCCR1B |= _BV(WGM13) | _BV(WGM12);

  TCCR1A |= _BV(COM1A1) | _BV(COM1B1);

  ICR1 = 255;

  TCCR1B |= _BV(CS10);

}

void loop() {

if(i==20){
  delayMicroseconds(100);
}

    if (i>19) { 
       OCR1A = sineTable[i];
      i = i + 1;
      if (i>37) { 
      i = 0;
      delayMicroseconds(100);
      }
    }
    else {
      OCR1B = sineTable[i];
          i = i + 1;
    }

delayMicroseconds(515); // 495 for 50Hz

}
