/* LEVEL_02:0x050BE8 -- placement copy of LEVEL_01_04BC60.c: calls one helper on a global block; otherwise runs a stored callback. */
struct Rec_04BC60 {
    char pad[0x0c];
    void (*callback)(void *);
};
struct Blk_00235140 {
    char pad[0xdd4];
    struct Rec_04BC60 *record;
};
extern struct Blk_00235140 D_0024C650;
extern int func_06FC18(void *);
extern void func_06FC50(void *);

void func_050BE8(void)
{
    struct Blk_00235140 *blk = &D_0024C650;

    if (func_06FC18(blk) != 0) {
        func_06FC50(blk);
    } else if (blk->record != 0) {
        if (blk->record->callback != 0)
            blk->record->callback(blk);
    }
}
