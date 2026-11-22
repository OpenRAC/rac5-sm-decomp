/* LEVEL_10:0x1A26E8 -- placement copy of LEVEL_01_19AA70.c: resolves two hashed keys into globals, clears the two 16-byte slot records and registers two packed keys from the settings block. */
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

extern int D_003A0368;
extern int D_003A036C;
extern Slot D_003A0370[2];
extern Blk D_002A11C0;
extern int D_00211864;
extern int D_00211868;

extern int func_127EC8(unsigned int value);
extern void func_10D2C0(unsigned int value);

void func_1A26E8(void)
{
    unsigned int i;
    Blk *b;

    D_003A0368 = func_127EC8(0xCF9217BAu);
    D_003A036C = func_127EC8(0x5F65D235u);
    for (i = 0; i < 2; i++) {
        D_003A0370[i].f04 = 0;
        D_003A0370[i].f08 = 0;
        D_003A0370[i].f00 = 0;
    }
    b = &D_002A11C0;
    D_00211864 = ((int (*)(unsigned int))func_10D2C0)((b->wEC << 16) | 0x800060C1u);
    D_00211868 = ((int (*)(unsigned int))func_10D2C0)((b->w1C << 16) | 0x800060C1u);
}
