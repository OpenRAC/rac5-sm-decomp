/* LEVEL_04:0x01A4A8 -- placement copy of LEVEL_01_01A828.c: stores a new state and argument in the global block unless state 8 is replaced by 6. */
struct Blk_01A828 {
    char pad_00[4];
    int state;
    int arg;
};

extern struct Blk_01A828 D_0024A3E8;

void func_01A4A8(int state, int arg)
{
    struct Blk_01A828 *b = &D_0024A3E8;

    if (b->state == 8 && state == 6) {
        return;
    }
    b->state = state;
    b->arg = arg;
}
