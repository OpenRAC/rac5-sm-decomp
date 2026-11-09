/* LEVEL_01.REL:0x133230: reviewed 108-byte candidate, held for ABI review.
 * Forwards a result to a memory-card header call, with a conditional fallback
 * value.
 * pinned C with gnu-ee-trial links 108/108 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_1337C8 returning int with (int), but the accepted
 * LEVEL_01_1337C8.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_1337C8(int a0);
extern unsigned int func_028300(void);
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

extern Blk *D_001F3FAC;

void func_133230(int a0)
{
    int r;
    unsigned int v;
    Blk *b;
    int t;
    int t2;

    r = func_1337C8(a0);
    if (r < 0) {
        return;
    }
    v = func_028300();
    b = D_001F3FAC;
    t2 = b->f_1C6C;
    t = b->f_1C70;
    t = (t > -1) ? t : t2;
    MEMCARD_SetHeaderDetail(r, b->f_1C68, v, b->f_13F40, t);
}
