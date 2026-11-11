/* LEVEL_23:0x045040 -- placement copy of LEVEL_01_04BC60.c: calls one helper on a global block; otherwise runs a stored callback. */
struct Rec_04BC60 {
    char pad[0x0c];
    void (*callback)(void *);
};
struct Blk_00235140 {
    char pad[0xdd4];
    struct Rec_04BC60 *record;
};
extern struct Blk_00235140 D_002025C0;
extern int func_064338(void *);
extern void func_064370(void *);

void func_045040(void)
{
    struct Blk_00235140 *blk = &D_002025C0;

    if (func_064338(blk) != 0) {
        func_064370(blk);
    } else if (blk->record != 0) {
        if (blk->record->callback != 0)
            blk->record->callback(blk);
    }
}
