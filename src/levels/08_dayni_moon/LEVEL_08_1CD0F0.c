/* LEVEL_08:0x1CD0F0 -- placement copy of LEVEL_01_19AA70.c: resolves two hashed keys into globals, clears the two 16-byte slot records and registers two packed keys from the settings block. */
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

extern int D_003E8BE8;
extern int D_003E8BEC;
extern Slot D_003E8BF0[2];
extern Blk D_002E7040;
extern int D_002520CC;
extern int D_002520D0;

extern int func_13B5A0(unsigned int value);
extern void func_11F848(unsigned int value);

void func_1CD0F0(void)
{
    unsigned int i;
    Blk *b;

    D_003E8BE8 = func_13B5A0(0xCF9217BAu);
    D_003E8BEC = func_13B5A0(0x5F65D235u);
    for (i = 0; i < 2; i++) {
        D_003E8BF0[i].f04 = 0;
        D_003E8BF0[i].f08 = 0;
        D_003E8BF0[i].f00 = 0;
    }
    b = &D_002E7040;
    D_002520CC = ((int (*)(unsigned int))func_11F848)((b->wEC << 16) | 0x800060C1u);
    D_002520D0 = ((int (*)(unsigned int))func_11F848)((b->w1C << 16) | 0x800060C1u);
}
