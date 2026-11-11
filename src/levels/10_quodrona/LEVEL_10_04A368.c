/* LEVEL_10:0x04A368 -- placement copy of LEVEL_01_04BC60.c: calls one helper on a global block; otherwise runs a stored callback. */
struct Rec_04BC60 {
    char pad[0x0c];
    void (*callback)(void *);
};
struct Blk_00235140 {
    char pad[0xdd4];
    struct Rec_04BC60 *record;
};
extern struct Blk_00235140 D_0023E540;
extern int func_0699B0(void *);
extern void func_0699E8(void *);

void func_04A368(void)
{
    struct Blk_00235140 *blk = &D_0023E540;

    if (func_0699B0(blk) != 0) {
        func_0699E8(blk);
    } else if (blk->record != 0) {
        if (blk->record->callback != 0)
            blk->record->callback(blk);
    }
}
