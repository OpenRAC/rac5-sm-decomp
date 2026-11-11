/* LEVEL_01:0x031F80 -- copies four floats into a local array, runs two helpers on it, and returns the inverted result of the second. */
struct P031F80 {
    char pad0[0x2C];
    unsigned char b2C;
};

extern int func_032AD0(void *a, float *b, int c, int d);
extern int func_033008(void *a, float *b, int c);
extern void func_032020(void *a, float *b, int c, int d);

int func_031F80(struct P031F80 *p, float *v, int x, int a3)
{
    float loc[4];
    int r;
    int s;

    loc[0] = v[0];
    loc[1] = v[1];
    loc[2] = v[2];
    loc[3] = v[3];
    r = func_032AD0(p, loc, p->b2C, a3);
    s = func_033008(p, loc, r);
    func_032020(p, loc, r, x);
    return (s ^ 1) & 0xFF;
}
