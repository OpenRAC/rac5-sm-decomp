/* LEVEL_10:0x031470 -- placement copy of LEVEL_16_02F0D0.c: placement copy of LEVEL_02_031B88.c: fetches a vector and forwards the caller's arguments plus it to func_0312C8. */
typedef struct { float x, y, z, w; } Vec4;
extern void func_019938(Vec4 *);
extern int func_0312C8(void *, void *, int, unsigned char, float, float, int, Vec4 *);

int func_031470(void *a, void *b, int c, int d, float f, float g, int e)
{
    Vec4 v;
    unsigned char k = d;

    func_019938(&v);
    return func_0312C8(a, b, c, k, f, g, e, &v);
}
