int door = D2;
int led = D7;
int flag = 0;
Servo myservo;

void setup()
{
    pinMode(led, OUTPUT);
    Particle.function("open",toggle);
    digitalWrite(led, LOW);
    myservo.attach(door);
    myservo.write(0);
}

void loop()
{
    
}

int toggle(String command) {
    if (flag == 0)
    {
        flag=1;
        digitalWrite(led, HIGH);
        myservo.write(90);
        delay(2000);
        digitalWrite(led, LOW);
        myservo.write(0);
        flag=0;
        return 1;
    }
    else return 0;
}