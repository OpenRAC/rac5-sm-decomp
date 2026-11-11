/* LEVEL_18:0x0A31B8 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_001ABB58[];
extern short D_001ABB60[];
extern int D_001ABB70[];
extern int D_001ABB90[];
extern Rec0B52C0 D_002767A8[];

void func_0A3198(void *x);
int func_095D20(int *seed);
int func_095D50(int *seed);
int func_095D80(int *seed);
int func_095E38(int *seed);
void func_098AE0(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0A31B8(int slot, void *x)
{
    int seed[4];

    func_0A3198(x);
    D_001ABB58[slot] = 0xEF;
    D_001ABB60[slot] = 0x87;
    D_001ABB70[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_001ABB90[slot] = 0;
    D_002767A8[slot].f_14 = 0;
    func_098AE0(&D_002767A8[slot], func_095D20(seed), func_095D50(seed), func_095D80(seed), func_095E38(seed), 0x40602020U);
    D_002767A8[slot].f_14 = 0;
}
