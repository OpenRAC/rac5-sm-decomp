/* LEVEL_08:0x0C0098 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_00245518[];
extern short D_00245520[];
extern int D_00245530[];
extern int D_00245550[];
extern Rec0B52C0 D_00377768[];

void func_0C0078(void *x);
int func_0B2F78(int *seed);
int func_0B2FA8(int *seed);
int func_0B2FD8(int *seed);
int func_0B3090(int *seed);
void func_0B5D18(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0C0098(int slot, void *x)
{
    int seed[4];

    func_0C0078(x);
    D_00245518[slot] = 0xEF;
    D_00245520[slot] = 0x87;
    D_00245530[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_00245550[slot] = 0;
    D_00377768[slot].f_14 = 0;
    func_0B5D18(&D_00377768[slot], func_0B2F78(seed), func_0B2FA8(seed), func_0B2FD8(seed), func_0B3090(seed), 0x40602020U);
    D_00377768[slot].f_14 = 0;
}
