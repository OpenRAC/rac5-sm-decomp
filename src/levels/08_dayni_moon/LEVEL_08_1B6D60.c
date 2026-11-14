/* LEVEL_08:0x1B6D60 -- registers three packed keys with the lookup helpers (two built from words of the global settings block) and stores the results in globals. */
typedef struct Blk {
    char pad_00[0x90];
    unsigned int w90;
    char pad_94[0xD8 - 0x94];
    unsigned int wD8;
} Blk;

extern Blk D_002E7040;
extern int D_00251DCC;
extern int D_00251DD0;
extern int D_00251DD4;
extern int func_110E80(unsigned int value);
extern int func_10F588(unsigned int value);
extern int func_13B5A0(unsigned int value);

void func_1B6D60(void)
{
    Blk *s0;

    s0 = &D_002E7040;
    D_00251DCC = func_110E80((s0->w90 << 16) | 0xA00070D9u);
    D_00251DD0 = func_10F588((s0->wD8 << 16) | 0xC00050C1u);
    D_00251DD4 = func_13B5A0(0x26550585u);
}
