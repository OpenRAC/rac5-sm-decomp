/* LEVEL_07:0x1ABA08 -- placement copy of LEVEL_01_19AA70.c: resolves two hashed keys into globals, clears the two 16-byte slot records and registers two packed keys from the settings block. */
typedef struct Slot {
    int f00;
    int f04;
    int f08;
    int f0C;
} Slot;

typedef struct Blk {
    char pad00[0x1C];
    unsigned int w1C;
    char pad20[0xEC - 0x20];
    unsigned int wEC;
} Blk;

extern int D_003ACA20;
extern int D_003ACA24;
extern Slot D_003ACA28[2];
extern Blk D_002AD6C0;
extern int D_0021D54C;
extern int D_0021D550;

extern int func_12D068(unsigned int value);
extern void func_1120F8(unsigned int value);

void func_1ABA08(void)
{
    unsigned int i;
    Blk *b;

    D_003ACA20 = func_12D068(0xCF9217BAu);
    D_003ACA24 = func_12D068(0x5F65D235u);
    for (i = 0; i < 2; i++) {
        D_003ACA28[i].f04 = 0;
        D_003ACA28[i].f08 = 0;
        D_003ACA28[i].f00 = 0;
    }
    b = &D_002AD6C0;
    D_0021D54C = ((int (*)(unsigned int))func_1120F8)((b->wEC << 16) | 0x800060C1u);
    D_0021D550 = ((int (*)(unsigned int))func_1120F8)((b->w1C << 16) | 0x800060C1u);
}
