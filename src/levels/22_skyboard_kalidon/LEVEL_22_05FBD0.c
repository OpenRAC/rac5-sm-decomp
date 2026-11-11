/* LEVEL_22:0x05FBD0 -- placement copy of LEVEL_01_069FC8.c: per-frame update of a turning object: integrates a vector, fires callbacks, advances an angle. */
typedef struct G {
    unsigned char pad0[0x60];
    unsigned char b60[4];
    unsigned char pad1[0x90];
    int wF4;
    unsigned char pad2[0x4B0];
    int w5A8;
    unsigned char pad3[0x3B4];
    unsigned long long q960;
    unsigned char pad4[0x470];
    float v1[3];
    unsigned char pad5[0x14];
    float v2[3];
    unsigned char pad6[0x4];
    float v3[3];
    unsigned char pad7[0xD8];
    float v4[3];
    unsigned char pad8[0x4];
    float tEFC;
    unsigned char pad9[0x10];
    unsigned long long flags;
    unsigned char pad10[0x14];
    float fF2C;
    unsigned char pad11[0xC];
    float fF3C;
    unsigned char pad12[0x14];
    float fF54;
    float fF58;
    unsigned char pad13[0x40];
    float fF9C;
    float fFA0;
} G;

extern char D_001752D8[];
extern char D_0016C2F0[];
extern void func_05E8F8(G *g, float *v, float a, float b);
extern void func_05F0A8(G *g, int b, char *tab);
extern void func_060078(void);
extern void func_08B3C0(int a, void (*fn)(void), G *g, int b);
extern void func_05F028(G *g, int a);

void func_05FBD0(G *g, int b)
{
    float t;
    float *pa;
    float *pb;
    float *pc;
    float c;

    func_05E8F8(g, g->v1, g->fF2C, g->fF3C);
    t = g->tEFC;
    pa = g->v2;
    pb = g->v4;
    pc = g->v3;
    pc[0] = pb[0] + pa[0] * t;
    pc[1] = pb[1] + pa[1] * t;
    pc[2] = pb[2] + pa[2] * t;
    if (((unsigned char)(g->flags >> 1)) & 1) {
        if (b) {
            func_05F0A8(g, b, D_001752D8);
            if (g->w5A8) {
                func_05F0A8(g, g->w5A8, D_0016C2F0);
            }
            if (!(g->q960 & 0x1000000000000000ULL)) {
                func_08B3C0(0x1A, func_060078, g, 0);
            }
        }
    }
    c = g->fFA0;
    g->fF58 = g->fF58 - 0.055555556f;
    g->fF9C = c * c * c;
    g->fFA0 = c - 0.041666668f;
    if (g->fF58 > 0.0f) {
        g->fF54 = -3.1415927f;
    } else {
        g->fF54 = g->fF54 + 0.10471976548433304f;
        if (g->fF54 > 3.1415927f) {
            g->fF54 = g->fF54 - 6.2831855f;
        }
    }
    func_05F028(g, (((unsigned char)(g->flags >> 4)) & 1) ^ 1);
}
