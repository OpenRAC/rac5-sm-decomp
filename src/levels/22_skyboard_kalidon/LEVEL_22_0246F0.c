/* LEVEL_22:0x0246F0 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_00153818;
extern unsigned char D_00153819;
extern struct Game *D_0015332C;
extern unsigned char D_0014E79C;

extern int func_024988(int a);
extern void func_024A48(void);
extern int func_109980(int id);
extern void func_0C5490(int a, int b, int c, int d);
extern int func_0C4F98(void);
extern void func_022F98(void);
extern int func_10A260(void);
extern int func_016EC0(int a, int b);

void func_0246F0(void)
{
    int r;

    if (func_024988(7) != 0) {
        func_024A48();
    }
    if (D_00153818 != 0) {
        int a;
        int b;
        int c;

        a = func_109980(0x2F0);
        b = func_109980(0x30A);
        c = func_109980(0x219);
        func_0C5490(3, a, b, c);
        r = func_0C4F98();
        if (r == 1) {
            D_00153818 = 0;
            func_022F98();
            D_0015332C->w_1C64 = 0;
            func_10A260();
            D_0014E79C = 0;
            func_016EC0(1, 1);
        } else if (r == 2) {
            D_0015332C->flags_1940 &= ~0x800;
            D_00153818 = 0;
        }
    } else if (D_00153819 != 0) {
        int a;
        int b;

        a = func_109980(0x2F2);
        b = func_109980(0x1B7);
        func_0C5490(1, a, b, 0);
        r = func_0C4F98();
        if (r == 1) {
            D_00153819 = 0;
            func_022F98();
            D_0015332C->w_1C64 = 0;
            func_10A260();
            D_0014E79C = 0;
            func_016EC0(1, 1);
        }
    }
}
