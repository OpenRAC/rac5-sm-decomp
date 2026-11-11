/* LEVEL_03:0x0B50A8 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_00214CD8[];
extern short D_00214CE0[];
extern int D_00214CF0[];
extern int D_00214D10[];
extern Rec0B52C0 D_00343368[];

void func_0B5088(void *x);
int func_0A8400(int *seed);
int func_0A8430(int *seed);
int func_0A8460(int *seed);
int func_0A8518(int *seed);
void func_0AB160(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0B50A8(int slot, void *x)
{
    int seed[4];

    func_0B5088(x);
    D_00214CD8[slot] = 0xEF;
    D_00214CE0[slot] = 0x87;
    D_00214CF0[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_00214D10[slot] = 0;
    D_00343368[slot].f_14 = 0;
    func_0AB160(&D_00343368[slot], func_0A8400(seed), func_0A8430(seed), func_0A8460(seed), func_0A8518(seed), 0x40602020U);
    D_00343368[slot].f_14 = 0;
}
