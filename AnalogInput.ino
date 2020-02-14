int v1=A0;
int v2=A1;
int v3=A2;
int v4=A3;
int v5=A4;
int va;
int vb;
int vc;
int vd;
int ve;
void setup(){
  
    pinMode(v1,INPUT);
    pinMode(v2,INPUT);
    pinMode(v3,INPUT);
    pinMode(v4,INPUT);
    pinMode(v5,INPUT);
    Serial.begin(9600);
 
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);  
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT);  
  pinMode(6, OUTPUT);  
  pinMode(7, OUTPUT);  
  pinMode(8, OUTPUT);  
  pinMode(9, OUTPUT);  
  pinMode(10, OUTPUT);  
  pinMode(11, OUTPUT);  
  pinMode(12, OUTPUT);  
  pinMode(13, OUTPUT);   
        
}
 void loop()
 {
    va = analogRead(v1);
    vb = analogRead(v2);
    vc = analogRead(v3);
    vd = analogRead(v4);
    ve = analogRead(v5);


   if(va<24&&va>10)
   {
    Serial.print("b ");
    digitalWrite(3, HIGH); }
  if(va<3)
  {digitalWrite(3, LOW);}
  if(va>25&&va<55)
   {Serial.print("a ");
   digitalWrite(2, HIGH); }
  if(va<3)
  {digitalWrite(2, LOW);}
    if(va>800)
   {Serial.print("c ");
   digitalWrite(4, HIGH); }
  if(va<3)
  {digitalWrite(4, LOW);}

    if(vb>24&&vb<55)
   {Serial.print("d ");
    digitalWrite(5, HIGH);
    }
  if(vb<3)
  {digitalWrite(5, LOW);}
  
     if(vb<24&&vb>10)
   {
    Serial.print("e ");
     digitalWrite(6, HIGH); }
  if(vb<3)
  {digitalWrite(6, LOW);}

    if(vb>800)
   {Serial.print("f ");
    digitalWrite(7, HIGH); }
  if(vb<2)
  {digitalWrite(7, LOW);}

   
     if(vc<30&&vc>10)
   {
    Serial.print("u ");
       digitalWrite(8, HIGH); }
  if(vc<3)
  {digitalWrite(8, LOW);}
    
    if(vc<10&&vc>4)
   {Serial.print("d ");
    digitalWrite(9, HIGH); }
  if(vc<3)
  {digitalWrite(9, LOW);}
  
    if(vc>800)
   {Serial.print("f ");
    digitalWrite(10, HIGH); }
  if(vc<3)
  {digitalWrite(10, LOW);}
     
      
      if(vd<960&&vd>900)
   {
    Serial.print("z ");
    digitalWrite(11, HIGH); }
  if(vd<3)
  {digitalWrite(11, LOW);
    }
  /*  if(vd<900&&vd>800)
   {Serial.print("k ");
   digitalWrite(10, HIGH); }
  if(vd<3)
  {digitalWrite(10, LOW);}*/
    if(vd>1000)
   {Serial.print("l ");
   digitalWrite(12, HIGH); }
  if(vd<3)
  {digitalWrite(12, LOW);}


    if(ve<900&&ve>700)
   {Serial.print("p ");
   digitalWrite(13, HIGH); }
  if(ve<3)
  {digitalWrite(13, LOW);}
  if(ve>900)
   {Serial.print("o ");}  
    delay(250);
    
  }
