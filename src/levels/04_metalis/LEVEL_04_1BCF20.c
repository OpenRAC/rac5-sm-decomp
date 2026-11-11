/* LEVEL_04:0x1BCF20 -- registers two packed keys with the lookup helpers (one per word of the global settings block), stores the results in globals and runs the follow-up. */
typedef struct Blk {
    char pad_00[0x90];
    unsigned int w90;
    char pad_94[0xD8 - 0x94];
    unsigned int wD8;
} Blk;

extern Blk D_002B25C0;
extern char D_003B31D0[];
extern int D_0022244C;
extern int D_00222450;
extern void func_0379C8(char *item);
extern int func_10C970(unsigned int value);
extern int func_10B078(unsigned int a0);
extern void func_1F0A88(void);

void func_1BCF20(void)
{
    Blk *s0;

    func_0379C8(D_003B31D0);
    s0 = &D_002B25C0;
    D_0022244C = func_10C970((s0->w90 << 16) | 0xA00070D9u);
    D_00222450 = func_10B078((s0->wD8 << 16) | 0xC00050C1u);
    func_1F0A88();
}
