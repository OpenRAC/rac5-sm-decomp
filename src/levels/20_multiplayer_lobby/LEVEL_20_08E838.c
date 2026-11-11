/* LEVEL_20:0x08E838 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_0010CDB8[];
extern short D_0010CDC0[];
extern int D_0010CDD0[];
extern int D_0010CDF0[];
extern Rec0B52C0 D_00199C68[];

void func_08E818(void *x);
int func_081408(int *seed);
int func_081438(int *seed);
int func_081468(int *seed);
int func_081520(int *seed);
void func_0841C8(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_08E838(int slot, void *x)
{
    int seed[4];

    func_08E818(x);
    D_0010CDB8[slot] = 0xEF;
    D_0010CDC0[slot] = 0x87;
    D_0010CDD0[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_0010CDF0[slot] = 0;
    D_00199C68[slot].f_14 = 0;
    func_0841C8(&D_00199C68[slot], func_081408(seed), func_081438(seed), func_081468(seed), func_081520(seed), 0x40602020U);
    D_00199C68[slot].f_14 = 0;
}
