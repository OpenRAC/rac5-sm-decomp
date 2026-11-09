/* LEVEL_05:0x0C81E0 -- placement copy of LEVEL_01_0C9C38.c: when a block's two counters match and a check passes, runs a helper branch; then, if a flag byte is set and a pointer is non-null, calls a cleanup helper and clears the flag. */

extern char *D_0021D0A8;

int func_0D5EC8(void);
int func_0B99B8(void);
int func_0B98E8(int a0);
int func_0B9898(void);
int func_0B9B60(void);
void func_019DC0(int a0, int a1);
void func_02E560(int *a0);

struct Blk {
    unsigned char pad00[0x60];
    int w60;
    int w64;
};

struct Local {
    int *sum;
    unsigned char flag;
};

void func_0C81E0(void)
{
    struct Local loc;
    char *base;
    struct Blk *blk;

    base = D_0021D0A8;
    loc.sum = (int *)(base + 0x15140);
    blk = (struct Blk *)(base + 0x150D4);
    if (blk->w60 == blk->w64) {
        if (func_0D5EC8() == 0) {
            if (func_0B99B8() != 0) {
                if (func_0B98E8(1) == 0) {
                    func_0B9898();
                }
            } else {
                func_019DC0(func_0B9B60(), 0);
            }
        }
    }
    if (loc.flag != 0) {
        if (loc.sum != 0) {
            func_02E560(loc.sum);
            loc.flag = 0;
        }
    }
}
