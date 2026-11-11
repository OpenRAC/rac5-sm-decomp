/* LEVEL_17:0x0A5EF8 -- placement copy of LEVEL_01_0B7978.c: grows a widget rectangle by the requested factors, draws its dark backdrop and then the filled bar of the given width scale. */
extern void func_09C2F0(float f, int a, int *r);
extern int func_096268(int *r);
extern int func_096320(int *r);
extern int func_18A360(float f);
extern void func_09A098(short a, short b, short c, short d, unsigned int col);
extern void func_09A128(short x, short y, short z, short w, float a, float b, float c, int p, int q, int r, int s);

void func_0A5EF8(float sw, float sx, float sy, int unused, int a, int p, int q)
{
    int r[4];
    int d;
    int e;

    func_09C2F0(0.0f, a, r);
    if (sx != 0.0f || sy != 0.0f) {
        d = func_18A360((float)func_096268(r) * sx - (float)func_096268(r));
        r[0] -= d;
        r[2] += d;
        e = func_18A360((float)func_096320(r) * sy - (float)func_096320(r));
        r[1] -= e;
        r[3] += e;
    }
    func_09A098(r[0], r[1], r[2], r[3], 0xFF000000);
    r[2] = (int)((float)r[0] + (float)func_096268(r) * sw);
    func_09A128(r[0], r[1], r[2], r[3], 1.0f, 1.0f, 0.0f, p, q, p, q);
}
