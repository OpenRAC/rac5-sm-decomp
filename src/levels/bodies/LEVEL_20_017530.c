/* LEVEL_20:0x017530 -- placement copy of LEVEL_16_019778.c: draws the two-player frame: guide ticks per viewport, then ends each pass. */
extern int D_00131510;
extern unsigned int D_00106F64;
extern unsigned char D_000FD57D;
extern unsigned char D_0010697C;

extern void func_016DF0(int a);
extern int func_000C78(int a);
extern void func_000BD8(int a);
extern void func_000DE0(void);
extern void func_024BF8(float *a, float *b);
extern int func_000D80(void);
extern void func_0772F0(int a, float *b, float *c, int d);
extern void func_079638(void);
extern void func_07B948(int a, int b, int c);
extern void func_07BDC0(int a);
extern void func_07BA68(int a, int b);
extern void func_000868(float *a, float *b, int c);
extern void func_07EC28(short x, short y, int w, short y2, unsigned int c1, unsigned int c2);
extern int func_024940(int a);
extern void func_0171F0(int a);
extern void func_081E00(void);
extern void func_041928(void);
extern void func_081E20(void);
extern void func_088E30(void);
extern void func_088E68(void);
extern void func_07AA88(int a, unsigned int b);

void func_017530(void)
{
    float a[4];
    float b[12];
    float c[16];
    unsigned int i;
    unsigned int pass;

    if (D_00131510 == 1)
        D_00106F64 = 0xcc0000 | 0xaa00;
    else
        D_00106F64 = 0;
    func_016DF0(1);
    for (i = 0; i < 2; i++) {
        if (D_000FD57D != 0 && func_000C78(i) != 0) {
            func_000BD8(i);
            func_000DE0();
            func_024BF8(a, c);
            func_0772F0(func_000D80(), a, c, i);
        }
    }
    func_079638();
    for (pass = 0; pass < 2; pass++) {
        if (func_000C78(pass) != 0) {
            func_000BD8(pass);
            func_000DE0();
            if (func_000C78(1) != 0) {
                func_07B948(0, 0x40, 5);
                func_07BDC0(1);
                func_07BA68(1, 1);
                if (pass == 0) {
                    func_000868(a, b, 1);
                    for (i = 0; (float)i < b[0] * 0.015625f; i++)
                        func_07EC28((short)(i << 6), (short)(int)a[1], 0x40, (short)(int)b[1], 0x40ff00ff, 0xffffff);
                } else {
                    func_000868(a, b, 1);
                    for (i = 0; (float)i < b[0] * 0.015625f; i++)
                        func_07EC28((short)(i << 6), (short)(int)a[1], 0x40, (short)(int)b[1], 0x8f00, 0);
                    func_000868(a, b, 0);
                    for (i = 0; (float)i < b[0] * 0.015625f; i++)
                        func_07EC28((short)(i << 6), (short)(int)a[1], 0x40, (short)(int)b[1], 0xff0000, 0xffffff);
                }
                func_07BA68(1, 2);
            }
            D_0010697C = func_024940(4);
            func_0171F0(pass);
            func_081E00();
            func_041928();
            func_081E20();
        }
    }
    func_081E00();
    func_088E30();
    func_088E68();
    func_081E20();
    func_07AA88(0, 0xffffffff);
}
