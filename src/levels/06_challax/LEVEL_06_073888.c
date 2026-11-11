/* LEVEL_06:0x073888 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
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
extern int D_001E5020;
extern int D_001E2EB8;
extern unsigned int D_001E5018;
extern Ent D_00227230[];

void func_073888(void)
{
    unsigned int i;

    if (D_001E5020 != D_001E2EB8) {
        for (i = 0; i < D_001E5018; i++) {
            if (D_00227230[i].w14 == 3 || D_00227230[i].w0 == 0 || (D_00227230[i].w0->w64 & 0xF) != 1) {
                if (i == D_001E5018 - 1) {
                    D_001E5018 = i;
                } else {
                    D_001E5018 = D_001E5018 - 1;
                    D_00227230[i].w0 = D_00227230[D_001E5018].w0;
                    D_00227230[i].w8 = D_00227230[D_001E5018].w8;
                    D_00227230[i].wC = D_00227230[D_001E5018].wC;
                    D_00227230[i].w10 = D_00227230[D_001E5018].w10;
                    D_00227230[i].w14 = D_00227230[D_001E5018].w14;
                }
            }
        }
    }
}
