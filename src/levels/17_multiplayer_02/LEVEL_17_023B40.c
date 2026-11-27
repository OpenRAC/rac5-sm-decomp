/* LEVEL_17:0x023B40 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_00194FD8;
extern unsigned char D_00194FD9;
extern unsigned char D_00194FDA;
extern unsigned char D_00194FDB;
extern unsigned char D_00194FDC;
extern unsigned char D_00194FDD;
extern unsigned char D_00194FED;
extern int D_00194FF4;
extern int D_00195070;
extern int D_00195074;
extern int D_00195078;
extern char D_001CFE60[];

void func_023B40(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_00194FD8 == 0 && D_00194FD9 == 0) {
        if (name != D_001CFE60) {
            strncpy(D_001CFE60, name, 0x5F);
            D_001CFE60[0x5F] = 0;
        }
        D_00194FDB = 0;
        D_00194FDA = a;
        D_00195070 = c;
        D_00195078 = e;
        D_00195074 = d;
        D_00194FF4 = f;
        D_00194FED = 0;
        D_00194FDC = b;
        D_00194FDD = g;
        D_00194FD8 = 1;
    }
}
