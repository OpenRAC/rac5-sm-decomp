extern int func_110EC8(int a, void *r, unsigned int c);
extern void func_09CDF8(int a, void *r, float f);
extern int func_096D10(void *r);
extern int func_10F330(int a);
extern void func_098E80(short a, short b, int c);

void func_0B2C28(void)
{
    int buf[4];
    short a;
    short b;

    buf[2] = 0x1e0;
    buf[3] = 0x110;
    buf[0] = 0;
    buf[1] = 0;
    if (func_110EC8(0, buf, 0xffffffff) != 0) {
        func_09CDF8(0x19f, buf, 0.0f);
        a = func_096D10(buf);
        b = (short)(((unsigned short *)buf)[6] - 10);
        func_098E80(a, b, func_10F330(0x1ca));
    }
}
