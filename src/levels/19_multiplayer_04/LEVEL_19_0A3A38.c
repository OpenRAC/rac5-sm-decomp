/* LEVEL_19:0x0A3A38 -- placement copy of LEVEL_01_0B52C0.c: resets a slot's state tables, samples four values from a fixed seed block and registers the slot record with them. */

typedef struct Rec0B52C0 {
    char pad_00[0x14];
    int f_14;
    char pad_18[0x3C];
} Rec0B52C0;

extern short D_001AB858[];
extern short D_001AB860[];
extern int D_001AB870[];
extern int D_001AB890[];
extern Rec0B52C0 D_002765A8[];

void func_0A3A18(void *x);
int func_0965A0(int *seed);
int func_0965D0(int *seed);
int func_096600(int *seed);
int func_0966B8(int *seed);
void func_099360(Rec0B52C0 *r, short a, short b, short c, short d, unsigned int e);

void func_0A3A38(int slot, void *x)
{
    int seed[4];

    func_0A3A18(x);
    D_001AB858[slot] = 0xEF;
    D_001AB860[slot] = 0x87;
    D_001AB870[slot] = 1;
    seed[0] = 0x77;
    seed[2] = 0x167;
    seed[1] = 0x43;
    seed[3] = 0xCB;
    D_001AB890[slot] = 0;
    D_002765A8[slot].f_14 = 0;
    func_099360(&D_002765A8[slot], func_0965A0(seed), func_0965D0(seed), func_096600(seed), func_0966B8(seed), 0x40602020U);
    D_002765A8[slot].f_14 = 0;
}
