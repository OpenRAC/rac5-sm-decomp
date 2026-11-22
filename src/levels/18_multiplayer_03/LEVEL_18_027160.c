/* LEVEL_18:0x027160 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_001A3448;
extern unsigned char D_001A3449;
extern struct Game *D_001A2F34;
extern unsigned char D_0019C324;

extern int func_0273E8(int a);
extern void func_0274A8(void);
extern int func_10DFE0(int id);
extern void func_0C5620(int a, int b, int c, int d);
extern int func_0C5128(void);
extern void func_0257D8(void);
extern int func_10E8A8(void);
extern int func_018260(int a, int b);

void func_027160(void)
{
    int r;

    if (func_0273E8(7) != 0) {
        func_0274A8();
    }
    if (D_001A3448 != 0) {
        int a;
        int b;
        int c;

        a = func_10DFE0(0x2F0);
        b = func_10DFE0(0x30A);
        c = func_10DFE0(0x219);
        func_0C5620(3, a, b, c);
        r = func_0C5128();
        if (r == 1) {
            D_001A3448 = 0;
            func_0257D8();
            D_001A2F34->w_1C64 = 0;
            func_10E8A8();
            D_0019C324 = 0;
            func_018260(1, 1);
        } else if (r == 2) {
            D_001A2F34->flags_1940 &= ~0x800;
            D_001A3448 = 0;
        }
    } else if (D_001A3449 != 0) {
        int a;
        int b;

        a = func_10DFE0(0x2F2);
        b = func_10DFE0(0x1B7);
        func_0C5620(1, a, b, 0);
        r = func_0C5128();
        if (r == 1) {
            D_001A3449 = 0;
            func_0257D8();
            D_001A2F34->w_1C64 = 0;
            func_10E8A8();
            D_0019C324 = 0;
            func_018260(1, 1);
        }
    }
}
