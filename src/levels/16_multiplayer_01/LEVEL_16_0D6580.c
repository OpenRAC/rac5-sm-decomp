/* LEVEL_16:0x0D6580 -- placement copy of LEVEL_01_0E75F8.c: nudges a point up by a half unit, looks up a record, forwards it. */
struct Tab { char p0[0xC]; char *f0C; };
extern struct Tab *D_001B48AC;
extern int func_0F2218(float *a, float *b);
extern void func_0D6618(float *a, char *b, void *c);

void func_0D6580(float *v, void *c)
{
    float tmp[3];
    float out[1];
    int idx;

    tmp[0] = v[0];
    tmp[1] = v[1] + 0.5f;
    tmp[2] = v[2];
    idx = func_0F2218(tmp, out);
    if (idx != -1) {
        tmp[1] = tmp[1] - out[0];
        func_0D6618(tmp, D_001B48AC->f0C + idx * 0x4C + 8, c);
    }
}
