/* LEVEL_19:0x0BEB58 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

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

extern char D_0027ABA0[];
extern unsigned int D_001B35D8;
extern int D_001B24C4;
extern struct Env0CFB88 *D_001A2C34;

int func_0C73C8(int *set);
int func_0BE4D0(void);
int func_0BE4B0(struct Ctl0CFB88 *c);
void func_0BEB28(void);
int func_0BE470(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_021D50(int h, int k);
int func_021D08(int x, int y);
void func_0BE7E0(void);
void func_0BE968(void);

void func_0BEB58(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0C73C8((int *)D_0027ABA0);
    switch (D_001B35D8) {
    case 0:
        func_0BE4D0();
        break;
    case 1:
        if (c != 0) {
            if (func_0BE4B0(c) != 0) {
                func_0BEB28();
            } else if (func_0BE470(c) != 0) {
                x = func_021D50(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_021D08(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_001A2C34->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_001B24C4 = m;
                }
                D_001B35D8 = 2;
            } else {
                func_0BE7E0();
            }
        } else {
            D_001B35D8 = 0;
        }
        break;
    case 2:
        func_0BE968();
        break;
    }
}
