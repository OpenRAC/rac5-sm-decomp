/* LEVEL_10:0x07AAA0 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
typedef struct {
    char pad0[0x64];
    unsigned int w64;
} Owner;
typedef struct {
    Owner *w0;
    int w4;
    int w8;
    float wC;
    int w10;
    int w14;
} Ent;
extern int D_001FF120;
extern int D_001FCFB8;
extern unsigned int D_001FF118;
extern Ent D_002438B0[];

void func_07AAA0(void)
{
    unsigned int i;

    if (D_001FF120 != D_001FCFB8) {
        for (i = 0; i < D_001FF118; i++) {
            if (D_002438B0[i].w14 == 3 || D_002438B0[i].w0 == 0 || (D_002438B0[i].w0->w64 & 0xF) != 1) {
                if (i == D_001FF118 - 1) {
                    D_001FF118 = i;
                } else {
                    D_001FF118 = D_001FF118 - 1;
                    D_002438B0[i].w0 = D_002438B0[D_001FF118].w0;
                    D_002438B0[i].w8 = D_002438B0[D_001FF118].w8;
                    D_002438B0[i].wC = D_002438B0[D_001FF118].wC;
                    D_002438B0[i].w10 = D_002438B0[D_001FF118].w10;
                    D_002438B0[i].w14 = D_002438B0[D_001FF118].w14;
                }
            }
        }
    }
}
