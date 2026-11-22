/* LEVEL_04:0x1A6868 -- placement copy of LEVEL_01_19AA70.c: resolves two hashed keys into globals, clears the two 16-byte slot records and registers two packed keys from the settings block. */
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

extern int D_003B1B10;
extern int D_003B1B14;
extern Slot D_003B1B18[2];
extern Blk D_002B25C0;
extern int D_0022205C;
extern int D_00222060;

extern int func_1364E8(unsigned int value);
extern void func_11A610(unsigned int value);

void func_1A6868(void)
{
    unsigned int i;
    Blk *b;

    D_003B1B10 = func_1364E8(0xCF9217BAu);
    D_003B1B14 = func_1364E8(0x5F65D235u);
    for (i = 0; i < 2; i++) {
        D_003B1B18[i].f04 = 0;
        D_003B1B18[i].f08 = 0;
        D_003B1B18[i].f00 = 0;
    }
    b = &D_002B25C0;
    D_0022205C = ((int (*)(unsigned int))func_11A610)((b->wEC << 16) | 0x800060C1u);
    D_00222060 = ((int (*)(unsigned int))func_11A610)((b->w1C << 16) | 0x800060C1u);
}
