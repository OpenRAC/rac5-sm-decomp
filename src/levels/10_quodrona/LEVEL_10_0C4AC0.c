extern int func_131FD8(int a, void *r, unsigned int c);
extern void func_0AF820(int a, void *r, float f);
extern int func_0A9798(void *r);
extern int func_130310(int a);
extern void func_0AB8A8(short a, short b, int c);

void func_0C4AC0(void)
{
    int buf[4];
    short a;
    short b;

    buf[2] = 0x1e0;
    buf[3] = 0x110;
    buf[0] = 0;
    buf[1] = 0;
    if (func_131FD8(0, buf, 0xffffffff) != 0) {
        func_0AF820(0x19f, buf, 0.0f);
        a = func_0A9798(buf);
        b = (short)(((unsigned short *)buf)[6] - 10);
        func_0AB8A8(a, b, func_130310(0x1ca));
    }
}
