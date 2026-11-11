/* LEVEL_03:0x0B7760 -- placement copy of LEVEL_01_0B7978.c: grows a widget rectangle by the requested factors, draws its dark backdrop and then the filled bar of the given width scale. */
extern void func_0AE488(float f, int a, int *r);
extern int func_0A8460(int *r);
extern int func_0A8518(int *r);
extern int func_203908(float f);
extern void func_0AC230(short a, short b, short c, short d, unsigned int col);
extern void func_0AC2C0(short x, short y, short z, short w, float a, float b, float c, int p, int q, int r, int s);

void func_0B7760(float sw, float sx, float sy, int unused, int a, int p, int q)
{
    int r[4];
    int d;
    int e;

    func_0AE488(0.0f, a, r);
    if (sx != 0.0f || sy != 0.0f) {
        d = func_203908((float)func_0A8460(r) * sx - (float)func_0A8460(r));
        r[0] -= d;
        r[2] += d;
        e = func_203908((float)func_0A8518(r) * sy - (float)func_0A8518(r));
        r[1] -= e;
        r[3] += e;
    }
    func_0AC230(r[0], r[1], r[2], r[3], 0xFF000000);
    r[2] = (int)((float)r[0] + (float)func_0A8460(r) * sw);
    func_0AC2C0(r[0], r[1], r[2], r[3], 1.0f, 1.0f, 0.0f, p, q, p, q);
}
