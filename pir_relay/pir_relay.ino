/*  
    Arduino with PIR motion sensor
    by Sarjana Electro
    Like, share and Subcsribe!
*/
 
int Relay = 7;                // the pin that the relay is atteched to
int PIR_sensor = 8;              // the pin that the sensor is atteched to
int val = 0;                 // variable to store the sensor status (value)

void setup() {
  pinMode(Relay, OUTPUT);      // initalize relay as an output
  pinMode(PIR_sensor, INPUT);    // initialize sensor as an input
}

void loop(){
  val = digitalRead(PIR_sensor);   // read sensor value
  if (val == HIGH) {           // check if the sensor is HIGH
    digitalWrite(Relay, LOW);   // The Relay Input works Inversly 
  } 
  else {
      digitalWrite(Relay, HIGH); // turn relay OFF
  }
}
