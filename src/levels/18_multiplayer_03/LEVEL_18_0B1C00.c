extern int func_10FB78(int a, void *r, unsigned int c);
extern void func_09BE08(int a, void *r, float f);
extern int func_095D20(void *r);
extern int func_10DFE0(int a);
extern void func_097E90(short a, short b, int c);

void func_0B1C00(void)
{
    int buf[4];
    short a;
    short b;

    buf[2] = 0x1e0;
    buf[3] = 0x110;
    buf[0] = 0;
    buf[1] = 0;
    if (func_10FB78(0, buf, 0xffffffff) != 0) {
        func_09BE08(0x19f, buf, 0.0f);
        a = func_095D20(buf);
        b = (short)(((unsigned short *)buf)[6] - 10);
        func_097E90(a, b, func_10DFE0(0x1ca));
    }
}
