/* LEVEL_21:0x023930 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_00149118;
extern unsigned char D_00149119;
extern struct Game *D_00148C2C;
extern unsigned char D_00144084;

extern int func_023BC8(int a);
extern void func_023C88(void);
extern int func_0F1378(int id);
extern void func_0B7590(int a, int b, int c, int d);
extern int func_0B7098(void);
extern void func_0225B8(void);
extern int func_0F1C58(void);
extern int func_016A90(int a, int b);

void func_023930(void)
{
    int r;

    if (func_023BC8(7) != 0) {
        func_023C88();
    }
    if (D_00149118 != 0) {
        int a;
        int b;
        int c;

        a = func_0F1378(0x2F0);
        b = func_0F1378(0x30A);
        c = func_0F1378(0x219);
        func_0B7590(3, a, b, c);
        r = func_0B7098();
        if (r == 1) {
            D_00149118 = 0;
            func_0225B8();
            D_00148C2C->w_1C64 = 0;
            func_0F1C58();
            D_00144084 = 0;
            func_016A90(1, 1);
        } else if (r == 2) {
            D_00148C2C->flags_1940 &= ~0x800;
            D_00149118 = 0;
        }
    } else if (D_00149119 != 0) {
        int a;
        int b;

        a = func_0F1378(0x2F2);
        b = func_0F1378(0x1B7);
        func_0B7590(1, a, b, 0);
        r = func_0B7098();
        if (r == 1) {
            D_00149119 = 0;
            func_0225B8();
            D_00148C2C->w_1C64 = 0;
            func_0F1C58();
            D_00144084 = 0;
            func_016A90(1, 1);
        }
    }
}
