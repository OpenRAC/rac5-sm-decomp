/* LEVEL_09:0x0B4C28 -- placement copy of LEVEL_01_0B7978.c: grows a widget rectangle by the requested factors, draws its dark backdrop and then the filled bar of the given width scale. */
extern void func_0AB9B8(float f, int a, int *r);
extern int func_0A5990(int *r);
extern int func_0A5A48(int *r);
extern int func_1D50E0(float f);
extern void func_0A9760(short a, short b, short c, short d, unsigned int col);
extern void func_0A97F0(short x, short y, short z, short w, float a, float b, float c, int p, int q, int r, int s);

void func_0B4C28(float sw, float sx, float sy, int unused, int a, int p, int q)
{
    int r[4];
    int d;
    int e;

    func_0AB9B8(0.0f, a, r);
    if (sx != 0.0f || sy != 0.0f) {
        d = func_1D50E0((float)func_0A5990(r) * sx - (float)func_0A5990(r));
        r[0] -= d;
        r[2] += d;
        e = func_1D50E0((float)func_0A5A48(r) * sy - (float)func_0A5A48(r));
        r[1] -= e;
        r[3] += e;
    }
    func_0A9760(r[0], r[1], r[2], r[3], 0xFF000000);
    r[2] = (int)((float)r[0] + (float)func_0A5990(r) * sw);
    func_0A97F0(r[0], r[1], r[2], r[3], 1.0f, 1.0f, 0.0f, p, q, p, q);
}
