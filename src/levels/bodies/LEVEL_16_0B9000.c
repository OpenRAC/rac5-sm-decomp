/* LEVEL_16:0x0B9000 -- placement copy of LEVEL_01_0C9C38.c: when a block's two counters match and a check passes, runs a helper branch; then, if a flag byte is set and a pointer is non-null, calls a cleanup helper and clears the flag. */

extern char *D_001E00A8;

int func_0C7018(void);
int func_0AA460(void);
int func_0AA390(int a0);
int func_0AA340(void);
int func_0AA608(void);
void func_018B98(int a0, int a1);
void func_02D758(int *a0);

struct Blk {
    unsigned char pad00[0x60];
    int w60;
    int w64;
};

struct Local {
    int *sum;
    unsigned char flag;
};

void func_0B9000(void)
{
    struct Local loc;
    char *base;
    struct Blk *blk;

    base = D_001E00A8;
    loc.sum = (int *)(base + 0x15140);
    blk = (struct Blk *)(base + 0x150D4);
    if (blk->w60 == blk->w64) {
        if (func_0C7018() == 0) {
            if (func_0AA460() != 0) {
                if (func_0AA390(1) == 0) {
                    func_0AA340();
                }
            } else {
                func_018B98(func_0AA608(), 0);
            }
        }
    }
    if (loc.flag != 0) {
        if (loc.sum != 0) {
            func_02D758(loc.sum);
            loc.flag = 0;
        }
    }
}
