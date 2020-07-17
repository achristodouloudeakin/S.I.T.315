int led1 = 13;

int photoresistor = A1;
int analog_value;

void setup()
{
    Serial.begin(9600);
    pinMode(led1, OUTPUT);
    pinMode(photoresistor, INPUT);
}

void loop()
{
    analog_value = analogRead(photoresistor);
    Serial.print(analog_value);
    
    // So the Serial Monitor Output is understandable
    delay(500);
    
    if (analog_value > 15)
    {
        digitalWrite(led1, LOW);
        Serial.print("Light OFF");
    }
    else
    {
        digitalWrite(led1, HIGH);
        Serial.print("Light ON");
    }
}