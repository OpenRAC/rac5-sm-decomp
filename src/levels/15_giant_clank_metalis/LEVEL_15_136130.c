/* LEVEL_15:0x136130 -- clears a flag in a global block, stores a record pointer, and calls its virtual method. */
struct Block_2F4F88 {
    char pad[0x64];
    int flag;
    char *slot68;
    char *slot6c;
};

extern struct Block_2F4F88 D_002F4F88;

void func_136130(void)
{
    struct Block_2F4F88 *blk = &D_002F4F88;
    char *record;
    blk->flag = 0;
    record = blk->slot6c;
    blk->slot68 = record;
    ((void (*)(char *))(*(void **)(*(char **)record + 0x1c)))
        (record + *(short *)(*(char **)record + 0x18));
}
