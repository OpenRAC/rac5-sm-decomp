/* LEVEL_21:0x0176E0 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_00144094;
extern unsigned int D_00144068;
extern int D_0014406C;
extern int D_00144060;
extern unsigned char D_00144098;
typedef struct {
    char *p;
} Hold;

extern Hold D_00148C2C;
extern Blk *D_00179528;
extern void func_06BA10(int a, int b);
extern void func_0868C8(int a, int b, int c, int d, int e, int f);
extern int func_086900(int a);

int func_0176E0(void)
{
    int flag;

    flag = 0;
    func_06BA10(0x200, 0x168);
    D_00144094 = D_00144094 - 1;
    if (D_00144094 < 0) {
        D_00144094 = -1;
        flag = 1;
    }
    if (flag) {
        func_0868C8(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_00144068) {
    case 0:
        if (flag) {
            if (func_086900(4)) {
                D_00144068 = 1;
                D_0014406C = 5;
            }
        }
        break;
    case 1:
        D_0014406C = D_0014406C - 1;
        if (D_0014406C == 0) {
            D_00144068 = 2;
        }
        break;
    case 2:
        if (D_00144098 == 0) {
            D_00144098 = 1;
            D_00179528->w_04 = D_00144060;
            D_00148C2C.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
