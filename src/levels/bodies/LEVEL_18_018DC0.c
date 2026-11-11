/* LEVEL_18:0x018DC0 -- placement copy of LEVEL_16_019778.c: draws the two-player frame: guide ticks per viewport, then ends each pass. */
extern int D_001D1A20;
extern unsigned int D_001A5D04;
extern unsigned char D_0019C315;
extern unsigned char D_001A571C;

extern void func_018680(int a);
extern int func_000CB8(int a);
extern void func_000BF0(int a);
extern void func_000E90(void);
extern void func_0276A0(float *a, float *b);
extern int func_000E30(void);
extern void func_089498(int a, float *b, float *c, int d);
extern void func_08DD48(void);
extern void func_090260(int a, int b, int c);
extern void func_0906D8(int a);
extern void func_090380(int a, int b);
extern void func_000880(float *a, float *b, int c);
extern void func_093540(short x, short y, int w, short y2, unsigned int c1, unsigned int c2);
extern int func_0273E8(int a);
extern void func_018A80(int a);
extern void func_096718(void);
extern void func_046048(void);
extern void func_096738(void);
extern void func_09D748(void);
extern void func_09D780(void);
extern void func_08F3A0(int a, unsigned int b);

void func_018DC0(void)
{
    float a[4];
    float b[12];
    float c[16];
    unsigned int i;
    unsigned int pass;

    if (D_001D1A20 == 1)
        D_001A5D04 = 0xcc0000 | 0xaa00;
    else
        D_001A5D04 = 0;
    func_018680(1);
    for (i = 0; i < 2; i++) {
        if (D_0019C315 != 0 && func_000CB8(i) != 0) {
            func_000BF0(i);
            func_000E90();
            func_0276A0(a, c);
            func_089498(func_000E30(), a, c, i);
        }
    }
    func_08DD48();
    for (pass = 0; pass < 2; pass++) {
        if (func_000CB8(pass) != 0) {
            func_000BF0(pass);
            func_000E90();
            if (func_000CB8(1) != 0) {
                func_090260(0, 0x40, 5);
                func_0906D8(1);
                func_090380(1, 1);
                if (pass == 0) {
                    func_000880(a, b, 1);
                    for (i = 0; (float)i < b[0] * 0.015625f; i++)
                        func_093540((short)(i << 6), (short)(int)a[1], 0x40, (short)(int)b[1], 0x40ff00ff, 0xffffff);
                } else {
                    func_000880(a, b, 1);
                    for (i = 0; (float)i < b[0] * 0.015625f; i++)
                        func_093540((short)(i << 6), (short)(int)a[1], 0x40, (short)(int)b[1], 0x8f00, 0);
                    func_000880(a, b, 0);
                    for (i = 0; (float)i < b[0] * 0.015625f; i++)
                        func_093540((short)(i << 6), (short)(int)a[1], 0x40, (short)(int)b[1], 0xff0000, 0xffffff);
                }
                func_090380(1, 2);
            }
            D_001A571C = func_0273E8(4);
            func_018A80(pass);
            func_096718();
            func_046048();
            func_096738();
        }
    }
    func_096718();
    func_09D748();
    func_09D780();
    func_096738();
    func_08F3A0(0, 0xffffffff);
}
