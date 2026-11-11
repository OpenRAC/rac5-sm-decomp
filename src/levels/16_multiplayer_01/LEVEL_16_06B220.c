/* LEVEL_16:0x06B220 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
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
extern int D_001A3B70;
extern int D_001A1AE4;
extern unsigned int D_001A3B68;
extern Ent D_001ECB80[];

void func_06B220(void)
{
    unsigned int i;

    if (D_001A3B70 != D_001A1AE4) {
        for (i = 0; i < D_001A3B68; i++) {
            if (D_001ECB80[i].w14 == 3 || D_001ECB80[i].w0 == 0 || (D_001ECB80[i].w0->w64 & 0xF) != 1) {
                if (i == D_001A3B68 - 1) {
                    D_001A3B68 = i;
                } else {
                    D_001A3B68 = D_001A3B68 - 1;
                    D_001ECB80[i].w0 = D_001ECB80[D_001A3B68].w0;
                    D_001ECB80[i].w8 = D_001ECB80[D_001A3B68].w8;
                    D_001ECB80[i].wC = D_001ECB80[D_001A3B68].wC;
                    D_001ECB80[i].w10 = D_001ECB80[D_001A3B68].w10;
                    D_001ECB80[i].w14 = D_001ECB80[D_001A3B68].w14;
                }
            }
        }
    }
}
