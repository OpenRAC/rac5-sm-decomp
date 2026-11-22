/* LEVEL_19:0x027758 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_001A3148;
extern unsigned char D_001A3149;
extern struct Game *D_001A2C34;
extern unsigned char D_0019C024;

extern int func_0279E0(int a);
extern void func_027AA0(void);
extern int func_10F9D0(int id);
extern void func_0C5F20(int a, int b, int c, int d);
extern int func_0C5A28(void);
extern void func_025DD0(void);
extern int func_110298(void);
extern int func_018918(int a, int b);

void func_027758(void)
{
    int r;

    if (func_0279E0(7) != 0) {
        func_027AA0();
    }
    if (D_001A3148 != 0) {
        int a;
        int b;
        int c;

        a = func_10F9D0(0x2F0);
        b = func_10F9D0(0x30A);
        c = func_10F9D0(0x219);
        func_0C5F20(3, a, b, c);
        r = func_0C5A28();
        if (r == 1) {
            D_001A3148 = 0;
            func_025DD0();
            D_001A2C34->w_1C64 = 0;
            func_110298();
            D_0019C024 = 0;
            func_018918(1, 1);
        } else if (r == 2) {
            D_001A2C34->flags_1940 &= ~0x800;
            D_001A3148 = 0;
        }
    } else if (D_001A3149 != 0) {
        int a;
        int b;

        a = func_10F9D0(0x2F2);
        b = func_10F9D0(0x1B7);
        func_0C5F20(1, a, b, 0);
        r = func_0C5A28();
        if (r == 1) {
            D_001A3149 = 0;
            func_025DD0();
            D_001A2C34->w_1C64 = 0;
            func_110298();
            D_0019C024 = 0;
            func_018918(1, 1);
        }
    }
}
