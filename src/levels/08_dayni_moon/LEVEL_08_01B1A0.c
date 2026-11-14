/* LEVEL_08:0x01B1A0 -- placement copy of LEVEL_01_01A828.c: stores a new state and argument in the global block unless state 8 is replaced by 6. */
struct Blk_01A828 {
    char pad_00[4];
    int state;
    int arg;
};

extern struct Blk_01A828 D_0027EE68;

void func_01B1A0(int state, int arg)
{
    struct Blk_01A828 *b = &D_0027EE68;

    if (b->state == 8 && state == 6) {
        return;
    }
    b->state = state;
    b->arg = arg;
}
