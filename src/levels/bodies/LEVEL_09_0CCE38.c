/* LEVEL_09:0x0CCE38 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

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

extern char D_00314120[];
extern unsigned int D_001EE3A8;
extern int D_001ED294;
extern struct Env0CFB88 *D_001DDDAC;

int func_0D56A8(int *set);
int func_0CC7B0(void);
int func_0CC790(struct Ctl0CFB88 *c);
void func_0CCE08(void);
int func_0CC750(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_023968(int h, int k);
int func_023920(int x, int y);
void func_0CCAC0(void);
void func_0CCC48(void);

void func_0CCE38(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0D56A8((int *)D_00314120);
    switch (D_001EE3A8) {
    case 0:
        func_0CC7B0();
        break;
    case 1:
        if (c != 0) {
            if (func_0CC790(c) != 0) {
                func_0CCE08();
            } else if (func_0CC750(c) != 0) {
                x = func_023968(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_023920(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_001DDDAC->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_001ED294 = m;
                }
                D_001EE3A8 = 2;
            } else {
                func_0CCAC0();
            }
        } else {
            D_001EE3A8 = 0;
        }
        break;
    case 2:
        func_0CCC48();
        break;
    }
}
