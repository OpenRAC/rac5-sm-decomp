/* LEVEL_21:0x0B01C8 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

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

extern char D_002441E0[];
extern unsigned int D_00159228;
extern int D_00158114;
extern struct Env0CFB88 *D_00148C2C;

int func_0B8A38(int *set);
int func_0AFB40(void);
int func_0AFB20(struct Ctl0CFB88 *c);
void func_0B0198(void);
int func_0AFAE0(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_01E9D8(int h, int k);
int func_01E990(int x, int y);
void func_0AFE50(void);
void func_0AFFD8(void);

void func_0B01C8(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0B8A38((int *)D_002441E0);
    switch (D_00159228) {
    case 0:
        func_0AFB40();
        break;
    case 1:
        if (c != 0) {
            if (func_0AFB20(c) != 0) {
                func_0B0198();
            } else if (func_0AFAE0(c) != 0) {
                x = func_01E9D8(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_01E990(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_00148C2C->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_00158114 = m;
                }
                D_00159228 = 2;
            } else {
                func_0AFE50();
            }
        } else {
            D_00159228 = 0;
        }
        break;
    case 2:
        func_0AFFD8();
        break;
    }
}
