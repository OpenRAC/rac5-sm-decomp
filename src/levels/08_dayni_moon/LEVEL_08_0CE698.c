extern int func_145690(int a, void *r, unsigned int c);
extern void func_0B9040(int a, void *r, float f);
extern int func_0B2F78(void *r);
extern int func_1439E8(int a);
extern void func_0B50C8(short a, short b, int c);

void func_0CE698(void)
{
    int buf[4];
    short a;
    short b;

    buf[2] = 0x1e0;
    buf[3] = 0x110;
    buf[0] = 0;
    buf[1] = 0;
    if (func_145690(0, buf, 0xffffffff) != 0) {
        func_0B9040(0x19f, buf, 0.0f);
        a = func_0B2F78(buf);
        b = (short)(((unsigned short *)buf)[6] - 10);
        func_0B50C8(a, b, func_1439E8(0x1ca));
    }
}
