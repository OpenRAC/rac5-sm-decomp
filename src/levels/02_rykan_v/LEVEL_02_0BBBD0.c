/* LEVEL_02:0x0BBBD0 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_00211618[];
extern short D_00211620[];
extern int D_00211630[];
extern int D_00211650[];
extern Rec0B52C0 D_0033F9E8[];

void func_0BBBB0(void *x);
int func_0AEF90(int *seed);
int func_0AEFC0(int *seed);
int func_0AEFF0(int *seed);
int func_0AF0A8(int *seed);
void func_0B1CF0(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0BBBD0(int slot, void *x)
{
    int seed[4];

    func_0BBBB0(x);
    D_00211618[slot] = 0xEF;
    D_00211620[slot] = 0x87;
    D_00211630[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_00211650[slot] = 0;
    D_0033F9E8[slot].f_14 = 0;
    func_0B1CF0(&D_0033F9E8[slot], func_0AEF90(seed), func_0AEFC0(seed), func_0AEFF0(seed), func_0AF0A8(seed), 0x40602020U);
    D_0033F9E8[slot].f_14 = 0;
}
