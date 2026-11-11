/* LEVEL_22:0x0A5EC8 -- placement copy of LEVEL_01_0B7978.c: grows a widget rectangle by the requested factors, draws its dark backdrop and then the filled bar of the given width scale. */
extern void func_09CD18(float f, int a, int *r);
extern int func_096CF0(int *r);
extern int func_096DA8(int *r);
extern int func_14A630(float f);
extern void func_09AAC0(short a, short b, short c, short d, unsigned int col);
extern void func_09AB50(short x, short y, short z, short w, float a, float b, float c, int p, int q, int r, int s);

void func_0A5EC8(float sw, float sx, float sy, int unused, int a, int p, int q)
{
    int r[4];
    int d;
    int e;

    func_09CD18(0.0f, a, r);
    if (sx != 0.0f || sy != 0.0f) {
        d = func_14A630((float)func_096CF0(r) * sx - (float)func_096CF0(r));
        r[0] -= d;
        r[2] += d;
        e = func_14A630((float)func_096DA8(r) * sy - (float)func_096DA8(r));
        r[1] -= e;
        r[3] += e;
    }
    func_09AAC0(r[0], r[1], r[2], r[3], 0xFF000000);
    r[2] = (int)((float)r[0] + (float)func_096CF0(r) * sw);
    func_09AB50(r[0], r[1], r[2], r[3], 1.0f, 1.0f, 0.0f, p, q, p, q);
}
