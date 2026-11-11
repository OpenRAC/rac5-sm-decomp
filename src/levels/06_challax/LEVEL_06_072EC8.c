/* LEVEL_06:0x072EC8 -- placement copy of LEVEL_01_079A40.c: when the current pointer differs, clears flag bits on each listed object and resets the list. */

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

extern Ent01_079A40 *D_001E501C;
extern Ent01_079A40 *D_001E2EB8;
extern Cnt01_079A40 D_001E5014;
extern TblE01_079A40 D_002271B0[];

void func_072EC8(void) {
    unsigned int i;

    if (D_001E501C == D_001E2EB8) {
        return;
    }
    for (i = 0; i < D_001E5014.n; i++) {
        D_002271B0[i].p->w_64 = D_002271B0[i].p->w_64 & -0x81;
        D_002271B0[i].p->w_64 = D_002271B0[i].p->w_64 & -0x41;
        D_002271B0[i].p->w_68 = 0xFF000000;
    }
    D_001E5014.n = 0;
    D_001E501C = D_001E2EB8;
}
