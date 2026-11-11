/* LEVEL_04:0x0BA9B0 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_00215B18[];
extern short D_00215B20[];
extern int D_00215B30[];
extern int D_00215B50[];
extern Rec0B52C0 D_00342CE8[];

void func_0BA990(void *x);
int func_0AD890(int *seed);
int func_0AD8C0(int *seed);
int func_0AD8F0(int *seed);
int func_0AD9A8(int *seed);
void func_0B0630(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0BA9B0(int slot, void *x)
{
    int seed[4];

    func_0BA990(x);
    D_00215B18[slot] = 0xEF;
    D_00215B20[slot] = 0x87;
    D_00215B30[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_00215B50[slot] = 0;
    D_00342CE8[slot].f_14 = 0;
    func_0B0630(&D_00342CE8[slot], func_0AD890(seed), func_0AD8C0(seed), func_0AD8F0(seed), func_0AD9A8(seed), 0x40602020U);
    D_00342CE8[slot].f_14 = 0;
}
