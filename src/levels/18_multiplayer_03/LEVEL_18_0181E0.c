/* LEVEL_18:0x0181E0 -- placement copy of LEVEL_01_01A828.c: stores a new state and argument in the global block unless state 8 is replaced by 6. */
struct Blk_01A828 {
    char pad_00[4];
    int state;
    int arg;
};

extern struct Blk_01A828 D_001DEC68;

void func_0181E0(int state, int arg)
{
    struct Blk_01A828 *b = &D_001DEC68;

    if (b->state == 8 && state == 6) {
        return;
    }
    b->state = state;
    b->arg = arg;
}
