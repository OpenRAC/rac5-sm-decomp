/* LEVEL_03:0x029F50 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_0020CB18;
extern unsigned char D_0020CB19;
extern struct Game *D_0020C62C;
extern unsigned char D_00207A9C;

extern int func_02A1E8(int a);
extern void func_02A2A8(void);
extern int func_130878(int id);
extern void func_0D6D38(int a, int b, int c, int d);
extern int func_0D6840(void);
extern void func_0287F8(void);
extern int func_131158(void);
extern int func_01A610(int a, int b);

void func_029F50(void)
{
    int r;

    if (func_02A1E8(7) != 0) {
        func_02A2A8();
    }
    if (D_0020CB18 != 0) {
        int a;
        int b;
        int c;

        a = func_130878(0x2F0);
        b = func_130878(0x30A);
        c = func_130878(0x219);
        func_0D6D38(3, a, b, c);
        r = func_0D6840();
        if (r == 1) {
            D_0020CB18 = 0;
            func_0287F8();
            D_0020C62C->w_1C64 = 0;
            func_131158();
            D_00207A9C = 0;
            func_01A610(1, 1);
        } else if (r == 2) {
            D_0020C62C->flags_1940 &= ~0x800;
            D_0020CB18 = 0;
        }
    } else if (D_0020CB19 != 0) {
        int a;
        int b;

        a = func_130878(0x2F2);
        b = func_130878(0x1B7);
        func_0D6D38(1, a, b, 0);
        r = func_0D6840();
        if (r == 1) {
            D_0020CB19 = 0;
            func_0287F8();
            D_0020C62C->w_1C64 = 0;
            func_131158();
            D_00207A9C = 0;
            func_01A610(1, 1);
        }
    }
}
