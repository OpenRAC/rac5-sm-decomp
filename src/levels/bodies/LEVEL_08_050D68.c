/* LEVEL_08:0x050D68 -- placement copy of LEVEL_01_04BC60.c: calls one helper on a global block; otherwise runs a stored callback. */
struct Rec_04BC60 {
    char pad[0x0c];
    void (*callback)(void *);
};
struct Blk_00235140 {
    char pad[0xdd4];
    struct Rec_04BC60 *record;
};
extern struct Blk_00235140 D_002843D0;
extern int func_0703C8(void *);
extern void func_070400(void *);

void func_050D68(void)
{
    struct Blk_00235140 *blk = &D_002843D0;

    if (func_0703C8(blk) != 0) {
        func_070400(blk);
    } else if (blk->record != 0) {
        if (blk->record->callback != 0)
            blk->record->callback(blk);
    }
}
