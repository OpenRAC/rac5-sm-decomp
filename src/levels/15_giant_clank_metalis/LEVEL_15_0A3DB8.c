extern int func_0F3020(int a, void *r, unsigned int c);
extern void func_08EFD0(int a, void *r, float f);
extern int func_088F48(void *r);
extern int func_0F1378(int a);
extern void func_08B058(short a, short b, int c);

void func_0A3DB8(void)
{
    int buf[4];
    short a;
    short b;

    buf[2] = 0x1e0;
    buf[3] = 0x110;
    buf[0] = 0;
    buf[1] = 0;
    if (func_0F3020(0, buf, 0xffffffff) != 0) {
        func_08EFD0(0x19f, buf, 0.0f);
        a = func_088F48(buf);
        b = (short)(((unsigned short *)buf)[6] - 10);
        func_08B058(a, b, func_0F1378(0x1ca));
    }
}
