/* LEVEL_22:0x017B10 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_0014E7AC;
extern unsigned int D_0014E780;
extern int D_0014E784;
extern int D_0014E778;
extern unsigned char D_0014E7B0;
typedef struct {
    char *p;
} Hold;

extern Hold D_0015332C;
extern Blk *D_00182FA8;
extern void func_078748(int a, int b);
extern void func_0945E0(int a, int b, int c, int d, int e, int f);
extern int func_094618(int a);

int func_017B10(void)
{
    int flag;

    flag = 0;
    func_078748(0x200, 0x168);
    D_0014E7AC = D_0014E7AC - 1;
    if (D_0014E7AC < 0) {
        D_0014E7AC = -1;
        flag = 1;
    }
    if (flag) {
        func_0945E0(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_0014E780) {
    case 0:
        if (flag) {
            if (func_094618(4)) {
                D_0014E780 = 1;
                D_0014E784 = 5;
            }
        }
        break;
    case 1:
        D_0014E784 = D_0014E784 - 1;
        if (D_0014E784 == 0) {
            D_0014E780 = 2;
        }
        break;
    case 2:
        if (D_0014E7B0 == 0) {
            D_0014E7B0 = 1;
            D_00182FA8->w_04 = D_0014E778;
            D_0015332C.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
