/* LEVEL_23:0x027CC8 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_001C7898;
extern unsigned char D_001C7899;
extern struct Game *D_001C73AC;
extern unsigned char D_001C281C;

extern int func_027F60(int a);
extern void func_028020(void);
extern int func_123C28(int id);
extern void func_0CDD80(int a, int b, int c, int d);
extern int func_0CD888(void);
extern void func_026570(void);
extern int func_124508(void);
extern int func_0193B8(int a, int b);

void func_027CC8(void)
{
    int r;

    if (func_027F60(7) != 0) {
        func_028020();
    }
    if (D_001C7898 != 0) {
        int a;
        int b;
        int c;

        a = func_123C28(0x2F0);
        b = func_123C28(0x30A);
        c = func_123C28(0x219);
        func_0CDD80(3, a, b, c);
        r = func_0CD888();
        if (r == 1) {
            D_001C7898 = 0;
            func_026570();
            D_001C73AC->w_1C64 = 0;
            func_124508();
            D_001C281C = 0;
            func_0193B8(1, 1);
        } else if (r == 2) {
            D_001C73AC->flags_1940 &= ~0x800;
            D_001C7898 = 0;
        }
    } else if (D_001C7899 != 0) {
        int a;
        int b;

        a = func_123C28(0x2F2);
        b = func_123C28(0x1B7);
        func_0CDD80(1, a, b, 0);
        r = func_0CD888();
        if (r == 1) {
            D_001C7899 = 0;
            func_026570();
            D_001C73AC->w_1C64 = 0;
            func_124508();
            D_001C281C = 0;
            func_0193B8(1, 1);
        }
    }
}
