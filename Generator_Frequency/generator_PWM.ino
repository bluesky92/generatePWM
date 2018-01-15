void setup(){
   TCCR1A=0; TCCR1B=0;
   // RESET lại 2 thanh ghi
  DDRB |= (1 << PB2);
  // Đầu ra PB2 là OUTPUT ( pin 10)
 
    TCCR1A |= (1 << WGM11);
    TCCR1B |= (1 << WGM12)|(1 << WGM13);
    // chọn Fast PWM chế độ chọn TOP_value tự do  ICR1
    TCCR1A |= (1 << COM1B1);
    // So sánh thường( none-inverting)
    ICR1 = 1600;
    // xung răng cưa tràn sau 10000 P_clock
    OCR1B = 800;
    // Value=5000 -> độ rộng 50 %
    TCCR1B |= (1 << CS10);
    // F_clock/1=16mhz
    //F_pwm=16mhz/10001=533.315 hz
}
void loop(){
}
