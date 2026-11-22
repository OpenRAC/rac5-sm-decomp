/* LEVEL_03:0x1AD950 -- placement copy of LEVEL_01_19AA70.c: resolves two hashed keys into globals, clears the two 16-byte slot records and registers two packed keys from the settings block. */
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

extern int D_003B2180;
extern int D_003B2184;
extern Slot D_003B2188[2];
extern Blk D_002B2C40;
extern int D_002218FC;
extern int D_00221900;

extern int func_1282D0(unsigned int value);
extern void func_10CD70(unsigned int value);

void func_1AD950(void)
{
    unsigned int i;
    Blk *b;

    D_003B2180 = func_1282D0(0xCF9217BAu);
    D_003B2184 = func_1282D0(0x5F65D235u);
    for (i = 0; i < 2; i++) {
        D_003B2188[i].f04 = 0;
        D_003B2188[i].f08 = 0;
        D_003B2188[i].f00 = 0;
    }
    b = &D_002B2C40;
    D_002218FC = ((int (*)(unsigned int))func_10CD70)((b->wEC << 16) | 0x800060C1u);
    D_00221900 = ((int (*)(unsigned int))func_10CD70)((b->w1C << 16) | 0x800060C1u);
}
