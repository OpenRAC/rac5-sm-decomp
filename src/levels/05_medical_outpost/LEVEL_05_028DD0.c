/* LEVEL_05:0x028DD0 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_001E3818;
extern unsigned char D_001E3819;
extern struct Game *D_001E332C;
extern unsigned char D_001DE79C;

extern int func_029068(int a);
extern void func_029128(void);
extern int func_12DE28(int id);
extern void func_0D54F8(int a, int b, int c, int d);
extern int func_0D5000(void);
extern void func_027678(void);
extern int func_12E708(void);
extern int func_019E40(int a, int b);

void func_028DD0(void)
{
    int r;

    if (func_029068(7) != 0) {
        func_029128();
    }
    if (D_001E3818 != 0) {
        int a;
        int b;
        int c;

        a = func_12DE28(0x2F0);
        b = func_12DE28(0x30A);
        c = func_12DE28(0x219);
        func_0D54F8(3, a, b, c);
        r = func_0D5000();
        if (r == 1) {
            D_001E3818 = 0;
            func_027678();
            D_001E332C->w_1C64 = 0;
            func_12E708();
            D_001DE79C = 0;
            func_019E40(1, 1);
        } else if (r == 2) {
            D_001E332C->flags_1940 &= ~0x800;
            D_001E3818 = 0;
        }
    } else if (D_001E3819 != 0) {
        int a;
        int b;

        a = func_12DE28(0x2F2);
        b = func_12DE28(0x1B7);
        func_0D54F8(1, a, b, 0);
        r = func_0D5000();
        if (r == 1) {
            D_001E3819 = 0;
            func_027678();
            D_001E332C->w_1C64 = 0;
            func_12E708();
            D_001DE79C = 0;
            func_019E40(1, 1);
        }
    }
}
