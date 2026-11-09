/* LEVEL_03:0x0C9A20 -- placement copy of LEVEL_01_0C9C38.c: when a block's two counters match and a check passes, runs a helper branch; then, if a flag byte is set and a pointer is non-null, calls a cleanup helper and clears the flag. */

extern char *D_0024C228;

int func_0D7708(void);
int func_0BB1F8(void);
int func_0BB128(int a0);
int func_0BB0D8(void);
int func_0BB3A0(void);
void func_01A590(int a0, int a1);
void func_02F698(int *a0);

struct Blk {
    unsigned char pad00[0x60];
    int w60;
    int w64;
};

struct Local {
    int *sum;
    unsigned char flag;
};

void func_0C9A20(void)
{
    struct Local loc;
    char *base;
    struct Blk *blk;

    base = D_0024C228;
    loc.sum = (int *)(base + 0x15140);
    blk = (struct Blk *)(base + 0x150D4);
    if (blk->w60 == blk->w64) {
        if (func_0D7708() == 0) {
            if (func_0BB1F8() != 0) {
                if (func_0BB128(1) == 0) {
                    func_0BB0D8();
                }
            } else {
                func_01A590(func_0BB3A0(), 0);
            }
        }
    }
    if (loc.flag != 0) {
        if (loc.sum != 0) {
            func_02F698(loc.sum);
            loc.flag = 0;
        }
    }
}
