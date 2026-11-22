/* LEVEL_17:0x027530 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_001955C8;
extern unsigned char D_001955C9;
extern struct Game *D_001950B4;
extern unsigned char D_0018E4A4;

extern int func_0277B8(int a);
extern void func_027878(void);
extern int func_10E8A8(int id);
extern void func_0C5B88(int a, int b, int c, int d);
extern int func_0C5690(void);
extern void func_025BA8(void);
extern int func_10F170(void);
extern int func_018598(int a, int b);

void func_027530(void)
{
    int r;

    if (func_0277B8(7) != 0) {
        func_027878();
    }
    if (D_001955C8 != 0) {
        int a;
        int b;
        int c;

        a = func_10E8A8(0x2F0);
        b = func_10E8A8(0x30A);
        c = func_10E8A8(0x219);
        func_0C5B88(3, a, b, c);
        r = func_0C5690();
        if (r == 1) {
            D_001955C8 = 0;
            func_025BA8();
            D_001950B4->w_1C64 = 0;
            func_10F170();
            D_0018E4A4 = 0;
            func_018598(1, 1);
        } else if (r == 2) {
            D_001950B4->flags_1940 &= ~0x800;
            D_001955C8 = 0;
        }
    } else if (D_001955C9 != 0) {
        int a;
        int b;

        a = func_10E8A8(0x2F2);
        b = func_10E8A8(0x1B7);
        func_0C5B88(1, a, b, 0);
        r = func_0C5690();
        if (r == 1) {
            D_001955C9 = 0;
            func_025BA8();
            D_001950B4->w_1C64 = 0;
            func_10F170();
            D_0018E4A4 = 0;
            func_018598(1, 1);
        }
    }
}
