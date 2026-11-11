/* LEVEL_20:0x0A3530 -- placement copy of LEVEL_01_0C9C38.c: when a block's two counters match and a check passes, runs a helper branch; then, if a flag byte is set and a pointer is non-null, calls a cleanup helper and clears the flag. */

extern char *D_00137A28;

int func_0B1548(void);
int func_094990(void);
int func_0948C0(int a0);
int func_094870(void);
int func_094B38(void);
void func_016950(int a0, int a1);
void func_02A260(int *a0);

struct Blk {
    unsigned char pad00[0x60];
    int w60;
    int w64;
};

struct Local {
    int *sum;
    unsigned char flag;
};

void func_0A3530(void)
{
    struct Local loc;
    char *base;
    struct Blk *blk;

    base = D_00137A28;
    loc.sum = (int *)(base + 0x15140);
    blk = (struct Blk *)(base + 0x150D4);
    if (blk->w60 == blk->w64) {
        if (func_0B1548() == 0) {
            if (func_094990() != 0) {
                if (func_0948C0(1) == 0) {
                    func_094870();
                }
            } else {
                func_016950(func_094B38(), 0);
            }
        }
    }
    if (loc.flag != 0) {
        if (loc.sum != 0) {
            func_02A260(loc.sum);
            loc.flag = 0;
        }
    }
}
