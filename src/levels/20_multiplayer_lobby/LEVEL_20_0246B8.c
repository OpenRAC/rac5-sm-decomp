/* LEVEL_20:0x0246B8 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_001046A8;
extern unsigned char D_001046A9;
extern struct Game *D_00104194;
extern unsigned char D_000FD58C;

extern int func_024940(int a);
extern void func_024A00(void);
extern int func_0E2118(int id);
extern void func_0B0B78(int a, int b, int c, int d);
extern int func_0B0680(void);
extern void func_022D30(void);
extern int func_0E29E0(void);
extern int func_0169D0(int a, int b);

void func_0246B8(void)
{
    int r;

    if (func_024940(7) != 0) {
        func_024A00();
    }
    if (D_001046A8 != 0) {
        int a;
        int b;
        int c;

        a = func_0E2118(0x2F0);
        b = func_0E2118(0x30A);
        c = func_0E2118(0x219);
        func_0B0B78(3, a, b, c);
        r = func_0B0680();
        if (r == 1) {
            D_001046A8 = 0;
            func_022D30();
            D_00104194->w_1C64 = 0;
            func_0E29E0();
            D_000FD58C = 0;
            func_0169D0(1, 1);
        } else if (r == 2) {
            D_00104194->flags_1940 &= ~0x800;
            D_001046A8 = 0;
        }
    } else if (D_001046A9 != 0) {
        int a;
        int b;

        a = func_0E2118(0x2F2);
        b = func_0E2118(0x1B7);
        func_0B0B78(1, a, b, 0);
        r = func_0B0680();
        if (r == 1) {
            D_001046A9 = 0;
            func_022D30();
            D_00104194->w_1C64 = 0;
            func_0E29E0();
            D_000FD58C = 0;
            func_0169D0(1, 1);
        }
    }
}
