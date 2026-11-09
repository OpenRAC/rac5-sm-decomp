/* LEVEL_23:0x0AC088 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_001CFA58[];
extern short D_001CFA60[];
extern int D_001CFA70[];
extern int D_001CFA90[];
extern Rec0B52C0 D_002F9928[];

void func_0AC068(void *x);
int func_09F3F0(int *seed);
int func_09F420(int *seed);
int func_09F450(int *seed);
int func_09F508(int *seed);
void func_0A2150(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0AC088(int slot, void *x)
{
    int seed[4];

    func_0AC068(x);
    D_001CFA58[slot] = 0xEF;
    D_001CFA60[slot] = 0x87;
    D_001CFA70[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_001CFA90[slot] = 0;
    D_002F9928[slot].f_14 = 0;
    func_0A2150(&D_002F9928[slot], func_09F3F0(seed), func_09F420(seed), func_09F450(seed), func_09F508(seed), 0x40602020U);
    D_002F9928[slot].f_14 = 0;
}
