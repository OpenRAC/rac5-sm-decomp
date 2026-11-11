/* LEVEL_17:0x0194E8 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_0018E4B4;
extern unsigned int D_0018E488;
extern int D_0018E48C;
extern int D_0018E480;
extern unsigned char D_0018E4B8;
typedef struct {
    char *p;
} Hold;

extern Hold D_001950B4;
extern Blk *D_001D13A8;
extern void func_0792C0(int a, int b);
extern void func_094660(int a, int b, int c, int d, int e, int f);
extern int func_094698(int a);

int func_0194E8(void)
{
    int flag;

    flag = 0;
    func_0792C0(0x200, 0x168);
    D_0018E4B4 = D_0018E4B4 - 1;
    if (D_0018E4B4 < 0) {
        D_0018E4B4 = -1;
        flag = 1;
    }
    if (flag) {
        func_094660(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_0018E488) {
    case 0:
        if (flag) {
            if (func_094698(4)) {
                D_0018E488 = 1;
                D_0018E48C = 5;
            }
        }
        break;
    case 1:
        D_0018E48C = D_0018E48C - 1;
        if (D_0018E48C == 0) {
            D_0018E488 = 2;
        }
        break;
    case 2:
        if (D_0018E4B8 == 0) {
            D_0018E4B8 = 1;
            D_001D13A8->w_04 = D_0018E480;
            D_001950B4.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
