/* LEVEL_02:0x1B0760 -- placement copy of LEVEL_01_19AA70.c: resolves two hashed keys into globals, clears the two 16-byte slot records and registers two packed keys from the settings block. */
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

extern int D_003AEE70;
extern int D_003AEE74;
extern Slot D_003AEE78[2];
extern Blk D_002AF2C0;
extern int D_0021D98C;
extern int D_0021D990;

extern int func_130418(unsigned int value);
extern void func_1153F0(unsigned int value);

void func_1B0760(void)
{
    unsigned int i;
    Blk *b;

    D_003AEE70 = func_130418(0xCF9217BAu);
    D_003AEE74 = func_130418(0x5F65D235u);
    for (i = 0; i < 2; i++) {
        D_003AEE78[i].f04 = 0;
        D_003AEE78[i].f08 = 0;
        D_003AEE78[i].f00 = 0;
    }
    b = &D_002AF2C0;
    D_0021D98C = ((int (*)(unsigned int))func_1153F0)((b->wEC << 16) | 0x800060C1u);
    D_0021D990 = ((int (*)(unsigned int))func_1153F0)((b->w1C << 16) | 0x800060C1u);
}
