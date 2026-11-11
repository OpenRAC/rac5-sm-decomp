/* LEVEL_15:0x095860 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_001512D8[];
extern short D_001512E0[];
extern int D_001512F0[];
extern int D_00151310[];
extern Rec0B52C0 D_0023FD28[];

void func_095840(void *x);
int func_088F48(int *seed);
int func_088F78(int *seed);
int func_088FA8(int *seed);
int func_089060(int *seed);
void func_08BCA8(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_095860(int slot, void *x)
{
    int seed[4];

    func_095840(x);
    D_001512D8[slot] = 0xEF;
    D_001512E0[slot] = 0x87;
    D_001512F0[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_00151310[slot] = 0;
    D_0023FD28[slot].f_14 = 0;
    func_08BCA8(&D_0023FD28[slot], func_088F48(seed), func_088F78(seed), func_088FA8(seed), func_089060(seed), 0x40602020U);
    D_0023FD28[slot].f_14 = 0;
}
