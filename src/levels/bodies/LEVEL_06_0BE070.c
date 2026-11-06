extern int func_12A828(int a, void *r, unsigned int c);
extern void func_0A8ED8(int a, void *r, float f);
extern int func_0A2E50(void *r);
extern int func_128B80(int a);
extern void func_0A4F60(short a, short b, int c);

void func_0BE070(void)
{
    int buf[4];
    short a;
    short b;

    buf[2] = 0x1e0;
    buf[3] = 0x110;
    buf[0] = 0;
    buf[1] = 0;
    if (func_12A828(0, buf, 0xffffffff) != 0) {
        func_0A8ED8(0x19f, buf, 0.0f);
        a = func_0A2E50(buf);
        b = (short)(((unsigned short *)buf)[6] - 10);
        func_0A4F60(a, b, func_128B80(0x1ca));
    }
}
