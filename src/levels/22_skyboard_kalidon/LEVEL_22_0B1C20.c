extern int func_10B628(int a, void *r, unsigned int c);
extern void func_09CD18(int a, void *r, float f);
extern int func_096C90(void *r);
extern int func_109980(int a);
extern void func_098DA0(short a, short b, int c);

void func_0B1C20(void)
{
    int buf[4];
    short a;
    short b;

    buf[2] = 0x1e0;
    buf[3] = 0x110;
    buf[0] = 0;
    buf[1] = 0;
    if (func_10B628(0, buf, 0xffffffff) != 0) {
        func_09CD18(0x19f, buf, 0.0f);
        a = func_096C90(buf);
        b = (short)(((unsigned short *)buf)[6] - 10);
        func_098DA0(a, b, func_109980(0x1ca));
    }
}
