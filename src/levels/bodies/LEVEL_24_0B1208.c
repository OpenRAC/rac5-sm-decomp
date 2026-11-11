/* LEVEL_24:0x0B1208 -- placement copy of LEVEL_01_0B7978.c: grows a widget rectangle by the requested factors, draws its dark backdrop and then the filled bar of the given width scale. */
extern void func_0A7F80(float f, int a, int *r);
extern int func_0A1F58(int *r);
extern int func_0A2010(int *r);
extern int func_1BBF50(float f);
extern void func_0A5D28(short a, short b, short c, short d, unsigned int col);
extern void func_0A5DB8(short x, short y, short z, short w, float a, float b, float c, int p, int q, int r, int s);

void func_0B1208(float sw, float sx, float sy, int unused, int a, int p, int q)
{
    int r[4];
    int d;
    int e;

    func_0A7F80(0.0f, a, r);
    if (sx != 0.0f || sy != 0.0f) {
        d = func_1BBF50((float)func_0A1F58(r) * sx - (float)func_0A1F58(r));
        r[0] -= d;
        r[2] += d;
        e = func_1BBF50((float)func_0A2010(r) * sy - (float)func_0A2010(r));
        r[1] -= e;
        r[3] += e;
    }
    func_0A5D28(r[0], r[1], r[2], r[3], 0xFF000000);
    r[2] = (int)((float)r[0] + (float)func_0A1F58(r) * sw);
    func_0A5DB8(r[0], r[1], r[2], r[3], 1.0f, 1.0f, 0.0f, p, q, p, q);
}
