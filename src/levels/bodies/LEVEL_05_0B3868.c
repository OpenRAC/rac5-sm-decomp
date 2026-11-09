/* LEVEL_05:0x0B3868 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_001EB9D8[];
extern short D_001EB9E0[];
extern int D_001EB9F0[];
extern int D_001EBA10[];
extern Rec0B52C0 D_003143A8[];

void func_0B3848(void *x);
int func_0A6C40(int *seed);
int func_0A6C70(int *seed);
int func_0A6CA0(int *seed);
int func_0A6D58(int *seed);
void func_0A99A0(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0B3868(int slot, void *x)
{
    int seed[4];

    func_0B3848(x);
    D_001EB9D8[slot] = 0xEF;
    D_001EB9E0[slot] = 0x87;
    D_001EB9F0[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_001EBA10[slot] = 0;
    D_003143A8[slot].f_14 = 0;
    func_0A99A0(&D_003143A8[slot], func_0A6C40(seed), func_0A6C70(seed), func_0A6CA0(seed), func_0A6D58(seed), 0x40602020U);
    D_003143A8[slot].f_14 = 0;
}
