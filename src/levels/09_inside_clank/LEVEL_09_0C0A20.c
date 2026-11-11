extern int func_12D0F0(int a, void *r, unsigned int c);
extern void func_0AB9B8(int a, void *r, float f);
extern int func_0A5930(void *r);
extern int func_12B448(int a);
extern void func_0A7A40(short a, short b, int c);

void func_0C0A20(void)
{
    int buf[4];
    short a;
    short b;

    buf[2] = 0x1e0;
    buf[3] = 0x110;
    buf[0] = 0;
    buf[1] = 0;
    if (func_12D0F0(0, buf, 0xffffffff) != 0) {
        func_0AB9B8(0x19f, buf, 0.0f);
        a = func_0A5930(buf);
        b = (short)(((unsigned short *)buf)[6] - 10);
        func_0A7A40(a, b, func_12B448(0x1ca));
    }
}
