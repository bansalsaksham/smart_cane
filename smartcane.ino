int const trigPin = 10;
int const echoPin = 9;
int const buzzPin1 = 2;
int const BuzzPin =3;
int const Ir = A0;
void setup()
{
     Serial.begin(9600);
     pinMode(Ir,INPUT);
      pinMode(BuzzPin,OUTPUT);
      pinMode(trigPin, OUTPUT); // trig pin will have pulses output
      pinMode(echoPin, INPUT); // echo pin should be input to get pulse width
      pinMode(buzzPin1, OUTPUT); // buzz pin is output to control buzzering
}


void loop() 
{ //IR sensor loop
     int distance=analogRead(Ir);
         if (distance >= 50)
          {
              Serial.println("No Stair");
              digitalWrite(BuzzPin,LOW);   // turn the LED on (HIGH is the voltage level)
              delay(10);
           }  
          else if (distance <=100)
           {
               Serial.println("Alert... Stair Ahead");
               digitalWrite(BuzzPin,HIGH);   
               delay(10);     
            }      // wait for a second



  //Ultrasonic sensor loop

  int duration, distance1;
  // Output pulse with 1ms width on trigPin
  digitalWrite(trigPin, HIGH); 
  delay(1);
  digitalWrite(trigPin, LOW);
  // Measure the pulse input in echo pin
  duration = pulseIn(echoPin, HIGH);
  // Distance is half the duration devided by 29.1 (from datasheet)
  distance1 = (duration/2) / 29.1;
 
  // if distance less than 0.5 meter and more than 0 (0 or less means over range) 
    if (distance1 <= 50 && distance1 >= 0)
     { 
      Serial.println("Alert!!!!  Obstacle Ahead");
      digitalWrite(buzzPin1, HIGH);      // Buzz
     }
    else if(distance1>= 51)
    {
       Serial.println("Safe");
      digitalWrite(buzzPin1, LOW);      // Don't buzz
    }
    // Waiting 60 ms won't hurt any one
    delay(60);
}





