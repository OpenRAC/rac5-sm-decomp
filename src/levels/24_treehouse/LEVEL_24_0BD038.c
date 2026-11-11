extern int func_129C58(int a, void *r, unsigned int c);
extern void func_0A7F80(int a, void *r, float f);
extern int func_0A1EF8(void *r);
extern int func_127FB0(int a);
extern void func_0A4008(short a, short b, int c);

void func_0BD038(void)
{
    int buf[4];
    short a;
    short b;

    buf[2] = 0x1e0;
    buf[3] = 0x110;
    buf[0] = 0;
    buf[1] = 0;
    if (func_129C58(0, buf, 0xffffffff) != 0) {
        func_0A7F80(0x19f, buf, 0.0f);
        a = func_0A1EF8(buf);
        b = (short)(((unsigned short *)buf)[6] - 10);
        func_0A4008(a, b, func_127FB0(0x1ca));
    }
}
