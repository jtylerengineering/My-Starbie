const int buzzerPin = 4;
const int buttonPin = 5;

int fullnessChange = -1;
const int startingFullness = 10;
const int hungerThreshold = 3;
int fullness;

void setup(){
    pinMode(buzzerPin, OUTPUT);
    pinMode(buttonPin, INPUT);
    fullness = startingFullness;
}
void loop(){
    int buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH && fullness < startingFullness){
        fullness += (startingFullness - fullness);

    }
   
    if (fullness <= hungerThreshold){
        tone(buzzerPin, 1000);
        noTone(buzzerPin);
        tone(buzzerPin, 900);
        noTone(buzzerPin);
    }
    else{
        noTone(buzzerPin);
    }
    
}