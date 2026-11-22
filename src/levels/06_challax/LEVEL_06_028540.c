/* LEVEL_06:0x028540 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_001E3398;
extern unsigned char D_001E3399;
extern struct Game *D_001E2EAC;
extern unsigned char D_001DE31C;

extern int func_0287D8(int a);
extern void func_028898(void);
extern int func_128B80(int id);
extern void func_0D1850(int a, int b, int c, int d);
extern int func_0D1358(void);
extern void func_026DE8(void);
extern int func_129460(void);
extern int func_0190A8(int a, int b);

void func_028540(void)
{
    int r;

    if (func_0287D8(7) != 0) {
        func_028898();
    }
    if (D_001E3398 != 0) {
        int a;
        int b;
        int c;

        a = func_128B80(0x2F0);
        b = func_128B80(0x30A);
        c = func_128B80(0x219);
        func_0D1850(3, a, b, c);
        r = func_0D1358();
        if (r == 1) {
            D_001E3398 = 0;
            func_026DE8();
            D_001E2EAC->w_1C64 = 0;
            func_129460();
            D_001DE31C = 0;
            func_0190A8(1, 1);
        } else if (r == 2) {
            D_001E2EAC->flags_1940 &= ~0x800;
            D_001E3398 = 0;
        }
    } else if (D_001E3399 != 0) {
        int a;
        int b;

        a = func_128B80(0x2F2);
        b = func_128B80(0x1B7);
        func_0D1850(1, a, b, 0);
        r = func_0D1358();
        if (r == 1) {
            D_001E3399 = 0;
            func_026DE8();
            D_001E2EAC->w_1C64 = 0;
            func_129460();
            D_001DE31C = 0;
            func_0190A8(1, 1);
        }
    }
}
