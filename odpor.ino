int resist=A1;
float port, Vm, Rm;
void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:

port=analogRead(resist);

Vm=(port*5/1023);
Rm=(10*(5-Vm)/Vm);
Serial.println(Rm);

}
