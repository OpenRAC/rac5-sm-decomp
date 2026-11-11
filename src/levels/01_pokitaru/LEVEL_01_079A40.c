/* LEVEL_01:0x079A40 -- when the current pointer differs, clears flag bits on each listed object and resets the list. */

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

extern Ent01_079A40 *D_001F611C;
extern Ent01_079A40 *D_001F3FB8;
extern Cnt01_079A40 D_001F6114;
extern TblE01_079A40 D_0023A430[];

void func_079A40(void) {
    unsigned int i;

    if (D_001F611C == D_001F3FB8) {
        return;
    }
    for (i = 0; i < D_001F6114.n; i++) {
        D_0023A430[i].p->w_64 = D_0023A430[i].p->w_64 & -0x81;
        D_0023A430[i].p->w_64 = D_0023A430[i].p->w_64 & -0x41;
        D_0023A430[i].p->w_68 = 0xFF000000;
    }
    D_001F6114.n = 0;
    D_001F611C = D_001F3FB8;
}
