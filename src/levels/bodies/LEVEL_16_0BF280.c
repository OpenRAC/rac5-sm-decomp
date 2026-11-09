/* LEVEL_16:0x0BF280 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

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

extern char D_0027AA20[];
extern unsigned int D_001B2458;
extern int D_001B1344;
extern struct Env0CFB88 *D_001A1AB4;

int func_0C7AF0(int *set);
int func_0BEBF8(void);
int func_0BEBD8(struct Ctl0CFB88 *c);
void func_0BF250(void);
int func_0BEB98(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_022110(int h, int k);
int func_0220C8(int x, int y);
void func_0BEF08(void);
void func_0BF090(void);

void func_0BF280(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0C7AF0((int *)D_0027AA20);
    switch (D_001B2458) {
    case 0:
        func_0BEBF8();
        break;
    case 1:
        if (c != 0) {
            if (func_0BEBD8(c) != 0) {
                func_0BF250();
            } else if (func_0BEB98(c) != 0) {
                x = func_022110(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_0220C8(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_001A1AB4->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_001B1344 = m;
                }
                D_001B2458 = 2;
            } else {
                func_0BEF08();
            }
        } else {
            D_001B2458 = 0;
        }
        break;
    case 2:
        func_0BF090();
        break;
    }
}
