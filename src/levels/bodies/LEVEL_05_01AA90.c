/* LEVEL_05:0x01AA90 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_001DE7AC;
extern unsigned int D_001DE780;
extern int D_001DE784;
extern int D_001DE778;
extern unsigned char D_001DE7B0;
typedef struct {
    char *p;
} Hold;

extern Hold D_001E332C;
extern Blk *D_0021D0A8;
extern void func_084C88(int a, int b);
extern void func_0A45C0(int a, int b, int c, int d, int e, int f);
extern int func_0A45F8(int a);

int func_01AA90(void)
{
    int flag;

    flag = 0;
    func_084C88(0x200, 0x168);
    D_001DE7AC = D_001DE7AC - 1;
    if (D_001DE7AC < 0) {
        D_001DE7AC = -1;
        flag = 1;
    }
    if (flag) {
        func_0A45C0(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_001DE780) {
    case 0:
        if (flag) {
            if (func_0A45F8(4)) {
                D_001DE780 = 1;
                D_001DE784 = 5;
            }
        }
        break;
    case 1:
        D_001DE784 = D_001DE784 - 1;
        if (D_001DE784 == 0) {
            D_001DE780 = 2;
        }
        break;
    case 2:
        if (D_001DE7B0 == 0) {
            D_001DE7B0 = 1;
            D_0021D0A8->w_04 = D_001DE778;
            D_001E332C.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
