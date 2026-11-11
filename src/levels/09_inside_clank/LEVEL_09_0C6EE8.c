/* LEVEL_09:0x0C6EE8 -- placement copy of LEVEL_01_0C9C38.c: when a block's two counters match and a check passes, runs a helper branch; then, if a flag byte is set and a pointer is non-null, calls a cleanup helper and clears the flag. */

extern char *D_00218B28;

int func_0D4BD0(void);
int func_0B86C0(void);
int func_0B85F0(int a0);
int func_0B85A0(void);
int func_0B8868(void);
void func_019C18(int a0, int a1);
void func_02E708(int *a0);

struct Blk {
    unsigned char pad00[0x60];
    int w60;
    int w64;
};

struct Local {
    int *sum;
    unsigned char flag;
};

void func_0C6EE8(void)
{
    struct Local loc;
    char *base;
    struct Blk *blk;

    base = D_00218B28;
    loc.sum = (int *)(base + 0x15140);
    blk = (struct Blk *)(base + 0x150D4);
    if (blk->w60 == blk->w64) {
        if (func_0D4BD0() == 0) {
            if (func_0B86C0() != 0) {
                if (func_0B85F0(1) == 0) {
                    func_0B85A0();
                }
            } else {
                func_019C18(func_0B8868(), 0);
            }
        }
    }
    if (loc.flag != 0) {
        if (loc.sum != 0) {
            func_02E708(loc.sum);
            loc.flag = 0;
        }
    }
}
