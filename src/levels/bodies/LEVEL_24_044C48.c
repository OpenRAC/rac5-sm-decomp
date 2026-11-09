/* LEVEL_24:0x044C48 -- placement copy of LEVEL_01_04BC60.c: calls one helper on a global block; otherwise runs a stored callback. */
struct Rec_04BC60 {
    char pad[0x0c];
    void (*callback)(void *);
};
struct Blk_00235140 {
    char pad[0xdd4];
    struct Rec_04BC60 *record;
};
extern struct Blk_00235140 D_00201040;
extern int func_0641D0(void *);
extern void func_064208(void *);

void func_044C48(void)
{
    struct Blk_00235140 *blk = &D_00201040;

    if (func_0641D0(blk) != 0) {
        func_064208(blk);
    } else if (blk->record != 0) {
        if (blk->record->callback != 0)
            blk->record->callback(blk);
    }
}
