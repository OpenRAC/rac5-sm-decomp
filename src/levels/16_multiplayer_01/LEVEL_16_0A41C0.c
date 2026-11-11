/* LEVEL_16:0x0A41C0 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_001AA6D8[];
extern short D_001AA6E0[];
extern int D_001AA6F0[];
extern int D_001AA710[];
extern Rec0B52C0 D_00276428[];

void func_0A41A0(void *x);
int func_096D10(int *seed);
int func_096D40(int *seed);
int func_096D70(int *seed);
int func_096E28(int *seed);
void func_099AD0(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0A41C0(int slot, void *x)
{
    int seed[4];

    func_0A41A0(x);
    D_001AA6D8[slot] = 0xEF;
    D_001AA6E0[slot] = 0x87;
    D_001AA6F0[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_001AA710[slot] = 0;
    D_00276428[slot].f_14 = 0;
    func_099AD0(&D_00276428[slot], func_096D10(seed), func_096D40(seed), func_096D70(seed), func_096E28(seed), 0x40602020U);
    D_00276428[slot].f_14 = 0;
}
