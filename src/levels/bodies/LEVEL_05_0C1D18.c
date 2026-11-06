extern int func_12FAD0(int a, void *r, unsigned int c);
extern void func_0ACCC8(int a, void *r, float f);
extern int func_0A6C40(void *r);
extern int func_12DE28(int a);
extern void func_0A8D50(short a, short b, int c);

void func_0C1D18(void)
{
    int buf[4];
    short a;
    short b;

    buf[2] = 0x1e0;
    buf[3] = 0x110;
    buf[0] = 0;
    buf[1] = 0;
    if (func_12FAD0(0, buf, 0xffffffff) != 0) {
        func_0ACCC8(0x19f, buf, 0.0f);
        a = func_0A6C40(buf);
        b = (short)(((unsigned short *)buf)[6] - 10);
        func_0A8D50(a, b, func_12DE28(0x1ca));
    }
}
