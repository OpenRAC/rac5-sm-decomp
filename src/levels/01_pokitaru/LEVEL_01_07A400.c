/* LEVEL_01:0x07A400 -- drops stale table entries by moving the last entry into their slot. */
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
extern int D_001F6120;
extern int D_001F3FB8;
extern unsigned int D_001F6118;
extern Ent D_0023A4B0[];

void func_07A400(void)
{
    unsigned int i;

    if (D_001F6120 != D_001F3FB8) {
        for (i = 0; i < D_001F6118; i++) {
            if (D_0023A4B0[i].w14 == 3 || D_0023A4B0[i].w0 == 0 || (D_0023A4B0[i].w0->w64 & 0xF) != 1) {
                if (i == D_001F6118 - 1) {
                    D_001F6118 = i;
                } else {
                    D_001F6118 = D_001F6118 - 1;
                    D_0023A4B0[i].w0 = D_0023A4B0[D_001F6118].w0;
                    D_0023A4B0[i].w8 = D_0023A4B0[D_001F6118].w8;
                    D_0023A4B0[i].wC = D_0023A4B0[D_001F6118].wC;
                    D_0023A4B0[i].w10 = D_0023A4B0[D_001F6118].w10;
                    D_0023A4B0[i].w14 = D_0023A4B0[D_001F6118].w14;
                }
            }
        }
    }
}
