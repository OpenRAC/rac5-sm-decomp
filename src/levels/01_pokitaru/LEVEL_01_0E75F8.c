/* LEVEL_01:0x0E75F8 -- nudges a point up by a half unit, looks up a record, forwards it. */
struct Tab { char p0[0xC]; char *f0C; };
extern struct Tab *D_00206D9C;
extern int func_111600(float *a, float *b);
extern void func_0E7690(float *a, char *b, void *c);

void func_0E75F8(float *v, void *c)
{
    float tmp[3];
    float out[1];
    int idx;

    tmp[0] = v[0];
    tmp[1] = v[1] + 0.5f;
    tmp[2] = v[2];
    idx = func_111600(tmp, out);
    if (idx != -1) {
        tmp[1] = tmp[1] - out[0];
        func_0E7690(tmp, D_00206D9C->f0C + idx * 0x4C + 8, c);
    }
}
