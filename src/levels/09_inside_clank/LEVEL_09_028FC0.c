/* LEVEL_09:0x028FC0 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_001DE298;
extern unsigned char D_001DE299;
extern struct Game *D_001DDDAC;
extern unsigned char D_001D921C;

extern int func_029258(int a);
extern void func_029318(void);
extern int func_12B448(int id);
extern void func_0D4200(int a, int b, int c, int d);
extern int func_0D3D08(void);
extern void func_027868(void);
extern int func_12BD28(void);
extern int func_019C98(int a, int b);

void func_028FC0(void)
{
    int r;

    if (func_029258(7) != 0) {
        func_029318();
    }
    if (D_001DE298 != 0) {
        int a;
        int b;
        int c;

        a = func_12B448(0x2F0);
        b = func_12B448(0x30A);
        c = func_12B448(0x219);
        func_0D4200(3, a, b, c);
        r = func_0D3D08();
        if (r == 1) {
            D_001DE298 = 0;
            func_027868();
            D_001DDDAC->w_1C64 = 0;
            func_12BD28();
            D_001D921C = 0;
            func_019C98(1, 1);
        } else if (r == 2) {
            D_001DDDAC->flags_1940 &= ~0x800;
            D_001DE298 = 0;
        }
    } else if (D_001DE299 != 0) {
        int a;
        int b;

        a = func_12B448(0x2F2);
        b = func_12B448(0x1B7);
        func_0D4200(1, a, b, 0);
        r = func_0D3D08();
        if (r == 1) {
            D_001DE299 = 0;
            func_027868();
            D_001DDDAC->w_1C64 = 0;
            func_12BD28();
            D_001D921C = 0;
            func_019C98(1, 1);
        }
    }
}
