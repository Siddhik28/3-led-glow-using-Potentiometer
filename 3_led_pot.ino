#define pot A1 //potentiometer
#define led 7
#define sled 4
#define aled 2

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(sled,OUTPUT);
  pinMode(aled,OUTPUT);
  pinMode(pot,INPUT);
}

void loop() {
  int X = analogRead(pot);
  Serial.print("pot value = ");
  Serial.print(X);
  if(X<=0){
  Serial.println("NOT ACTIVE");
  digitalWrite(led,LOW);
  Serial.println("LED IS OFF");
}
 if(X<=100){
  Serial.println(" ACTIVE");
  digitalWrite(led,HIGH);
  digitalWrite(sled,LOW);
  digitalWrite(aled,LOW);
  Serial.println("LED IS On");
}
else if(X>101&&X<=200){
  Serial.println("ACTIVE");
  digitalWrite(led,LOW);
  digitalWrite(sled,HIGH);
  digitalWrite(aled,LOW);
  Serial.println("LED IS ON");
}
else if(X>201&&X<=300){
  Serial.println("ACTIVE");
  digitalWrite(led,LOW);
  digitalWrite(sled,LOW);
  digitalWrite(aled,HIGH);
  Serial.println("LED IS ON");
}
else{
  Serial.println("READING OF POT IS = ");
  Serial.print(X);
  digitalWrite(led,HIGH);
  Serial.println("LED IS ON");
  }
  }
  


