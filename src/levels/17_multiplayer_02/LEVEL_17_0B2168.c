extern int func_110440(int a, void *r, unsigned int c);
extern void func_09C2F0(int a, void *r, float f);
extern int func_096208(void *r);
extern int func_10E8A8(int a);
extern void func_098378(short a, short b, int c);

void func_0B2168(void)
{
    int buf[4];
    short a;
    short b;

    buf[2] = 0x1e0;
    buf[3] = 0x110;
    buf[0] = 0;
    buf[1] = 0;
    if (func_110440(0, buf, 0xffffffff) != 0) {
        func_09C2F0(0x19f, buf, 0.0f);
        a = func_096208(buf);
        b = (short)(((unsigned short *)buf)[6] - 10);
        func_098378(a, b, func_10E8A8(0x1ca));
    }
}
