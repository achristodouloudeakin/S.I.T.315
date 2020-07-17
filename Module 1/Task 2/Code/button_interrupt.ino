int button_1 = 2;
int led_1 = 5;

int led_state = LOW;

void setup()
{
    Serial.begin(9600);
    pinMode(button_1, INPUT_PULLUP);
    pinMode(led_1, OUTPUT);

    attachInterrupt(digitalPinToInterrupt(button_1), toggle_func, FALLING);
}

void loop()
{
    Serial.print("Delay");
    delay(500);
}

void toggle_func()
{
    Serial.print("Button Pressed");
    led_state = !led_state;
    digitalWrite(led_1, led_state);
}