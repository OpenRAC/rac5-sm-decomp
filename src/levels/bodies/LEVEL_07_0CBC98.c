/* LEVEL_07:0x0CBC98 -- placement copy of LEVEL_01_0C9C38.c: when a block's two counters match and a check passes, runs a helper branch; then, if a flag byte is set and a pointer is non-null, calls a cleanup helper and clears the flag. */

extern char *D_00246CA8;

int func_0D9980(void);
int func_0BD470(void);
int func_0BD3A0(int a0);
int func_0BD350(void);
int func_0BD618(void);
void func_01AEE8(int a0, int a1);
void func_02FBE0(int *a0);

struct Blk {
    unsigned char pad00[0x60];
    int w60;
    int w64;
};

struct Local {
    int *sum;
    unsigned char flag;
};

void func_0CBC98(void)
{
    struct Local loc;
    char *base;
    struct Blk *blk;

    base = D_00246CA8;
    loc.sum = (int *)(base + 0x15140);
    blk = (struct Blk *)(base + 0x150D4);
    if (blk->w60 == blk->w64) {
        if (func_0D9980() == 0) {
            if (func_0BD470() != 0) {
                if (func_0BD3A0(1) == 0) {
                    func_0BD350();
                }
            } else {
                func_01AEE8(func_0BD618(), 0);
            }
        }
    }
    if (loc.flag != 0) {
        if (loc.sum != 0) {
            func_02FBE0(loc.sum);
            loc.flag = 0;
        }
    }
}
