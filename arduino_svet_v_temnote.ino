int light = 0; 

void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600); //configure serial to talk to computer
    pinMode(7, OUTPUT); // configure digital pin 7 as an output
}

void loop() {
    // put your main code here, to run repeatedly:
    light = analogRead(A0); // read and save value from PR
    
    Serial.println(light); // print current light value
 
    if(light > 450) { // If it is bright...
        Serial.println("It is quite light!");
        digitalWrite(7,LOW); //turn  LED off
    }
    else if(light > 229 && light < 451) { // If it is average light...
        Serial.println("It is average light!");
       digitalWrite(7, HIGH); // turn LED on
    }
    else { // If it's dark...
        Serial.println("It is pretty dark!");
        digitalWrite(7,HIGH); // Turn  LED on
    }
    delay(1000); 
}
