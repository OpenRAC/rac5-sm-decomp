/* LEVEL_05:0x049860 -- placement copy of LEVEL_01_04BC60.c: calls one helper on a global block; otherwise runs a stored callback. */
struct Rec_04BC60 {
    char pad[0x0c];
    void (*callback)(void *);
};
struct Blk_00235140 {
    char pad[0xdd4];
    struct Rec_04BC60 *record;
};
extern struct Blk_00235140 D_00220E40;
extern int func_0687E8(void *);
extern void func_068820(void *);

void func_049860(void)
{
    struct Blk_00235140 *blk = &D_00220E40;

    if (func_0687E8(blk) != 0) {
        func_068820(blk);
    } else if (blk->record != 0) {
        if (blk->record->callback != 0)
            blk->record->callback(blk);
    }
}
