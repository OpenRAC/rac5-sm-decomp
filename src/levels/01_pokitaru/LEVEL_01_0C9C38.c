/* LEVEL_01:0x0C9C38 -- when a block's two counters match and a check passes, runs a helper branch; then, if a flag byte is set and a pointer is non-null, calls a cleanup helper and clears the flag. */

extern char *D_002313A8;

int func_0D7920(void);
int func_0BB410(void);
int func_0BB340(int a0);
int func_0BB2F0(void);
int func_0BB5B8(void);
void func_01A828(int a0, int a1);
void func_02F8A8(int *a0);

struct Blk {
    unsigned char pad00[0x60];
    int w60;
    int w64;
};

struct Local {
    int *sum;
    unsigned char flag;
};

void func_0C9C38(void)
{
    struct Local loc;
    char *base;
    struct Blk *blk;

    base = D_002313A8;
    loc.sum = (int *)(base + 0x15140);
    blk = (struct Blk *)(base + 0x150D4);
    if (blk->w60 == blk->w64) {
        if (func_0D7920() == 0) {
            if (func_0BB410() != 0) {
                if (func_0BB340(1) == 0) {
                    func_0BB2F0();
                }
            } else {
                func_01A828(func_0BB5B8(), 0);
            }
        }
    }
    if (loc.flag != 0) {
        if (loc.sum != 0) {
            func_02F8A8(loc.sum);
            loc.flag = 0;
        }
    }
}
