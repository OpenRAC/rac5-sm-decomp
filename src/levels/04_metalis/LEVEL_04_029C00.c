/* LEVEL_04:0x029C00 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_0020D618;
extern unsigned char D_0020D619;
extern struct Game *D_0020D12C;
extern unsigned char D_0020859C;

extern int func_029E98(int a);
extern void func_029F58(void);
extern int func_13E930(int id);
extern void func_0DC800(int a, int b, int c, int d);
extern int func_0DC308(void);
extern void func_0284A8(void);
extern int func_13F210(void);
extern int func_01A528(int a, int b);

void func_029C00(void)
{
    int r;

    if (func_029E98(7) != 0) {
        func_029F58();
    }
    if (D_0020D618 != 0) {
        int a;
        int b;
        int c;

        a = func_13E930(0x2F0);
        b = func_13E930(0x30A);
        c = func_13E930(0x219);
        func_0DC800(3, a, b, c);
        r = func_0DC308();
        if (r == 1) {
            D_0020D618 = 0;
            func_0284A8();
            D_0020D12C->w_1C64 = 0;
            func_13F210();
            D_0020859C = 0;
            func_01A528(1, 1);
        } else if (r == 2) {
            D_0020D12C->flags_1940 &= ~0x800;
            D_0020D618 = 0;
        }
    } else if (D_0020D619 != 0) {
        int a;
        int b;

        a = func_13E930(0x2F2);
        b = func_13E930(0x1B7);
        func_0DC800(1, a, b, 0);
        r = func_0DC308();
        if (r == 1) {
            D_0020D619 = 0;
            func_0284A8();
            D_0020D12C->w_1C64 = 0;
            func_13F210();
            D_0020859C = 0;
            func_01A528(1, 1);
        }
    }
}
