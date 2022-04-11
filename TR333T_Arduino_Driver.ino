
 //These are the codes for various chars: (A= HIGH B=LOW, and the digit order would 
 //be like this- in BBBABBBB, the high digit would be digit 3, the digit next to that would be digit
 //4 and so on) Enter in A or B into each digitalWrite command after the pin number, and follow
 //the order.
 //
// CODES:
 //1= AAAAAABB
 //2= BBABBBAA
 //3= BBBBBBAA
 //4= BBBBABBA
 //5= ABBBBBBA
 //6= ABBBBBBB
 //7= BABBABAA
 //8= BBBBBBBB
 //9= BBBBABBA
 //B= BABBBBBB
 //A= BBBAABBB
 //C= AAAABBBB
 //E= ABAABBBB
 //F= ABAAABBB
 //G= AABABBBB
 //H= BBBAAABB
 //I= AAAAAABB
 //J= BABABAAB
 //L= BAAABABA
 //N= BABAABBB
 //O= Same as 0
 //P= BBAAABBB
 //S= Same as 5
 //U= BABABABB
 //Y= Same as 4

int A = (HIGH);
int B = (LOW);
void setup()
{
  pinMode(2 ,OUTPUT); 
   pinMode(3 ,OUTPUT);
    pinMode(4 ,OUTPUT);
     pinMode(5 ,OUTPUT);
      pinMode(6 ,OUTPUT);
       pinMode(7 ,OUTPUT);
        pinMode(8 ,OUTPUT);
         pinMode(9 ,OUTPUT);
         
       
  
}
 
void loop()
{
  // For you to customize!
  
  digitalWrite(2, B);
   digitalWrite(3, B);
    digitalWrite(4, B);
     digitalWrite(5, A);
      digitalWrite(6, A);
       digitalWrite(7, A);
        digitalWrite(8, B);
         digitalWrite(9, B);
  
  
}
