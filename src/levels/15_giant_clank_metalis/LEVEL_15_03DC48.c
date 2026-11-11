/* LEVEL_15:0x03DC48 -- placement copy of LEVEL_01_04BC60.c: calls one helper on a global block; otherwise runs a stored callback. */
struct Rec_04BC60 {
    char pad[0x0c];
    void (*callback)(void *);
};
struct Blk_00235140 {
    char pad[0xdd4];
    struct Rec_04BC60 *record;
};
extern struct Blk_00235140 D_0017D2C0;
extern int func_05BCB8(void *);
extern void func_05BCE0(void *);

void func_03DC48(void)
{
    struct Blk_00235140 *blk = &D_0017D2C0;

    if (func_05BCB8(blk) != 0) {
        func_05BCE0(blk);
    } else if (blk->record != 0) {
        if (blk->record->callback != 0)
            blk->record->callback(blk);
    }
}
