/* LEVEL_19:0x16ABC0 -- placement copy of LEVEL_01_19AA70.c: resolves two hashed keys into globals, clears the two 16-byte slot records and registers two packed keys from the settings block. */
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

extern int D_002E5B48;
extern int D_002E5B4C;
extern Slot D_002E5B50[2];
extern Blk D_0024E3C0;
extern int D_001BF2AC;
extern int D_001BF2B0;

extern int func_107538(unsigned int value);
extern void func_0F0308(unsigned int value);

void func_16ABC0(void)
{
    unsigned int i;
    Blk *b;

    D_002E5B48 = func_107538(0xCF9217BAu);
    D_002E5B4C = func_107538(0x5F65D235u);
    for (i = 0; i < 2; i++) {
        D_002E5B50[i].f04 = 0;
        D_002E5B50[i].f08 = 0;
        D_002E5B50[i].f00 = 0;
    }
    b = &D_0024E3C0;
    D_001BF2AC = ((int (*)(unsigned int))func_0F0308)((b->wEC << 16) | 0x800060C1u);
    D_001BF2B0 = ((int (*)(unsigned int))func_0F0308)((b->w1C << 16) | 0x800060C1u);
}
