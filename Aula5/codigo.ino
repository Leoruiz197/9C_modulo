const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;

const int pot = 0;


void setup()
{ 
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  Serial.begin(9600);
}

int var;

void loop()
{
    var = analogRead(pot);
    Serial.println(var);

    if(var > 100){
        digitalWrite(led1, HIGH);
    }else{
        digitalWrite(led1, LOW);
    }

    if(var > 300){
        digitalWrite(led2, HIGH);
    }else{
        digitalWrite(led2, LOW);
    }

    if(var > 500){
        digitalWrite(led3, HIGH);
    }else{
        digitalWrite(led3, LOW);
    }

    if(var > 700){
        digitalWrite(led4, HIGH);
    }else{
        digitalWrite(led4, LOW);
    }

    if(var > 900){
        digitalWrite(led5, HIGH);
    }else{
        digitalWrite(led5, LOW);
    }

    delay(10);
}
