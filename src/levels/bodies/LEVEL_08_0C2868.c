/* LEVEL_08:0x0C2868 -- placement copy of LEVEL_01_0B7978.c: grows a widget rectangle by the requested factors, draws its dark backdrop and then the filled bar of the given width scale. */
extern void func_0B9040(float f, int a, int *r);
extern int func_0B2FD8(int *r);
extern int func_0B3090(int *r);
extern int func_233E00(float f);
extern void func_0B6DE8(short a, short b, short c, short d, unsigned int col);
extern void func_0B6E78(short x, short y, short z, short w, float a, float b, float c, int p, int q, int r, int s);

void func_0C2868(float sw, float sx, float sy, int unused, int a, int p, int q)
{
    int r[4];
    int d;
    int e;

    func_0B9040(0.0f, a, r);
    if (sx != 0.0f || sy != 0.0f) {
        d = func_233E00((float)func_0B2FD8(r) * sx - (float)func_0B2FD8(r));
        r[0] -= d;
        r[2] += d;
        e = func_233E00((float)func_0B3090(r) * sy - (float)func_0B3090(r));
        r[1] -= e;
        r[3] += e;
    }
    func_0B6DE8(r[0], r[1], r[2], r[3], 0xFF000000);
    r[2] = (int)((float)r[0] + (float)func_0B2FD8(r) * sw);
    func_0B6E78(r[0], r[1], r[2], r[3], 1.0f, 1.0f, 0.0f, p, q, p, q);
}
