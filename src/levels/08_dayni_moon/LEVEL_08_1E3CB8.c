/* LEVEL_08:0x1E3CB8 -- placement copy of LEVEL_04_1BCF20.c: registers two packed keys with the lookup helpers (one per word of the global settings block), stores the results in globals and runs the follow-up. */
typedef struct Blk {
    char pad_00[0x90];
    unsigned int w90;
    char pad_94[0xD8 - 0x94];
    unsigned int wD8;
} Blk;

extern Blk D_002E7040;
extern char D_003EA2B8[];
extern int D_002524C4;
extern int D_002524C8;
extern void func_03B1F8(char *item);
extern int func_110E80(unsigned int value);
extern int func_10F588(unsigned int a0);
extern void func_21ADF8(void);

void func_1E3CB8(void)
{
    Blk *s0;

    func_03B1F8(D_003EA2B8);
    s0 = &D_002E7040;
    D_002524C4 = func_110E80((s0->w90 << 16) | 0xA00070D9u);
    D_002524C8 = func_10F588((s0->wD8 << 16) | 0xC00050C1u);
    func_21ADF8();
}
