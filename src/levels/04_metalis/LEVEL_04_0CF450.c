/* LEVEL_04:0x0CF450 -- placement copy of LEVEL_01_0C9C38.c: when a block's two counters match and a check passes, runs a helper branch; then, if a flag byte is set and a pointer is non-null, calls a cleanup helper and clears the flag. */

extern char *D_0024BBA8;

int func_0DD1E0(void);
int func_0C0BF0(void);
int func_0C0B20(int a0);
int func_0C0AD0(void);
int func_0C0D98(void);
void func_01A4A8(int a0, int a1);
void func_02F548(int *a0);

struct Blk {
    unsigned char pad00[0x60];
    int w60;
    int w64;
};

struct Local {
    int *sum;
    unsigned char flag;
};

void func_0CF450(void)
{
    struct Local loc;
    char *base;
    struct Blk *blk;

    base = D_0024BBA8;
    loc.sum = (int *)(base + 0x15140);
    blk = (struct Blk *)(base + 0x150D4);
    if (blk->w60 == blk->w64) {
        if (func_0DD1E0() == 0) {
            if (func_0C0BF0() != 0) {
                if (func_0C0B20(1) == 0) {
                    func_0C0AD0();
                }
            } else {
                func_01A4A8(func_0C0D98(), 0);
            }
        }
    }
    if (loc.flag != 0) {
        if (loc.sum != 0) {
            func_02F548(loc.sum);
            loc.flag = 0;
        }
    }
}
