/* LEVEL_09:0x048140 -- placement copy of LEVEL_01_04BC60.c: calls one helper on a global block; otherwise runs a stored callback. */
struct Rec_04BC60 {
    char pad[0x0c];
    void (*callback)(void *);
};
struct Blk_00235140 {
    char pad[0xdd4];
    struct Rec_04BC60 *record;
};
extern struct Blk_00235140 D_0021C8C0;
extern int func_067780(void *);
extern void func_0677B8(void *);

void func_048140(void)
{
    struct Blk_00235140 *blk = &D_0021C8C0;

    if (func_067780(blk) != 0) {
        func_0677B8(blk);
    } else if (blk->record != 0) {
        if (blk->record->callback != 0)
            blk->record->callback(blk);
    }
}
