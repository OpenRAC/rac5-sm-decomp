/* LEVEL_19:0x18D070 -- placement copy of LEVEL_01_1DB820.c: scales a packed word from a record into a float and passes it with three constants to a helper. */
extern int D_001BF8E8;
extern char D_001CDF28[];
extern void func_0CC240(float f12, float pitch, int a0, int a1, int a2, void *pos, int t0, float f14, float f15, float f16);

void func_18D070(int *p)
{
    unsigned int w;
    int hi;
    float fv;

    w = (unsigned int)p[1];
    hi = (int)(w >> 24);
    if (hi >= 0) {
        fv = (float)hi;
    } else {
        fv = (float)((hi & 1) | (int)(w >> 25));
        fv = fv + fv;
    }
    fv = fv / 6.000119209289551f;
    func_0CC240(0.20000000298023224f, 0.10000000894069672f, D_001BF8E8, p[1], p[0], D_001CDF28, 0, 6.000119209289551f, fv, 0.15000000596046448f);
}
