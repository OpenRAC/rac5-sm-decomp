/* LEVEL_02:0x02A920 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_00209118;
extern unsigned char D_00209119;
extern struct Game *D_00208C2C;
extern unsigned char D_0020409C;

extern int func_02ABB8(int a);
extern void func_02AC78(void);
extern int func_138860(int id);
extern void func_0DD8E0(int a, int b, int c, int d);
extern int func_0DD3E8(void);
extern void func_0291C8(void);
extern int func_139140(void);
extern int func_01B208(int a, int b);

void func_02A920(void)
{
    int r;

    if (func_02ABB8(7) != 0) {
        func_02AC78();
    }
    if (D_00209118 != 0) {
        int a;
        int b;
        int c;

        a = func_138860(0x2F0);
        b = func_138860(0x30A);
        c = func_138860(0x219);
        func_0DD8E0(3, a, b, c);
        r = func_0DD3E8();
        if (r == 1) {
            D_00209118 = 0;
            func_0291C8();
            D_00208C2C->w_1C64 = 0;
            func_139140();
            D_0020409C = 0;
            func_01B208(1, 1);
        } else if (r == 2) {
            D_00208C2C->flags_1940 &= ~0x800;
            D_00209118 = 0;
        }
    } else if (D_00209119 != 0) {
        int a;
        int b;

        a = func_138860(0x2F2);
        b = func_138860(0x1B7);
        func_0DD8E0(1, a, b, 0);
        r = func_0DD3E8();
        if (r == 1) {
            D_00209119 = 0;
            func_0291C8();
            D_00208C2C->w_1C64 = 0;
            func_139140();
            D_0020409C = 0;
            func_01B208(1, 1);
        }
    }
}
