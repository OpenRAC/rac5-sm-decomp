/* LEVEL_01:0x04BC60 -- calls one helper on a global block; otherwise runs a stored callback. */
struct Rec_04BC60 {
    char pad[0x0c];
    void (*callback)(void *);
};
struct Blk_00235140 {
    char pad[0xdd4];
    struct Rec_04BC60 *record;
};
extern struct Blk_00235140 D_00235140;
extern int func_06AB80(void *);
extern void func_06ABB8(void *);

void func_04BC60(void)
{
    struct Blk_00235140 *blk = &D_00235140;

    if (func_06AB80(blk) != 0) {
        func_06ABB8(blk);
    } else if (blk->record != 0) {
        if (blk->record->callback != 0)
            blk->record->callback(blk);
    }
}
