extern int func_1258D0(int a, void *r, unsigned int c);
extern void func_0A5478(int a, void *r, float f);
extern int func_09F3F0(void *r);
extern int func_123C28(int a);
extern void func_0A1500(short a, short b, int c);

void func_0BA510(void)
{
    int buf[4];
    short a;
    short b;

    buf[2] = 0x1e0;
    buf[3] = 0x110;
    buf[0] = 0;
    buf[1] = 0;
    if (func_1258D0(0, buf, 0xffffffff) != 0) {
        func_0A5478(0x19f, buf, 0.0f);
        a = func_09F3F0(buf);
        b = (short)(((unsigned short *)buf)[6] - 10);
        func_0A1500(a, b, func_123C28(0x1ca));
    }
}
