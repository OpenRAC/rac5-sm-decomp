/* LEVEL_07:0x1E9FD8 -- placement copy of LEVEL_01_1DB820.c: scales a packed word from a record into a float and passes it with three constants to a helper. */
extern int D_0021E340;
extern char D_0022CB68[];
extern void func_0DF118(float f12, float pitch, int a0, int a1, int a2, void *pos, int t0, float f14, float f15, float f16);

void func_1E9FD8(int *p)
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
    func_0DF118(0.20000000298023224f, 0.10000000894069672f, D_0021E340, p[1], p[0], D_0022CB68, 0, 6.000119209289551f, fv, 0.15000000596046448f);
}
