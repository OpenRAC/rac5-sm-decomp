/* LEVEL_06:0x0C4538 -- placement copy of LEVEL_01_0C9C38.c: when a block's two counters match and a check passes, runs a helper branch; then, if a flag byte is set and a pointer is non-null, calls a cleanup helper and clears the flag. */

extern char *D_0021E128;

int func_0D2220(void);
int func_0B5D10(void);
int func_0B5C40(int a0);
int func_0B5BF0(void);
int func_0B5EB8(void);
void func_019028(int a0, int a1);
void func_02DC88(int *a0);

struct Blk {
    unsigned char pad00[0x60];
    int w60;
    int w64;
};

struct Local {
    int *sum;
    unsigned char flag;
};

void func_0C4538(void)
{
    struct Local loc;
    char *base;
    struct Blk *blk;

    base = D_0021E128;
    loc.sum = (int *)(base + 0x15140);
    blk = (struct Blk *)(base + 0x150D4);
    if (blk->w60 == blk->w64) {
        if (func_0D2220() == 0) {
            if (func_0B5D10() != 0) {
                if (func_0B5C40(1) == 0) {
                    func_0B5BF0();
                }
            } else {
                func_019028(func_0B5EB8(), 0);
            }
        }
    }
    if (loc.flag != 0) {
        if (loc.sum != 0) {
            func_02DC88(loc.sum);
            loc.flag = 0;
        }
    }
}
