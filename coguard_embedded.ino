#define SENSOR A0 // Set the A0 as SENSOR
char str_sensor[10];
 

void setup() {
  Serial.begin(115200);
  pinMode(SENSOR, INPUT);
}
 
void loop() {


  
  float sensor = analogRead(SENSOR); 
  
  /* 4 is mininum width, 2 is precision; float value is copied onto str_sensor*/
  dtostrf(sensor, 4, 2, str_sensor);
  Serial.println(str_sensor);
  delay(100);
}
