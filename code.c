 volatile char *dirf,*dirk;
 volatile char *outf,*outk;
  
  //char a[] = {0xFF,0xFF,0x00,0xF6,0xF6,0xF0,0xFF,0xFF};
  char a[] = {0xFF,0x83,0xED,0xEE,0xEE,0xED,0x83,0xFF};
  char b[] = {0xFF,0x80,0xB7,0xB7,0xB7,0xB7,0x87,0xFF};
  char c[] = {0xFF,0x81,0xBD,0xBD,0xBD,0xBD,0xBD,0xFF};
  char d[] = {0xFF,0x87,0xB7,0xB7,0xB7,0xB7,0x80,0xFF};
  char e[] = {0xFF,0x80,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6};
  char f[] = {0xFF,0x80,0xF6,0xF6,0xF6,0xF6,0xF6,0xFF};
  char g[] = {0xFF,0xE0,0xEE,0xEE,0xEE,0xE6,0x86,0xFF};
  char h[] = {0xFF,0x80,0xF7,0xF7,0xF7,0xF7,0x80,0xFF};
  char i[] = {0xFF,0xBE,0xBE,0xBE,0x80,0xBE,0xBE,0xBE};
  char j[] = {0xFF,0x86,0xBE,0xBE,0x80,0xFE,0xFE,0xFE};
  char k[] = {0xFF,0x80,0xEB,0xFF,0xDD,0xFF,0xBE,0xFF};
  char l[] = {0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0xFF};
  char m[] = {0xFF,0x80,0xFD,0xFB,0xF7,0xFB,0xFD,0x80};
  char n[] = {0xFF,0x80,0xFD,0xFB,0xF7,0xEF,0xDF,0x80};
  char o[] = {0xFF,0x80,0xBE,0xBE,0xBE,0xBE,0x80,0xFF};
  char p[] = {0xFF,0x80,0xF6,0xF6,0xF6,0xF6,0xF0,0xFF};
  char q[] = {0xFF,0x80,0xBE,0xB6,0xAE,0x9E,0x80,0x8F};
  char r[] = {0xFF,0x80,0xE6,0xD6,0xB6,0xF6,0xF0,0xFF};
  char s[] = {0xFF,0xB0,0xB6,0xB6,0xB6,0xB6,0x86,0xFF};
  char t[] = {0xFF,0xFE,0xFE,0xFE,0x00,0xFE,0xFE,0xFE};
  char u[] = {0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0x80,0xFF};
  char v[] = {0xFF,0xF0,0xEF,0xDF,0xBF,0xDF,0xEF,0xF0};
  char w[] = {0xFF,0x80,0xDF,0xEF,0xF7,0xEF,0xDF,0x80};
  char x[] = {0xFF,0xBE,0xDD,0xEB,0xF7,0xEB,0xDD,0xBE};
  char y[] = {0xFF,0xFE,0xFD,0xFB,0x87,0xFB,0xFD,0xFE};
  char z[] = {0xFF,0xBE,0x9E,0xAE,0xB6,0xBA,0xBC,0xBE}; 
  int display(volatile char x[]){
    *outk = 0xFF;
    for ( int i =0 ;i <8;i++){
      *outf = (1<<i);
      *outk = x[i];
      *outk = 0xFF;
    }
    return 0;
}
int main () {
  // put your setup code here, to run once:
  dirf = 0x30;dirk = 0x107;
  *dirf = 0xFF;*dirk =0xFF;
  outf=0x31;outk = 0x108;
  char *alphabet[] = {a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z};
  char *pavan[] = {p,a,v,a,n};
  while(1){
    // for (int i = 0; i < 26; i++) {
    //     for (int j = 0; j < 10000; j++) { 
    //         display(alphabet[i]);
    //     }
    //     for(volatile long j=0;j<500000;j++) ;
    // }
      for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10000; j++) { 
            display(pavan[i]);
        }
        for(volatile long j=0;j<500000;j++) ;
    }
  }
  return 0;
}
