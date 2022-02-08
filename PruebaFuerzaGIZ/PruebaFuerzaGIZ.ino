float value1;
float value2;
float value3;
float value4;

float sum;

void setup() {
  Serial.begin(9600);
  

}

void loop() {
value1 = analogRead(A0);
value2 = analogRead(A1);
value3 = analogRead(A2);
value4 = analogRead(A3);

sum = value1 + value2+ value3 + value4;

Serial.println(sum);
delay(350);
}
