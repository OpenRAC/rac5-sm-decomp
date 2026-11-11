/* LEVEL_05:0x077AF8 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
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
extern int D_001E54A0;
extern int D_001E3338;
extern unsigned int D_001E5498;
extern Ent D_00226370[];

void func_077AF8(void)
{
    unsigned int i;

    if (D_001E54A0 != D_001E3338) {
        for (i = 0; i < D_001E5498; i++) {
            if (D_00226370[i].w14 == 3 || D_00226370[i].w0 == 0 || (D_00226370[i].w0->w64 & 0xF) != 1) {
                if (i == D_001E5498 - 1) {
                    D_001E5498 = i;
                } else {
                    D_001E5498 = D_001E5498 - 1;
                    D_00226370[i].w0 = D_00226370[D_001E5498].w0;
                    D_00226370[i].w8 = D_00226370[D_001E5498].w8;
                    D_00226370[i].wC = D_00226370[D_001E5498].wC;
                    D_00226370[i].w10 = D_00226370[D_001E5498].w10;
                    D_00226370[i].w14 = D_00226370[D_001E5498].w14;
                }
            }
        }
    }
}
