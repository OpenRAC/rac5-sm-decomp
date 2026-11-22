/* LEVEL_07:0x02A498 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_00208798;
extern unsigned char D_00208799;
extern struct Game *D_002082AC;
extern unsigned char D_0020371C;

extern int func_02A730(int a);
extern void func_02A7F0(void);
extern int func_1354B0(int id);
extern void func_0D8FB0(int a, int b, int c, int d);
extern int func_0D8AB8(void);
extern void func_028D40(void);
extern int func_135D90(void);
extern int func_01AF68(int a, int b);

void func_02A498(void)
{
    int r;

    if (func_02A730(7) != 0) {
        func_02A7F0();
    }
    if (D_00208798 != 0) {
        int a;
        int b;
        int c;

        a = func_1354B0(0x2F0);
        b = func_1354B0(0x30A);
        c = func_1354B0(0x219);
        func_0D8FB0(3, a, b, c);
        r = func_0D8AB8();
        if (r == 1) {
            D_00208798 = 0;
            func_028D40();
            D_002082AC->w_1C64 = 0;
            func_135D90();
            D_0020371C = 0;
            func_01AF68(1, 1);
        } else if (r == 2) {
            D_002082AC->flags_1940 &= ~0x800;
            D_00208798 = 0;
        }
    } else if (D_00208799 != 0) {
        int a;
        int b;

        a = func_1354B0(0x2F2);
        b = func_1354B0(0x1B7);
        func_0D8FB0(1, a, b, 0);
        r = func_0D8AB8();
        if (r == 1) {
            D_00208799 = 0;
            func_028D40();
            D_002082AC->w_1C64 = 0;
            func_135D90();
            D_0020371C = 0;
            func_01AF68(1, 1);
        }
    }
}
