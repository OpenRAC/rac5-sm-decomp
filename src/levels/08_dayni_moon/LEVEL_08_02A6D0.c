/* LEVEL_08:0x02A6D0 -- placement copy of LEVEL_01_02A158.c: polls the two pending confirmation requests and applies the chosen answer: accept resets the request and the screen state, decline of the first one only clears its flag bit. */

struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_0023D018;
extern unsigned char D_0023D019;
extern struct Game *D_0023CB2C;
extern unsigned char D_00237F9C;

extern int func_02A968(int a);
extern void func_02AA28(void);
extern int func_1439E8(int id);
extern void func_0E1F10(int a, int b, int c, int d);
extern int func_0E1A18(void);
extern void func_028F78(void);
extern int func_1442C8(void);
extern int func_01B220(int a, int b);

void func_02A6D0(void)
{
    int r;

    if (func_02A968(7) != 0) {
        func_02AA28();
    }
    if (D_0023D018 != 0) {
        int a;
        int b;
        int c;

        a = func_1439E8(0x2F0);
        b = func_1439E8(0x30A);
        c = func_1439E8(0x219);
        func_0E1F10(3, a, b, c);
        r = func_0E1A18();
        if (r == 1) {
            D_0023D018 = 0;
            func_028F78();
            D_0023CB2C->w_1C64 = 0;
            func_1442C8();
            D_00237F9C = 0;
            func_01B220(1, 1);
        } else if (r == 2) {
            D_0023CB2C->flags_1940 &= ~0x800;
            D_0023D018 = 0;
        }
    } else if (D_0023D019 != 0) {
        int a;
        int b;

        a = func_1439E8(0x2F2);
        b = func_1439E8(0x1B7);
        func_0E1F10(1, a, b, 0);
        r = func_0E1A18();
        if (r == 1) {
            D_0023D019 = 0;
            func_028F78();
            D_0023CB2C->w_1C64 = 0;
            func_1442C8();
            D_00237F9C = 0;
            func_01B220(1, 1);
        }
    }
}
