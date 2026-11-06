extern int func_13A508(int a, void *r, unsigned int c);
extern void func_0B5018(int a, void *r, float f);
extern int func_0AEF90(void *r);
extern int func_138860(int a);
extern void func_0B10A0(short a, short b, int c);

void func_0CA080(void)
{
    int buf[4];
    short a;
    short b;

    buf[2] = 0x1e0;
    buf[3] = 0x110;
    buf[0] = 0;
    buf[1] = 0;
    if (func_13A508(0, buf, 0xffffffff) != 0) {
        func_0B5018(0x19f, buf, 0.0f);
        a = func_0AEF90(buf);
        b = (short)(((unsigned short *)buf)[6] - 10);
        func_0B10A0(a, b, func_138860(0x1ca));
    }
}
