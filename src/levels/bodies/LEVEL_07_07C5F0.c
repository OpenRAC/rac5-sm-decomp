/* LEVEL_07:0x07C5F0 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
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
extern int D_0020A420;
extern int D_002082B8;
extern unsigned int D_0020A418;
extern Ent D_0024FDB0[];

void func_07C5F0(void)
{
    unsigned int i;

    if (D_0020A420 != D_002082B8) {
        for (i = 0; i < D_0020A418; i++) {
            if (D_0024FDB0[i].w14 == 3 || D_0024FDB0[i].w0 == 0 || (D_0024FDB0[i].w0->w64 & 0xF) != 1) {
                if (i == D_0020A418 - 1) {
                    D_0020A418 = i;
                } else {
                    D_0020A418 = D_0020A418 - 1;
                    D_0024FDB0[i].w0 = D_0024FDB0[D_0020A418].w0;
                    D_0024FDB0[i].w8 = D_0024FDB0[D_0020A418].w8;
                    D_0024FDB0[i].wC = D_0024FDB0[D_0020A418].wC;
                    D_0024FDB0[i].w10 = D_0024FDB0[D_0020A418].w10;
                    D_0024FDB0[i].w14 = D_0024FDB0[D_0020A418].w14;
                }
            }
        }
    }
}
