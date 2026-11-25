/* LEVEL_15:0x0F20F8 -- placement copy of LEVEL_01_133230.c: forwards a result to a memory-card header call, with a conditional fallback value. */
extern int func_0F2690(void);
extern unsigned int func_0221B8(void);
extern void MEMCARD_SetHeaderDetail(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3,
                                    unsigned int a4) __asm__("MEMCARD_SetHeaderDetail__FUiUiUiUiUi");

typedef struct {
    char pad_0000[0x1C68];
    unsigned int f_1C68;
    unsigned int f_1C6C;
    unsigned int f_1C70;
    char pad_1C74[0x13F40 - 0x1C74];
    unsigned int f_13F40;
} Blk;

extern Blk *D_00148C2C;

void func_0F20F8(void)
{
    int r;
    unsigned int v;
    Blk *b;
    int t;
    int t2;

    r = func_0F2690();
    if (r < 0) {
        return;
    }
    v = func_0221B8();
    b = D_00148C2C;
    t2 = b->f_1C6C;
    t = b->f_1C70;
    t = (t > -1) ? t : t2;
    MEMCARD_SetHeaderDetail(r, b->f_1C68, v, b->f_13F40, t);
}
