/* LEVEL_22:0x0A38A0 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_0015B9D8[];
extern short D_0015B9E0[];
extern int D_0015B9F0[];
extern int D_0015BA10[];
extern Rec0B52C0 D_0027E0A8[];

void func_0A3880(void *x);
int func_096C90(int *seed);
int func_096CC0(int *seed);
int func_096CF0(int *seed);
int func_096DA8(int *seed);
void func_0999F0(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0A38A0(int slot, void *x)
{
    int seed[4];

    func_0A3880(x);
    D_0015B9D8[slot] = 0xEF;
    D_0015B9E0[slot] = 0x87;
    D_0015B9F0[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_0015BA10[slot] = 0;
    D_0027E0A8[slot].f_14 = 0;
    func_0999F0(&D_0027E0A8[slot], func_096C90(seed), func_096CC0(seed), func_096CF0(seed), func_096DA8(seed), 0x40602020U);
    D_0027E0A8[slot].f_14 = 0;
}
