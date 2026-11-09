/* LEVEL_17:0x0BE7C0 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

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

extern char D_0026BD20[];
extern unsigned int D_001A5A58;
extern int D_001A4944;
extern struct Env0CFB88 *D_001950B4;

int func_0C7030(int *set);
int func_0BE138(void);
int func_0BE118(struct Ctl0CFB88 *c);
void func_0BE790(void);
int func_0BE0D8(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_021A90(int h, int k);
int func_021A48(int x, int y);
void func_0BE448(void);
void func_0BE5D0(void);

void func_0BE7C0(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0C7030((int *)D_0026BD20);
    switch (D_001A5A58) {
    case 0:
        func_0BE138();
        break;
    case 1:
        if (c != 0) {
            if (func_0BE118(c) != 0) {
                func_0BE790();
            } else if (func_0BE0D8(c) != 0) {
                x = func_021A90(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_021A48(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_001950B4->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_001A4944 = m;
                }
                D_001A5A58 = 2;
            } else {
                func_0BE448();
            }
        } else {
            D_001A5A58 = 0;
        }
        break;
    case 2:
        func_0BE5D0();
        break;
    }
}
