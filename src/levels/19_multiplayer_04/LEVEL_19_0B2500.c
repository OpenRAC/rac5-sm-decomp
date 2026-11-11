extern int func_111568(int a, void *r, unsigned int c);
extern void func_09C688(int a, void *r, float f);
extern int func_0965A0(void *r);
extern int func_10F9D0(int a);
extern void func_098710(short a, short b, int c);

void func_0B2500(void)
{
    int buf[4];
    short a;
    short b;

    buf[2] = 0x1e0;
    buf[3] = 0x110;
    buf[0] = 0;
    buf[1] = 0;
    if (func_111568(0, buf, 0xffffffff) != 0) {
        func_09C688(0x19f, buf, 0.0f);
        a = func_0965A0(buf);
        b = (short)(((unsigned short *)buf)[6] - 10);
        func_098710(a, b, func_10F9D0(0x1ca));
    }
}
