byte leds[] = {2, 3, 4};
int trigger = 10;
float echo = 9;
float distancia = 0;

void setup(){
  for(int i = 0; 1 ,= sizeof(leds); i++){
    pinMode(leds[i], OUTPUT);
    }
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop(){
  calibra_sensor();
  distancia = pulseIn(echo, 1);
  
  Serial.print("Distância: ");
  serial.print(idstancia);
}

void calibra_sensor(){
  digitalWrite(trigger, 0);
  delay(10)
  digitalWrite(trigger, 1);
  delay(10)
  digitalWrite(trigger, 0);
}
