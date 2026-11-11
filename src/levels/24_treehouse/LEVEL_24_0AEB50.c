/* LEVEL_24:0x0AEB50 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_001CD2D8[];
extern short D_001CD2E0[];
extern int D_001CD2F0[];
extern int D_001CD310[];
extern Rec0B52C0 D_002F43A8[];

void func_0AEB30(void *x);
int func_0A1EF8(int *seed);
int func_0A1F28(int *seed);
int func_0A1F58(int *seed);
int func_0A2010(int *seed);
void func_0A4C58(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0AEB50(int slot, void *x)
{
    int seed[4];

    func_0AEB30(x);
    D_001CD2D8[slot] = 0xEF;
    D_001CD2E0[slot] = 0x87;
    D_001CD2F0[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_001CD310[slot] = 0;
    D_002F43A8[slot].f_14 = 0;
    func_0A4C58(&D_002F43A8[slot], func_0A1EF8(seed), func_0A1F28(seed), func_0A1F58(seed), func_0A2010(seed), 0x40602020U);
    D_002F43A8[slot].f_14 = 0;
}
