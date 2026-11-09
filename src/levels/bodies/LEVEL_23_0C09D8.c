/* LEVEL_23:0x0C09D8 -- placement copy of LEVEL_01_0C9C38.c: when a block's two counters match and a check passes, runs a helper branch; then, if a flag byte is set and a pointer is non-null, calls a cleanup helper and clears the flag. */

extern char *D_001FE828;

int func_0CE750(void);
int func_0B21A8(void);
int func_0B20D8(int a0);
int func_0B2088(void);
int func_0B2350(void);
void func_019338(int a0, int a1);
void func_02D230(int *a0);

struct Blk {
    unsigned char pad00[0x60];
    int w60;
    int w64;
};

struct Local {
    int *sum;
    unsigned char flag;
};

void func_0C09D8(void)
{
    struct Local loc;
    char *base;
    struct Blk *blk;

    base = D_001FE828;
    loc.sum = (int *)(base + 0x15140);
    blk = (struct Blk *)(base + 0x150D4);
    if (blk->w60 == blk->w64) {
        if (func_0CE750() == 0) {
            if (func_0B21A8() != 0) {
                if (func_0B20D8(1) == 0) {
                    func_0B2088();
                }
            } else {
                func_019338(func_0B2350(), 0);
            }
        }
    }
    if (loc.flag != 0) {
        if (loc.sum != 0) {
            func_02D230(loc.sum);
            loc.flag = 0;
        }
    }
}
