/* LEVEL_01:0x0B7978 -- grows a widget rectangle by the requested factors, draws its dark backdrop and then the filled bar of the given width scale. */
extern void func_0AE708(float f, int a, int *r);
extern int func_0A86E0(int *r);
extern int func_0A8798(int *r);
extern int func_1EB278(float f);
extern void func_0AC4B0(short a, short b, short c, short d, unsigned int col);
extern void func_0AC540(short x, short y, short z, short w, float a, float b, float c, int p, int q, int r, int s);

void func_0B7978(float sw, float sx, float sy, int unused, int a, int p, int q)
{
    int r[4];
    int d;
    int e;

    func_0AE708(0.0f, a, r);
    if (sx != 0.0f || sy != 0.0f) {
        d = func_1EB278((float)func_0A86E0(r) * sx - (float)func_0A86E0(r));
        r[0] -= d;
        r[2] += d;
        e = func_1EB278((float)func_0A8798(r) * sy - (float)func_0A8798(r));
        r[1] -= e;
        r[3] += e;
    }
    func_0AC4B0(r[0], r[1], r[2], r[3], 0xFF000000);
    r[2] = (int)((float)r[0] + (float)func_0A86E0(r) * sw);
    func_0AC540(r[0], r[1], r[2], r[3], 1.0f, 1.0f, 0.0f, p, q, p, q);
}
