/* LEVEL_07:0x0B7320 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_00210958[];
extern short D_00210960[];
extern int D_00210970[];
extern int D_00210990[];
extern Rec0B52C0 D_0033DDE8[];

void func_0B7300(void *x);
int func_0AA680(int *seed);
int func_0AA6B0(int *seed);
int func_0AA6E0(int *seed);
int func_0AA798(int *seed);
void func_0AD3E0(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0B7320(int slot, void *x)
{
    int seed[4];

    func_0B7300(x);
    D_00210958[slot] = 0xEF;
    D_00210960[slot] = 0x87;
    D_00210970[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_00210990[slot] = 0;
    D_0033DDE8[slot].f_14 = 0;
    func_0AD3E0(&D_0033DDE8[slot], func_0AA680(seed), func_0AA6B0(seed), func_0AA6E0(seed), func_0AA798(seed), 0x40602020U);
    D_0033DDE8[slot].f_14 = 0;
}
