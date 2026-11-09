/* LEVEL_16.REL:0x019778: reviewed 1000-byte candidate, held for ABI review.
 * Draws the two-player frame: guide ticks per viewport, then ends each pass.
 * gnu-ee-trial C with gnu-ee-trial links 1000/1000 bytes and is byte-exact at
 * this and 4 other USA placements, but the prototypes disagree.
 * It declares func_019038 returning void with (int), but the accepted
 * LEVEL_16_019038.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_001D04A0;
extern unsigned int D_001A4884;
extern unsigned char D_0019AE95;
extern unsigned char D_001A429C;

extern void func_019038(int a);
extern int func_000CB8(int a);
extern void func_000BF0(int a);
extern void func_000E20(void);
extern void func_0280F0(float *a, float *b);
extern int func_000DC0(void);
extern void func_089B50(int a, float *b, float *c, int d);
extern void func_08ED30(void);
extern void func_091250(int a, int b, int c);
extern void func_0916C8(int a);
extern void func_091370(int a, int b);
extern void func_000880(float *a, float *b, int c);
extern void func_094530(short x, short y, int w, short y2, unsigned int c1, unsigned int c2);
extern int func_027E38(int a);
extern void func_019438(int a);
extern void func_097708(void);
extern void func_047808(void);
extern void func_097728(void);
extern void func_09E738(void);
extern void func_09E770(void);
extern void func_090390(int a, unsigned int b);

void func_019778(void)
{
    float a[4];
    float b[12];
    float c[16];
    unsigned int i;
    unsigned int pass;

    if (D_001D04A0 == 1)
        D_001A4884 = 0xcc0000 | 0xaa00;
    else
        D_001A4884 = 0;
    func_019038(1);
    for (i = 0; i < 2; i++) {
        if (D_0019AE95 != 0 && func_000CB8(i) != 0) {
            func_000BF0(i);
            func_000E20();
            func_0280F0(a, c);
            func_089B50(func_000DC0(), a, c, i);
        }
    }
    func_08ED30();
    for (pass = 0; pass < 2; pass++) {
        if (func_000CB8(pass) != 0) {
            func_000BF0(pass);
            func_000E20();
            if (func_000CB8(1) != 0) {
                func_091250(0, 0x40, 5);
                func_0916C8(1);
                func_091370(1, 1);
                if (pass == 0) {
                    func_000880(a, b, 1);
                    for (i = 0; (float)i < b[0] * 0.015625f; i++)
                        func_094530((short)(i << 6), (short)(int)a[1], 0x40, (short)(int)b[1], 0x40ff00ff, 0xffffff);
                } else {
                    func_000880(a, b, 1);
                    for (i = 0; (float)i < b[0] * 0.015625f; i++)
                        func_094530((short)(i << 6), (short)(int)a[1], 0x40, (short)(int)b[1], 0x8f00, 0);
                    func_000880(a, b, 0);
                    for (i = 0; (float)i < b[0] * 0.015625f; i++)
                        func_094530((short)(i << 6), (short)(int)a[1], 0x40, (short)(int)b[1], 0xff0000, 0xffffff);
                }
                func_091370(1, 2);
            }
            D_001A429C = func_027E38(4);
            func_019438(pass);
            func_097708();
            func_047808();
            func_097728();
        }
    }
    func_097708();
    func_09E738();
    func_09E770();
    func_097728();
    func_090390(0, 0xffffffff);
}
