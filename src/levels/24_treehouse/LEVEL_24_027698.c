/* LEVEL_24:0x027698 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_001C5118;
extern unsigned char D_001C5119;
extern struct Game *D_001C4C2C;
extern unsigned char D_001C009C;

extern int func_027930(int a);
extern void func_0279F0(void);
extern int func_127FB0(int id);
extern void func_0D08A8(int a, int b, int c, int d);
extern int func_0D03B0(void);
extern void func_025F40(void);
extern int func_128890(void);
extern int func_018E98(int a, int b);

void func_027698(void)
{
    int r;

    if (func_027930(7) != 0) {
        func_0279F0();
    }
    if (D_001C5118 != 0) {
        int a;
        int b;
        int c;

        a = func_127FB0(0x2F0);
        b = func_127FB0(0x30A);
        c = func_127FB0(0x219);
        func_0D08A8(3, a, b, c);
        r = func_0D03B0();
        if (r == 1) {
            D_001C5118 = 0;
            func_025F40();
            D_001C4C2C->w_1C64 = 0;
            func_128890();
            D_001C009C = 0;
            func_018E98(1, 1);
        } else if (r == 2) {
            D_001C4C2C->flags_1940 &= ~0x800;
            D_001C5118 = 0;
        }
    } else if (D_001C5119 != 0) {
        int a;
        int b;

        a = func_127FB0(0x2F2);
        b = func_127FB0(0x1B7);
        func_0D08A8(1, a, b, 0);
        r = func_0D03B0();
        if (r == 1) {
            D_001C5119 = 0;
            func_025F40();
            D_001C4C2C->w_1C64 = 0;
            func_128890();
            D_001C009C = 0;
            func_018E98(1, 1);
        }
    }
}
