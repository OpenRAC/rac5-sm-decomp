/* LEVEL_19:0x019478 -- placement copy of LEVEL_16_019778.c: draws the two-player frame: guide ticks per viewport, then ends each pass. */
extern int D_001D16A0;
extern unsigned int D_001A5A04;
extern unsigned char D_0019C015;
extern unsigned char D_001A541C;

extern void func_018D38(int a);
extern int func_000CB8(int a);
extern void func_000BF0(int a);
extern void func_000E20(void);
extern void func_027C98(float *a, float *b);
extern int func_000DC0(void);
extern void func_08A000(int a, float *b, float *c, int d);
extern void func_08E5C8(void);
extern void func_090AE0(int a, int b, int c);
extern void func_090F58(int a);
extern void func_090C00(int a, int b);
extern void func_000880(float *a, float *b, int c);
extern void func_093DC0(short x, short y, int w, short y2, unsigned int c1, unsigned int c2);
extern int func_0279E0(int a);
extern void func_019138(int a);
extern void func_096F98(void);
extern void func_046A98(void);
extern void func_096FB8(void);
extern void func_09DFC8(void);
extern void func_09E000(void);
extern void func_08FC20(int a, unsigned int b);

void func_019478(void)
{
    float a[4];
    float b[12];
    float c[16];
    unsigned int i;
    unsigned int pass;

    if (D_001D16A0 == 1)
        D_001A5A04 = 0xcc0000 | 0xaa00;
    else
        D_001A5A04 = 0;
    func_018D38(1);
    for (i = 0; i < 2; i++) {
        if (D_0019C015 != 0 && func_000CB8(i) != 0) {
            func_000BF0(i);
            func_000E20();
            func_027C98(a, c);
            func_08A000(func_000DC0(), a, c, i);
        }
    }
    func_08E5C8();
    for (pass = 0; pass < 2; pass++) {
        if (func_000CB8(pass) != 0) {
            func_000BF0(pass);
            func_000E20();
            if (func_000CB8(1) != 0) {
                func_090AE0(0, 0x40, 5);
                func_090F58(1);
                func_090C00(1, 1);
                if (pass == 0) {
                    func_000880(a, b, 1);
                    for (i = 0; (float)i < b[0] * 0.015625f; i++)
                        func_093DC0((short)(i << 6), (short)(int)a[1], 0x40, (short)(int)b[1], 0x40ff00ff, 0xffffff);
                } else {
                    func_000880(a, b, 1);
                    for (i = 0; (float)i < b[0] * 0.015625f; i++)
                        func_093DC0((short)(i << 6), (short)(int)a[1], 0x40, (short)(int)b[1], 0x8f00, 0);
                    func_000880(a, b, 0);
                    for (i = 0; (float)i < b[0] * 0.015625f; i++)
                        func_093DC0((short)(i << 6), (short)(int)a[1], 0x40, (short)(int)b[1], 0xff0000, 0xffffff);
                }
                func_090C00(1, 2);
            }
            D_001A541C = func_0279E0(4);
            func_019138(pass);
            func_096F98();
            func_046A98();
            func_096FB8();
        }
    }
    func_096F98();
    func_09DFC8();
    func_09E000();
    func_096FB8();
    func_08FC20(0, 0xffffffff);
}
