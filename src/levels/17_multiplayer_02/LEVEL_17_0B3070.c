/* LEVEL_17:0x0B3070 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_00194FED;
extern int D_00195074;
extern int D_00194FE0;
extern int D_00194FF4;
extern int D_00195070;
extern int D_00195078;
extern int D_00194FE4;
extern unsigned char D_00194FDC;
extern unsigned char D_00194FDA;
extern unsigned char D_00194FDD;
extern int D_001A1A28;
extern int D_001A1A2C;
extern int D_001A1A30;
extern unsigned char D_001A1A34;
extern unsigned char D_001A1A35;
extern int D_001A1A38;
extern int D_001A1A3C;
extern int D_001A1A40;
extern unsigned char D_001A1A44;
extern char D_00268690[];
extern char D_001CFE60[];
extern char *strcpy(char *d, const char *s);

void func_0B3070(void)
{
    if (D_00194FED != 0)
        D_001A1A28 = 0;
    else
        D_001A1A28 = D_00195074;
    D_001A1A2C = D_00194FE0;
    strcpy(D_00268690, D_001CFE60);
    D_001A1A34 = D_00194FDC;
    D_001A1A35 = D_00194FDA;
    D_001A1A38 = D_00195070;
    D_001A1A3C = D_00195078;
    D_001A1A40 = D_00194FF4;
    D_001A1A44 = D_00194FDD;
    D_001A1A30 = D_00194FE4;
}
