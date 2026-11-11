/* LEVEL_03:0x01B260 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_00207AAC;
extern unsigned int D_00207A80;
extern int D_00207A84;
extern int D_00207A78;
extern unsigned char D_00207AB0;
typedef struct {
    char *p;
} Hold;

extern Hold D_0020C62C;
extern Blk *D_0024C228;
extern void func_087188(int a, int b);
extern void func_0A5D80(int a, int b, int c, int d, int e, int f);
extern int func_0A5DB8(int a);

int func_01B260(void)
{
    int flag;

    flag = 0;
    func_087188(0x200, 0x168);
    D_00207AAC = D_00207AAC - 1;
    if (D_00207AAC < 0) {
        D_00207AAC = -1;
        flag = 1;
    }
    if (flag) {
        func_0A5D80(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_00207A80) {
    case 0:
        if (flag) {
            if (func_0A5DB8(4)) {
                D_00207A80 = 1;
                D_00207A84 = 5;
            }
        }
        break;
    case 1:
        D_00207A84 = D_00207A84 - 1;
        if (D_00207A84 == 0) {
            D_00207A80 = 2;
        }
        break;
    case 2:
        if (D_00207AB0 == 0) {
            D_00207AB0 = 1;
            D_0024C228->w_04 = D_00207A78;
            D_0020C62C.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
