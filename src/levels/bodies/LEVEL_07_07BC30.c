/* LEVEL_07:0x07BC30 -- placement copy of LEVEL_01_079A40.c: when the current pointer differs, clears flag bits on each listed object and resets the list. */

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

extern Ent01_079A40 *D_0020A41C;
extern Ent01_079A40 *D_002082B8;
extern Cnt01_079A40 D_0020A414;
extern TblE01_079A40 D_0024FD30[];

void func_07BC30(void) {
    unsigned int i;

    if (D_0020A41C == D_002082B8) {
        return;
    }
    for (i = 0; i < D_0020A414.n; i++) {
        D_0024FD30[i].p->w_64 = D_0024FD30[i].p->w_64 & -0x81;
        D_0024FD30[i].p->w_64 = D_0024FD30[i].p->w_64 & -0x41;
        D_0024FD30[i].p->w_68 = 0xFF000000;
    }
    D_0020A414.n = 0;
    D_0020A41C = D_002082B8;
}
