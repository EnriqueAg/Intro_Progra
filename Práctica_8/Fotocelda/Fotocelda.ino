void setup(){
    Serial.begin(9600);
    pinMode(10,INPUT);
}

void loop(){
    int val;
    val=analogRead(10);
    Serial.println(val);
    delay(500);
}
