const int gasSensor =0;
void setup()
{
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop()
{
  float voltage;
  voltage = getVoltage(gasSensor);


  Serial.println(voltage);

  delay(1000);
  
  // put your main code here, to run repeatedly:

}
float getVoltage(int pin)
{
  return(analogRead(pin)*0.004882814);
}

