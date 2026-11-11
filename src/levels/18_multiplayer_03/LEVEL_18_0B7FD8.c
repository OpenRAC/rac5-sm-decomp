/* LEVEL_18:0x0B7FD8 -- placement copy of LEVEL_01_0C9C38.c: when a block's two counters match and a check passes, runs a helper branch; then, if a flag byte is set and a pointer is non-null, calls a cleanup helper and clears the flag. */

extern char *D_001E0428;

int func_0C5FF0(void);
int func_0A9438(void);
int func_0A9368(int a0);
int func_0A9318(void);
int func_0A95E0(void);
void func_0181E0(int a0, int a1);
void func_02CD08(int *a0);

struct Blk {
    unsigned char pad00[0x60];
    int w60;
    int w64;
};

struct Local {
    int *sum;
    unsigned char flag;
};

void func_0B7FD8(void)
{
    struct Local loc;
    char *base;
    struct Blk *blk;

    base = D_001E0428;
    loc.sum = (int *)(base + 0x15140);
    blk = (struct Blk *)(base + 0x150D4);
    if (blk->w60 == blk->w64) {
        if (func_0C5FF0() == 0) {
            if (func_0A9438() != 0) {
                if (func_0A9368(1) == 0) {
                    func_0A9318();
                }
            } else {
                func_0181E0(func_0A95E0(), 0);
            }
        }
    }
    if (loc.flag != 0) {
        if (loc.sum != 0) {
            func_02CD08(loc.sum);
            loc.flag = 0;
        }
    }
}
