/* LEVEL_02:0x15DEC8 -- nudges a shared accumulator by the object's velocity and checks a threshold. */

extern unsigned char D_0024C650[];
extern void func_068A00(unsigned char *g);
extern void func_15D640(unsigned char *o, int a1);

void func_15DEC8(unsigned char *o)
{
    unsigned char *g = D_0024C650;
    float *pa;
    float *pv;

    pa = (float *)(g + 0xAA4);
    pv = (float *)(o + 0x20);
    *(float *)(g + 0xAA4) = *(float *)(g + 0xAA4) + pv[0] * 0.05000000447034836f;
    pa[1] = pa[1] + pv[1] * 0.05000000447034836f;
    pa[2] = pa[2] + pv[2] * 0.05000000447034836f;
    func_068A00(g);
    if (*(float *)(g + 0x34) - 0.10000000149011612f < *(float *)(o + 0x34)) {
        func_15D640(o, 0);
    }
}
