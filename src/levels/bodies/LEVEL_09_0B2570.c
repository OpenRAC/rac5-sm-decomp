/* LEVEL_09:0x0B2570 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_001E6458[];
extern short D_001E6460[];
extern int D_001E6470[];
extern int D_001E6490[];
extern Rec0B52C0 D_0030FC68[];

void func_0B2550(void *x);
int func_0A5930(int *seed);
int func_0A5960(int *seed);
int func_0A5990(int *seed);
int func_0A5A48(int *seed);
void func_0A8690(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0B2570(int slot, void *x)
{
    int seed[4];

    func_0B2550(x);
    D_001E6458[slot] = 0xEF;
    D_001E6460[slot] = 0x87;
    D_001E6470[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_001E6490[slot] = 0;
    D_0030FC68[slot].f_14 = 0;
    func_0A8690(&D_0030FC68[slot], func_0A5930(seed), func_0A5960(seed), func_0A5990(seed), func_0A5A48(seed), 0x40602020U);
    D_0030FC68[slot].f_14 = 0;
}
