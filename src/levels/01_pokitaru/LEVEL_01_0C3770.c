extern int func_134158(int a, void *r, unsigned int c);
extern void func_0AE708(int a, void *r, float f);
extern int func_0A8680(void *r);
extern int func_1324B0(int a);
extern void func_0AA790(short a, short b, int c);

void func_0C3770(void)
{
    int buf[4];
    short a;
    short b;

    buf[2] = 0x1e0;
    buf[3] = 0x110;
    buf[0] = 0;
    buf[1] = 0;
    if (func_134158(0, buf, 0xffffffff) != 0) {
        func_0AE708(0x19f, buf, 0.0f);
        a = func_0A8680(buf);
        b = (short)(((unsigned short *)buf)[6] - 10);
        func_0AA790(a, b, func_1324B0(0x1ca));
    }
}
