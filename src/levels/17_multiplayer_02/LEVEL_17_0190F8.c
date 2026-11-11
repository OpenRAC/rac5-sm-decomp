/* LEVEL_17:0x0190F8 -- placement copy of LEVEL_16_019778.c: draws the two-player frame: guide ticks per viewport, then ends each pass. */
extern int D_001C3920;
extern unsigned int D_00197E84;
extern unsigned char D_0018E495;
extern unsigned char D_0019789C;

extern void func_0189B8(int a);
extern int func_000CB8(int a);
extern void func_000BF0(int a);
extern void func_000E20(void);
extern void func_027A70(float *a, float *b);
extern int func_000DC0(void);
extern void func_08A590(int a, float *b, float *c, int d);
extern void func_08E228(void);
extern void func_090748(int a, int b, int c);
extern void func_090BC0(int a);
extern void func_090868(int a, int b);
extern void func_000880(float *a, float *b, int c);
extern void func_093A28(short x, short y, int w, short y2, unsigned int c1, unsigned int c2);
extern int func_0277B8(int a);
extern void func_018DB8(int a);
extern void func_096C00(void);
extern void func_047068(void);
extern void func_096C20(void);
extern void func_09DC30(void);
extern void func_09DC68(void);
extern void func_08F888(int a, unsigned int b);

void func_0190F8(void)
{
    float a[4];
    float b[12];
    float c[16];
    unsigned int i;
    unsigned int pass;

    if (D_001C3920 == 1)
        D_00197E84 = 0xcc0000 | 0xaa00;
    else
        D_00197E84 = 0;
    func_0189B8(1);
    for (i = 0; i < 2; i++) {
        if (D_0018E495 != 0 && func_000CB8(i) != 0) {
            func_000BF0(i);
            func_000E20();
            func_027A70(a, c);
            func_08A590(func_000DC0(), a, c, i);
        }
    }
    func_08E228();
    for (pass = 0; pass < 2; pass++) {
        if (func_000CB8(pass) != 0) {
            func_000BF0(pass);
            func_000E20();
            if (func_000CB8(1) != 0) {
                func_090748(0, 0x40, 5);
                func_090BC0(1);
                func_090868(1, 1);
                if (pass == 0) {
                    func_000880(a, b, 1);
                    for (i = 0; (float)i < b[0] * 0.015625f; i++)
                        func_093A28((short)(i << 6), (short)(int)a[1], 0x40, (short)(int)b[1], 0x40ff00ff, 0xffffff);
                } else {
                    func_000880(a, b, 1);
                    for (i = 0; (float)i < b[0] * 0.015625f; i++)
                        func_093A28((short)(i << 6), (short)(int)a[1], 0x40, (short)(int)b[1], 0x8f00, 0);
                    func_000880(a, b, 0);
                    for (i = 0; (float)i < b[0] * 0.015625f; i++)
                        func_093A28((short)(i << 6), (short)(int)a[1], 0x40, (short)(int)b[1], 0xff0000, 0xffffff);
                }
                func_090868(1, 2);
            }
            D_0019789C = func_0277B8(4);
            func_018DB8(pass);
            func_096C00();
            func_047068();
            func_096C20();
        }
    }
    func_096C00();
    func_09DC30();
    func_09DC68();
    func_096C20();
    func_08F888(0, 0xffffffff);
}
