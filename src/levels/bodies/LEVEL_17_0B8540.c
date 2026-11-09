/* LEVEL_17:0x0B8540 -- placement copy of LEVEL_01_0C9C38.c: when a block's two counters match and a check passes, runs a helper branch; then, if a flag byte is set and a pointer is non-null, calls a cleanup helper and clears the flag. */

extern char *D_001D13A8;

int func_0C6558(void);
int func_0A99A0(void);
int func_0A98D0(int a0);
int func_0A9880(void);
int func_0A9B48(void);
void func_018518(int a0, int a1);
void func_02D0D8(int *a0);

struct Blk {
    unsigned char pad00[0x60];
    int w60;
    int w64;
};

struct Local {
    int *sum;
    unsigned char flag;
};

void func_0B8540(void)
{
    struct Local loc;
    char *base;
    struct Blk *blk;

    base = D_001D13A8;
    loc.sum = (int *)(base + 0x15140);
    blk = (struct Blk *)(base + 0x150D4);
    if (blk->w60 == blk->w64) {
        if (func_0C6558() == 0) {
            if (func_0A99A0() != 0) {
                if (func_0A98D0(1) == 0) {
                    func_0A9880();
                }
            } else {
                func_018518(func_0A9B48(), 0);
            }
        }
    }
    if (loc.flag != 0) {
        if (loc.sum != 0) {
            func_02D0D8(loc.sum);
            loc.flag = 0;
        }
    }
}
