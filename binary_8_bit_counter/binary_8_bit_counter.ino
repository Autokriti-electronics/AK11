void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
Serial.begin(9600);
Serial.println("Enter a Number till which you want to count :");

}

void loop() {
  if(Serial.available()>0)
  {
   turn_off();
   int n=Serial.parseInt();
   if(n<256){
    for(int i=0;i<=n;i++){
       String bin_code = get_bin(i);
       display(bin_code);
       Serial.print(i);
       Serial.print("\t");
       Serial.println(bin_code);        // Binary String is in reverse
       delay(1000);
    } 
   }
  }
}

void display(String s){
  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='0')
      digitalWrite(2+i,LOW);          // Modify Logic to digitalWrite(9-i,LOW); if Binary String is correct fashion.
    else
      digitalWrite(2+i,HIGH);
  }
}

void turn_off(){
  for(int i=2;i<=9;i++)
    digitalWrite(i,LOW);
}

// String s  = String (n,BIN);
String get_bin(int n){
   String s="";
   while(n!=0){
     int a = n&1;
     n=n/2;
     s+=(char)(a+48);
   }
   while(s.length()!=8){
    s = s + '0';
   }
  return s;
}
