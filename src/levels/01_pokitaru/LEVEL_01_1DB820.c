/* LEVEL_01:0x1DB820 -- scales a packed word from a record into a float and passes it with three constants to a helper. */
extern int D_00209668;
extern char D_00217E68[];
extern void func_0DD328(float f12, float pitch, int a0, int a1, int a2, void *pos, int t0, float f14, float f15, float f16);

void func_1DB820(int *p)
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
    func_0DD328(0.20000000298023224f, 0.10000000894069672f, D_00209668, p[1], p[0], D_00217E68, 0, 6.000119209289551f, fv, 0.15000000596046448f);
}
