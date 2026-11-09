/* LEVEL_08:0x032078 -- placement copy of LEVEL_01_031F80.c: copies four floats into a local array, runs two helpers on it, and returns the inverted result of the second. */
struct P031F80 {
    char pad0[0x2C];
    unsigned char b2C;
};

extern int func_032BD0(void *a, float *b, int c, int d);
extern int func_033108(void *a, float *b, int c);
extern void func_032118(void *a, float *b, int c, int d);

int func_032078(struct P031F80 *p, float *v, int x, int a3)
{
    float loc[4];
    int r;
    int s;

    loc[0] = v[0];
    loc[1] = v[1];
    loc[2] = v[2];
    loc[3] = v[3];
    r = func_032BD0(p, loc, p->b2C, a3);
    s = func_033108(p, loc, r);
    func_032118(p, loc, r, x);
    return (s ^ 1) & 0xFF;
}
