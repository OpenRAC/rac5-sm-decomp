/* FRONTEND:0x002020 -- per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_00027E54;
extern unsigned int D_00027E38;
extern int D_00027E3C;
extern int D_00027E30;
extern unsigned char D_00027E58;
typedef struct {
    char *p;
} Hold;

extern Hold D_00027E9C;
extern Blk *D_0010BE50;
extern void func_004BA8(int a, int b);
extern void func_00AB70(int a, int b, int c, int d, int e, int f);
extern int func_00ABA8(int a);

int func_002020(void)
{
    int flag;

    flag = 0;
    func_004BA8(0x200, 0x168);
    D_00027E54 = D_00027E54 - 1;
    if (D_00027E54 < 0) {
        D_00027E54 = -1;
        flag = 1;
    }
    if (flag) {
        func_00AB70(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_00027E38) {
    case 0:
        if (flag) {
            if (func_00ABA8(4)) {
                D_00027E38 = 1;
                D_00027E3C = 5;
            }
        }
        break;
    case 1:
        D_00027E3C = D_00027E3C - 1;
        if (D_00027E3C == 0) {
            D_00027E38 = 2;
        }
        break;
    case 2:
        if (D_00027E58 == 0) {
            D_00027E58 = 1;
            D_0010BE50->w_04 = D_00027E30;
            D_00027E9C.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
