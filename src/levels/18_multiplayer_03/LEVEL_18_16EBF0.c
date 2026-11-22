/* LEVEL_18:0x16EBF0 -- placement copy of LEVEL_01_19AA70.c: resolves two hashed keys into globals, clears the two 16-byte slot records and registers two packed keys from the settings block. */
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

extern int D_002E5860;
extern int D_002E5864;
extern Slot D_002E5868[2];
extern Blk D_0024E5C0;
extern int D_001BF60C;
extern int D_001BF610;

extern int func_105B48(unsigned int value);
extern void func_0EE4F8(unsigned int value);

void func_16EBF0(void)
{
    unsigned int i;
    Blk *b;

    D_002E5860 = func_105B48(0xCF9217BAu);
    D_002E5864 = func_105B48(0x5F65D235u);
    for (i = 0; i < 2; i++) {
        D_002E5868[i].f04 = 0;
        D_002E5868[i].f08 = 0;
        D_002E5868[i].f00 = 0;
    }
    b = &D_0024E5C0;
    D_001BF60C = ((int (*)(unsigned int))func_0EE4F8)((b->wEC << 16) | 0x800060C1u);
    D_001BF610 = ((int (*)(unsigned int))func_0EE4F8)((b->w1C << 16) | 0x800060C1u);
}
