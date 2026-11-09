/* LEVEL_10:0x0CB078 -- placement copy of LEVEL_01_0C9C38.c: when a block's two counters match and a check passes, runs a helper branch; then, if a flag byte is set and a pointer is non-null, calls a cleanup helper and clears the flag. */

extern char *D_0023A7A8;

int func_0D8D60(void);
int func_0BC758(void);
int func_0BC688(int a0);
int func_0BC638(void);
int func_0BC900(void);
void func_019EA8(int a0, int a1);
void func_02F730(int *a0);

struct Blk {
    unsigned char pad00[0x60];
    int w60;
    int w64;
};

struct Local {
    int *sum;
    unsigned char flag;
};

void func_0CB078(void)
{
    struct Local loc;
    char *base;
    struct Blk *blk;

    base = D_0023A7A8;
    loc.sum = (int *)(base + 0x15140);
    blk = (struct Blk *)(base + 0x150D4);
    if (blk->w60 == blk->w64) {
        if (func_0D8D60() == 0) {
            if (func_0BC758() != 0) {
                if (func_0BC688(1) == 0) {
                    func_0BC638();
                }
            } else {
                func_019EA8(func_0BC900(), 0);
            }
        }
    }
    if (loc.flag != 0) {
        if (loc.sum != 0) {
            func_02F730(loc.sum);
            loc.flag = 0;
        }
    }
}
