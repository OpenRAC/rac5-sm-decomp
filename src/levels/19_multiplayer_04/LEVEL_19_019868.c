/* LEVEL_19:0x019868 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_0019C034;
extern unsigned int D_0019C008;
extern int D_0019C00C;
extern int D_0019C000;
extern unsigned char D_0019C038;
typedef struct {
    char *p;
} Hold;

extern Hold D_001A2C34;
extern Blk *D_001E0228;
extern void func_078D30(int a, int b);
extern void func_0949F8(int a, int b, int c, int d, int e, int f);
extern int func_094A30(int a);

int func_019868(void)
{
    int flag;

    flag = 0;
    func_078D30(0x200, 0x168);
    D_0019C034 = D_0019C034 - 1;
    if (D_0019C034 < 0) {
        D_0019C034 = -1;
        flag = 1;
    }
    if (flag) {
        func_0949F8(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_0019C008) {
    case 0:
        if (flag) {
            if (func_094A30(4)) {
                D_0019C008 = 1;
                D_0019C00C = 5;
            }
        }
        break;
    case 1:
        D_0019C00C = D_0019C00C - 1;
        if (D_0019C00C == 0) {
            D_0019C008 = 2;
        }
        break;
    case 2:
        if (D_0019C038 == 0) {
            D_0019C038 = 1;
            D_001E0228->w_04 = D_0019C000;
            D_001A2C34.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
