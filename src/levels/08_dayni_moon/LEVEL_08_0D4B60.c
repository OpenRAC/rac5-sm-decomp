/* LEVEL_08:0x0D4B60 -- placement copy of LEVEL_01_0C9C38.c: when a block's two counters match and a check passes, runs a helper branch; then, if a flag byte is set and a pointer is non-null, calls a cleanup helper and clears the flag. */

extern char *D_00280628;

int func_0E28F0(void);
int func_0C6300(void);
int func_0C6230(int a0);
int func_0C61E0(void);
int func_0C64A8(void);
void func_01B1A0(int a0, int a1);
void func_030020(int *a0);

struct Blk {
    unsigned char pad00[0x60];
    int w60;
    int w64;
};

struct Local {
    int *sum;
    unsigned char flag;
};

void func_0D4B60(void)
{
    struct Local loc;
    char *base;
    struct Blk *blk;

    base = D_00280628;
    loc.sum = (int *)(base + 0x15140);
    blk = (struct Blk *)(base + 0x150D4);
    if (blk->w60 == blk->w64) {
        if (func_0E28F0() == 0) {
            if (func_0C6300() != 0) {
                if (func_0C6230(1) == 0) {
                    func_0C61E0();
                }
            } else {
                func_01B1A0(func_0C64A8(), 0);
            }
        }
    }
    if (loc.flag != 0) {
        if (loc.sum != 0) {
            func_030020(loc.sum);
            loc.flag = 0;
        }
    }
}
