/* LEVEL_04:0x04D680 -- placement copy of LEVEL_01_04BC60.c: calls one helper on a global block; otherwise runs a stored callback. */
struct Rec_04BC60 {
    char pad[0x0c];
    void (*callback)(void *);
};
struct Blk_00235140 {
    char pad[0xdd4];
    struct Rec_04BC60 *record;
};
extern struct Blk_00235140 D_0024F950;
extern int func_06C5E8(void *);
extern void func_06C620(void *);

void func_04D680(void)
{
    struct Blk_00235140 *blk = &D_0024F950;

    if (func_06C5E8(blk) != 0) {
        func_06C620(blk);
    } else if (blk->record != 0) {
        if (blk->record->callback != 0)
            blk->record->callback(blk);
    }
}
