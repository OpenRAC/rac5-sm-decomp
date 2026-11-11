/* LEVEL_08:0x0812C8 -- placement copy of LEVEL_01_079A40.c: when the current pointer differs, clears flag bits on each listed object and resets the list. */

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

extern Ent01_079A40 *D_0023EFDC;
extern Ent01_079A40 *D_0023CB38;
extern Cnt01_079A40 D_0023EFD4;
extern TblE01_079A40 D_002896C0[];

void func_0812C8(void) {
    unsigned int i;

    if (D_0023EFDC == D_0023CB38) {
        return;
    }
    for (i = 0; i < D_0023EFD4.n; i++) {
        D_002896C0[i].p->w_64 = D_002896C0[i].p->w_64 & -0x81;
        D_002896C0[i].p->w_64 = D_002896C0[i].p->w_64 & -0x41;
        D_002896C0[i].p->w_68 = 0xFF000000;
    }
    D_0023EFD4.n = 0;
    D_0023EFDC = D_0023CB38;
}
