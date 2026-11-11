/* LEVEL_10:0x0D0FC8 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

struct Ctl0CFB88 {
    char pad_00[0x0C];
    unsigned int d_0C;
    char pad_10[0x04];
    int h_14;
};
struct Ea0CFB88 {
    char pad_00[0x38];
    int v_38;
};
struct Eb0CFB88 {
    char pad_00[0x40];
    int v_40;
};
struct Env0CFB88 {
    char pad_00[0x1C68];
    unsigned int n_1C68;
};

extern char D_00335DA0[];
extern unsigned int D_0020D5A8;
extern int D_0020C494;
extern struct Env0CFB88 *D_001FCFAC;

int func_0D9838(int *set);
int func_0D0940(void);
int func_0D0920(struct Ctl0CFB88 *c);
void func_0D0F98(void);
int func_0D08E0(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_023FD8(int h, int k);
int func_023F90(int x, int y);
void func_0D0C50(void);
void func_0D0DD8(void);

void func_0D0FC8(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0D9838((int *)D_00335DA0);
    switch (D_0020D5A8) {
    case 0:
        func_0D0940();
        break;
    case 1:
        if (c != 0) {
            if (func_0D0920(c) != 0) {
                func_0D0F98();
            } else if (func_0D08E0(c) != 0) {
                x = func_023FD8(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_023F90(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_001FCFAC->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_0020C494 = m;
                }
                D_0020D5A8 = 2;
            } else {
                func_0D0C50();
            }
        } else {
            D_0020D5A8 = 0;
        }
        break;
    case 2:
        func_0D0DD8();
        break;
    }
}
