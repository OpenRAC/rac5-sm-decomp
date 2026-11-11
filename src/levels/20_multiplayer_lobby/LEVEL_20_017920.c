/* LEVEL_20:0x017920 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_000FD59C;
extern unsigned int D_000FD570;
extern int D_000FD574;
extern int D_000FD568;
extern unsigned char D_000FD5A0;
typedef struct {
    char *p;
} Hold;

extern Hold D_00104194;
extern Blk *D_00137A28;
extern void func_0664B8(int a, int b);
extern void func_07F860(int a, int b, int c, int d, int e, int f);
extern int func_07F898(int a);

int func_017920(void)
{
    int flag;

    flag = 0;
    func_0664B8(0x200, 0x168);
    D_000FD59C = D_000FD59C - 1;
    if (D_000FD59C < 0) {
        D_000FD59C = -1;
        flag = 1;
    }
    if (flag) {
        func_07F860(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_000FD570) {
    case 0:
        if (flag) {
            if (func_07F898(4)) {
                D_000FD570 = 1;
                D_000FD574 = 5;
            }
        }
        break;
    case 1:
        D_000FD574 = D_000FD574 - 1;
        if (D_000FD574 == 0) {
            D_000FD570 = 2;
        }
        break;
    case 2:
        if (D_000FD5A0 == 0) {
            D_000FD5A0 = 1;
            D_00137A28->w_04 = D_000FD568;
            D_00104194.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
