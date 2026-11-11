/* LEVEL_06:0x0AFAE8 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_001EB558[];
extern short D_001EB560[];
extern int D_001EB570[];
extern int D_001EB590[];
extern Rec0B52C0 D_00315268[];

void func_0AFAC8(void *x);
int func_0A2E50(int *seed);
int func_0A2E80(int *seed);
int func_0A2EB0(int *seed);
int func_0A2F68(int *seed);
void func_0A5BB0(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0AFAE8(int slot, void *x)
{
    int seed[4];

    func_0AFAC8(x);
    D_001EB558[slot] = 0xEF;
    D_001EB560[slot] = 0x87;
    D_001EB570[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_001EB590[slot] = 0;
    D_00315268[slot].f_14 = 0;
    func_0A5BB0(&D_00315268[slot], func_0A2E50(seed), func_0A2E80(seed), func_0A2EB0(seed), func_0A2F68(seed), 0x40602020U);
    D_00315268[slot].f_14 = 0;
}
