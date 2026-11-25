/* LEVEL_23:0x1249A8 -- placement copy of LEVEL_01_133230.c: forwards a result to a memory-card header call, with a conditional fallback value. */
extern int func_124F40(void);
extern unsigned int func_026030(void);
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

extern Blk *D_001C73AC;

void func_1249A8(void)
{
    int r;
    unsigned int v;
    Blk *b;
    int t;
    int t2;

    r = func_124F40();
    if (r < 0) {
        return;
    }
    v = func_026030();
    b = D_001C73AC;
    t2 = b->f_1C6C;
    t = b->f_1C70;
    t = (t > -1) ? t : t2;
    MEMCARD_SetHeaderDetail(r, b->f_1C68, v, b->f_13F40, t);
}
