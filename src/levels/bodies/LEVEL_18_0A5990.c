/* LEVEL_18:0x0A5990 -- placement copy of LEVEL_01_0B7978.c: grows a widget rectangle by the requested factors, draws its dark backdrop and then the filled bar of the given width scale. */
extern void func_09BE08(float f, int a, int *r);
extern int func_095D80(int *r);
extern int func_095E38(int *r);
extern int func_1981B8(float f);
extern void func_099BB0(short a, short b, short c, short d, unsigned int col);
extern void func_099C40(short x, short y, short z, short w, float a, float b, float c, int p, int q, int r, int s);

void func_0A5990(float sw, float sx, float sy, int unused, int a, int p, int q)
{
    int r[4];
    int d;
    int e;

    func_09BE08(0.0f, a, r);
    if (sx != 0.0f || sy != 0.0f) {
        d = func_1981B8((float)func_095D80(r) * sx - (float)func_095D80(r));
        r[0] -= d;
        r[2] += d;
        e = func_1981B8((float)func_095E38(r) * sy - (float)func_095E38(r));
        r[1] -= e;
        r[3] += e;
    }
    func_099BB0(r[0], r[1], r[2], r[3], 0xFF000000);
    r[2] = (int)((float)r[0] + (float)func_095D80(r) * sw);
    func_099C40(r[0], r[1], r[2], r[3], 1.0f, 1.0f, 0.0f, p, q, p, q);
}
