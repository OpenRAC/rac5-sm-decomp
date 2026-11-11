/* LEVEL_10:0x0B6498 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_00205658[];
extern short D_00205660[];
extern int D_00205670[];
extern int D_00205690[];
extern Rec0B52C0 D_003318E8[];

void func_0B6478(void *x);
int func_0A9798(int *seed);
int func_0A97C8(int *seed);
int func_0A97F8(int *seed);
int func_0A98B0(int *seed);
void func_0AC4F8(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0B6498(int slot, void *x)
{
    int seed[4];

    func_0B6478(x);
    D_00205658[slot] = 0xEF;
    D_00205660[slot] = 0x87;
    D_00205670[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_00205690[slot] = 0;
    D_003318E8[slot].f_14 = 0;
    func_0AC4F8(&D_003318E8[slot], func_0A9798(seed), func_0A97C8(seed), func_0A97F8(seed), func_0A98B0(seed), 0x40602020U);
    D_003318E8[slot].f_14 = 0;
}
