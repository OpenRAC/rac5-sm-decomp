/* LEVEL_17:0x06B070 -- placement copy of LEVEL_01_079A40.c: when the current pointer differs, clears flag bits on each listed object and resets the list. */

typedef struct Ent01_079A40 {
    unsigned char pad_00[0x64];
    int w_64;
    int w_68;
} Ent01_079A40;

typedef struct TblE01_079A40 {
    Ent01_079A40 *p;
    unsigned int pad_04;
} TblE01_079A40;

typedef struct Cnt01_079A40 {
    unsigned int n;
} Cnt01_079A40;

extern Ent01_079A40 *D_0019716C;
extern Ent01_079A40 *D_001950E4;
extern Cnt01_079A40 D_00197164;
extern TblE01_079A40 D_001DDE00[];

void func_06B070(void) {
    unsigned int i;

    if (D_0019716C == D_001950E4) {
        return;
    }
    for (i = 0; i < D_00197164.n; i++) {
        D_001DDE00[i].p->w_64 = D_001DDE00[i].p->w_64 & -0x81;
        D_001DDE00[i].p->w_64 = D_001DDE00[i].p->w_64 & -0x41;
        D_001DDE00[i].p->w_68 = 0xFF000000;
    }
    D_00197164.n = 0;
    D_0019716C = D_001950E4;
}
