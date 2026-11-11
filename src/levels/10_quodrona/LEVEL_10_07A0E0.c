/* LEVEL_10:0x07A0E0 -- placement copy of LEVEL_01_079A40.c: when the current pointer differs, clears flag bits on each listed object and resets the list. */

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

extern Ent01_079A40 *D_001FF11C;
extern Ent01_079A40 *D_001FCFB8;
extern Cnt01_079A40 D_001FF114;
extern TblE01_079A40 D_00243830[];

void func_07A0E0(void) {
    unsigned int i;

    if (D_001FF11C == D_001FCFB8) {
        return;
    }
    for (i = 0; i < D_001FF114.n; i++) {
        D_00243830[i].p->w_64 = D_00243830[i].p->w_64 & -0x81;
        D_00243830[i].p->w_64 = D_00243830[i].p->w_64 & -0x41;
        D_00243830[i].p->w_68 = 0xFF000000;
    }
    D_001FF114.n = 0;
    D_001FF11C = D_001FCFB8;
}
