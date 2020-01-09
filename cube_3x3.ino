void setup() {
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

//wylaczenie kostki
void cube_off(){
  for (int x=2; x<11; x++)
  {
    digitalWrite(x, LOW);
  }
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
}

//zapalenie calej kostki
void cube_on(){
  for (int x=2; x<11; x++)
  {
    digitalWrite(x, HIGH);
  }
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}

//wlaczenie pietra kostki
void cube_level_on(int l){
  digitalWrite(l+10, LOW);
  for (int x=2; x<11; x++)
  {
    digitalWrite(x, HIGH);
  }
}

//zapalenie piksela kostki
void cube_pixel_on(char level, char nr){
  digitalWrite(level+10, LOW);
  digitalWrite(nr+1, HIGH);
}

void loop() {
  
  cube_off();
 
  delay(500);
  cube_on();
  delay(500);
  cube_off();
  delay(500);

  for(int z=1;z<4;z++){
    cube_level_on(z);
    delay(500);
    cube_off();
  }

  cube_pixel_on(2,5);
  delay(500);
  cube_off();


 //obrot linii
  for(int x=0;x<30;x++){
    cube_pixel_on(3,1);
    delay(5);
    cube_off();
    cube_pixel_on(2,5);
    delay(5);
    cube_off();
    cube_pixel_on(1,9);
    delay(5);
    cube_off();
  }

  for(int x=0;x<30;x++){
    cube_pixel_on(3,2);
    delay(5);
    cube_off();
    cube_pixel_on(2,5);
    delay(5);
    cube_off();
    cube_pixel_on(1,8);
    delay(5);
    cube_off();
  }

  for(int x=0;x<30;x++){
    cube_pixel_on(3,3);
    delay(5);
    cube_off();
    cube_pixel_on(2,5);
    delay(5);
    cube_off();
    cube_pixel_on(1,7);
    delay(5);
    cube_off();
  }

  for(int x=0;x<30;x++){
    cube_pixel_on(3,6);
    delay(5);
    cube_off();
    cube_pixel_on(2,5);
    delay(5);
    cube_off();
    cube_pixel_on(1,4);
    delay(5);
    cube_off();
  }

  for(int x=0;x<30;x++){
    cube_pixel_on(3,9);
    delay(5);
    cube_off();
    cube_pixel_on(2,5);
    delay(5);
    cube_off();
    cube_pixel_on(1,1);
    delay(5);
    cube_off();
  }

  for(int x=0;x<30;x++){
    cube_pixel_on(3,8);
    delay(5);
    cube_off();
    cube_pixel_on(2,5);
    delay(5);
    cube_off();
    cube_pixel_on(1,2);
    delay(5);
    cube_off();
  }

  for(int x=0;x<30;x++){
    cube_pixel_on(3,7);
    delay(5);
    cube_off();
    cube_pixel_on(2,5);
    delay(5);
    cube_off();
    cube_pixel_on(1,3);
    delay(5);
    cube_off();
  }

  for(int x=0;x<30;x++){
    cube_pixel_on(3,4);
    delay(5);
    cube_off();
    cube_pixel_on(2,5);
    delay(5);
    cube_off();
    cube_pixel_on(1,6);
    delay(5);
    cube_off();
  }
 

 cube_off();
 delay(500);


cube_pixel_on(2,5);
  delay(500);
  cube_off();


  //krzyzyk
   cube_off();
   for(int x=0;x<60;x++){
    cube_pixel_on(1,5);
    delay(5);
    cube_off();
    cube_pixel_on(2,2);
    cube_pixel_on(2,5);
    cube_pixel_on(2,8);
    delay(5);
    cube_off();
    cube_pixel_on(3,5);
    delay(5);
    cube_off();
  }
  
 //kwadrat

   for(int x=0;x<60;x++){
    cube_pixel_on(1,1);
    cube_pixel_on(1,2);
    cube_pixel_on(1,3);
    cube_pixel_on(1,4);
    cube_pixel_on(1,6);
    cube_pixel_on(1,7);
    cube_pixel_on(1,8);
    cube_pixel_on(1,9);
    delay(5);
    cube_off();
    cube_pixel_on(2,1);
    cube_pixel_on(2,3);
    cube_pixel_on(2,7);
    cube_pixel_on(2,9);
    delay(5);
    cube_off();
    cube_pixel_on(3,1);
    cube_pixel_on(3,2);
    cube_pixel_on(3,3);
    cube_pixel_on(3,4);
    cube_pixel_on(3,6);
    cube_pixel_on(3,7);
    cube_pixel_on(3,8);
    cube_pixel_on(3,9);
    delay(5);
    cube_off();
  }


  
}
