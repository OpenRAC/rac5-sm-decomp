/* LEVEL_01:0x0B52C0 -- resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_001FC658[];
extern short D_001FC660[];
extern int D_001FC670[];
extern int D_001FC690[];
extern Rec0B52C0 D_003284E8[];

void func_0B52A0(void *x);
int func_0A8680(int *seed);
int func_0A86B0(int *seed);
int func_0A86E0(int *seed);
int func_0A8798(int *seed);
void func_0AB3E0(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0B52C0(int slot, void *x)
{
    int seed[4];

    func_0B52A0(x);
    D_001FC658[slot] = 0xEF;
    D_001FC660[slot] = 0x87;
    D_001FC670[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_001FC690[slot] = 0;
    D_003284E8[slot].f_14 = 0;
    func_0AB3E0(&D_003284E8[slot], func_0A8680(seed), func_0A86B0(seed), func_0A86E0(seed), func_0A8798(seed), 0x40602020U);
    D_003284E8[slot].f_14 = 0;
}
