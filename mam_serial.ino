void setup() {
  // put your setup code here, to run once:
 
  int inputs[8]={0,1,2,3,4,5,6,7};
  //PA0 - PA7

  for(int i=0;i<8;++i){
    pinMode(inputs[i],INPUT_PULLUP);
    digitalWrite(inputs[i],HIGH);
  }
  
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int inputs[8]={0,1,2,3,4,5,6,7};
  int output[8]={};
  
  for(int i=0;i<8;++i){
    output[i]=digitalRead(inputs[i]);
  }
  for(int i=0;i<8;++i){
    Serial.print(output[i]);
  }
  Serial.print('\n');
  delay(10);

}
