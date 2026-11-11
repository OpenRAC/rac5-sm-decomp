/* LEVEL_21:0x0AA280 -- placement copy of LEVEL_01_0C9C38.c: when a block's two counters match and a check passes, runs a helper branch; then, if a flag byte is set and a pointer is non-null, calls a cleanup helper and clears the flag. */

extern char *D_00179528;

int func_0B7F60(void);
int func_09BA58(void);
int func_09B988(int a0);
int func_09B938(void);
int func_09BC00(void);
void func_016A10(int a0, int a1);
void func_028E30(int *a0);

struct Blk {
    unsigned char pad00[0x60];
    int w60;
    int w64;
};

struct Local {
    int *sum;
    unsigned char flag;
};

void func_0AA280(void)
{
    struct Local loc;
    char *base;
    struct Blk *blk;

    base = D_00179528;
    loc.sum = (int *)(base + 0x15140);
    blk = (struct Blk *)(base + 0x150D4);
    if (blk->w60 == blk->w64) {
        if (func_0B7F60() == 0) {
            if (func_09BA58() != 0) {
                if (func_09B988(1) == 0) {
                    func_09B938();
                }
            } else {
                func_016A10(func_09BC00(), 0);
            }
        }
    }
    if (loc.flag != 0) {
        if (loc.sum != 0) {
            func_028E30(loc.sum);
            loc.flag = 0;
        }
    }
}
