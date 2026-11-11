/* LEVEL_10:0x01AB78 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_001F842C;
extern unsigned int D_001F8400;
extern int D_001F8404;
extern int D_001F83F8;
extern unsigned char D_001F8430;
typedef struct {
    char *p;
} Hold;

extern Hold D_001FCFAC;
extern Blk *D_0023A7A8;
extern void func_087698(int a, int b);
extern void func_0A7118(int a, int b, int c, int d, int e, int f);
extern int func_0A7150(int a);

int func_01AB78(void)
{
    int flag;

    flag = 0;
    func_087698(0x200, 0x168);
    D_001F842C = D_001F842C - 1;
    if (D_001F842C < 0) {
        D_001F842C = -1;
        flag = 1;
    }
    if (flag) {
        func_0A7118(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_001F8400) {
    case 0:
        if (flag) {
            if (func_0A7150(4)) {
                D_001F8400 = 1;
                D_001F8404 = 5;
            }
        }
        break;
    case 1:
        D_001F8404 = D_001F8404 - 1;
        if (D_001F8404 == 0) {
            D_001F8400 = 2;
        }
        break;
    case 2:
        if (D_001F8430 == 0) {
            D_001F8430 = 1;
            D_0023A7A8->w_04 = D_001F83F8;
            D_001FCFAC.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
