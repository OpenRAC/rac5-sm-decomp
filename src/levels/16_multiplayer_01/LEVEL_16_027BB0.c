/* LEVEL_16:0x027BB0 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_001A1FC8;
extern unsigned char D_001A1FC9;
extern struct Game *D_001A1AB4;
extern unsigned char D_0019AEA4;

extern int func_027E38(int a);
extern void func_027EF8(void);
extern int func_10F330(int id);
extern void func_0C6648(int a, int b, int c, int d);
extern int func_0C6150(void);
extern void func_026228(void);
extern int func_10FBF8(void);
extern int func_018C18(int a, int b);

void func_027BB0(void)
{
    int r;

    if (func_027E38(7) != 0) {
        func_027EF8();
    }
    if (D_001A1FC8 != 0) {
        int a;
        int b;
        int c;

        a = func_10F330(0x2F0);
        b = func_10F330(0x30A);
        c = func_10F330(0x219);
        func_0C6648(3, a, b, c);
        r = func_0C6150();
        if (r == 1) {
            D_001A1FC8 = 0;
            func_026228();
            D_001A1AB4->w_1C64 = 0;
            func_10FBF8();
            D_0019AEA4 = 0;
            func_018C18(1, 1);
        } else if (r == 2) {
            D_001A1AB4->flags_1940 &= ~0x800;
            D_001A1FC8 = 0;
        }
    } else if (D_001A1FC9 != 0) {
        int a;
        int b;

        a = func_10F330(0x2F2);
        b = func_10F330(0x1B7);
        func_0C6648(1, a, b, 0);
        r = func_0C6150();
        if (r == 1) {
            D_001A1FC9 = 0;
            func_026228();
            D_001A1AB4->w_1C64 = 0;
            func_10FBF8();
            D_0019AEA4 = 0;
            func_018C18(1, 1);
        }
    }
}
