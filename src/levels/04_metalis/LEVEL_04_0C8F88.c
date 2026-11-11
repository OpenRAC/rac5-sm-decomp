extern int func_1405D8(int a, void *r, unsigned int c);
extern void func_0B3958(int a, void *r, float f);
extern int func_0AD890(void *r);
extern int func_13E930(int a);
extern void func_0AF9E0(short a, short b, int c);

void func_0C8F88(void)
{
    int buf[4];
    short a;
    short b;

    buf[2] = 0x1e0;
    buf[3] = 0x110;
    buf[0] = 0;
    buf[1] = 0;
    if (func_1405D8(0, buf, 0xffffffff) != 0) {
        func_0B3958(0x19f, buf, 0.0f);
        a = func_0AD890(buf);
        b = (short)(((unsigned short *)buf)[6] - 10);
        func_0AF9E0(a, b, func_13E930(0x1ca));
    }
}
