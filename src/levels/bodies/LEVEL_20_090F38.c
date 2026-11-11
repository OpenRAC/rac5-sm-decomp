/* LEVEL_20:0x090F38 -- placement copy of LEVEL_01_0B7978.c: grows a widget rectangle by the requested factors, draws its dark backdrop and then the filled bar of the given width scale. */
extern void func_0874F0(float f, int a, int *r);
extern int func_081468(int *r);
extern int func_081520(int *r);
extern int func_0F9448(float f);
extern void func_085298(short a, short b, short c, short d, unsigned int col);
extern void func_085328(short x, short y, short z, short w, float a, float b, float c, int p, int q, int r, int s);

void func_090F38(float sw, float sx, float sy, int unused, int a, int p, int q)
{
    int r[4];
    int d;
    int e;

    func_0874F0(0.0f, a, r);
    if (sx != 0.0f || sy != 0.0f) {
        d = func_0F9448((float)func_081468(r) * sx - (float)func_081468(r));
        r[0] -= d;
        r[2] += d;
        e = func_0F9448((float)func_081520(r) * sy - (float)func_081520(r));
        r[1] -= e;
        r[3] += e;
    }
    func_085298(r[0], r[1], r[2], r[3], 0xFF000000);
    r[2] = (int)((float)r[0] + (float)func_081468(r) * sw);
    func_085328(r[0], r[1], r[2], r[3], 1.0f, 1.0f, 0.0f, p, q, p, q);
}
