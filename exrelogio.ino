int entrada1[4] = { 5, 4, 3, 2 }; //{ A3, A2, A1, A0 }
int entrada2[4] = { 9, 8, 7, 6 };
int entrada3[4] = { 13, 12, 11, 10 };
int entrada4[4] = { 17, 16, 15, 14 };

int codigo[10][4] = {
  { 0, 0, 0, 0 },
  { 0, 0, 0, 1 },
  { 0, 0, 1, 0 },
  { 0, 0, 1, 1 },
  { 0, 1, 0, 0 },
  { 0, 1, 0, 1 },
  { 0, 1, 1, 0 },
  { 0, 1, 1, 1 },
  { 1, 0, 0, 0 },
  { 1, 0, 0, 1 }
};

void setup()
{
    for (int i = 2; i <= 18; i++) {
        pinMode(i, OUTPUT);
    }
}

void loop()
{
    digitalWrite(18, HIGH);

    for (int nro4 = 0; nro4 <= 2; nro4++) {
        for (int D = 0; D <= 3; D++) {
            digitalWrite(entrada1[D], codigo[nro4][D]);
        }
        for (int nro3 = 0; nro3 <= 9; nro3++) {
           
            if(nro4 == 2 && nro3 == 4){
                break;
            }
          
            for (int C = 0; C <= 3; C++) {
                digitalWrite(entrada2[C], codigo[nro3][C]);
            }
            for (int nro2 = 0; nro2 <= 5; nro2++) {
                for (int B = 0; B <= 3; B++) {
                    digitalWrite(entrada3[B], codigo[nro2][B]);
                }
                for (int nro = 0; nro <= 9; nro++) {
                    for (int A = 0; A <= 3; A++) {
                        digitalWrite(entrada4[A], codigo[nro][A]);
                    }
                    delay(1000);
                }
            }
        }
    }
}