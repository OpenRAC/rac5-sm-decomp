/* LEVEL_22:0x041708 -- placement copy of LEVEL_01_04BC60.c: calls one helper on a global block; otherwise runs a stored callback. */
struct Rec_04BC60 {
    char pad[0x0c];
    void (*callback)(void *);
};
struct Blk_00235140 {
    char pad[0xdd4];
    struct Rec_04BC60 *record;
};
extern struct Blk_00235140 D_00186D40;
extern int func_060788(void *);
extern void func_0607C0(void *);

void func_041708(void)
{
    struct Blk_00235140 *blk = &D_00186D40;

    if (func_060788(blk) != 0) {
        func_0607C0(blk);
    } else if (blk->record != 0) {
        if (blk->record->callback != 0)
            blk->record->callback(blk);
    }
}
