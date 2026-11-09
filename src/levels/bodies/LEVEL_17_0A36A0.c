/* LEVEL_17:0x0A36A0 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_0019DCD8[];
extern short D_0019DCE0[];
extern int D_0019DCF0[];
extern int D_0019DD10[];
extern Rec0B52C0 D_00267728[];

void func_0A3680(void *x);
int func_096208(int *seed);
int func_096238(int *seed);
int func_096268(int *seed);
int func_096320(int *seed);
void func_098FC8(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0A36A0(int slot, void *x)
{
    int seed[4];

    func_0A3680(x);
    D_0019DCD8[slot] = 0xEF;
    D_0019DCE0[slot] = 0x87;
    D_0019DCF0[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_0019DD10[slot] = 0;
    D_00267728[slot].f_14 = 0;
    func_098FC8(&D_00267728[slot], func_096208(seed), func_096238(seed), func_096268(seed), func_096320(seed), 0x40602020U);
    D_00267728[slot].f_14 = 0;
}
