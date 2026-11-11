/* LEVEL_03:0x049F20 -- placement copy of LEVEL_01_04BC60.c: calls one helper on a global block; otherwise runs a stored callback. */
struct Rec_04BC60 {
    char pad[0x0c];
    void (*callback)(void *);
};
struct Blk_00235140 {
    char pad[0xdd4];
    struct Rec_04BC60 *record;
};
extern struct Blk_00235140 D_0024FFC0;
extern int func_069508(void *);
extern void func_069540(void *);

void func_049F20(void)
{
    struct Blk_00235140 *blk = &D_0024FFC0;

    if (func_069508(blk) != 0) {
        func_069540(blk);
    } else if (blk->record != 0) {
        if (blk->record->callback != 0)
            blk->record->callback(blk);
    }
}
