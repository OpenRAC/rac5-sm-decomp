/* LEVEL_16:0x02F0D0 -- placement copy of LEVEL_02_031B88.c: fetches a vector and forwards the caller's arguments plus it to func_02EF00. */
typedef struct { float x, y, z, w; } Vec4;
extern void func_018710(Vec4 *);
extern int func_02EF00(void *, void *, int, unsigned char, float, float, int, Vec4 *);

int func_02F0D0(void *a, void *b, int c, int d, float f, float g, int e)
{
    Vec4 v;
    unsigned char k = d;

    func_018710(&v);
    return func_02EF00(a, b, c, k, f, g, e, &v);
}
