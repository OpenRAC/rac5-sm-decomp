/* LEVEL_22:0x12F048 -- placement copy of LEVEL_01_19AA70.c: resolves two hashed keys into globals, clears the two 16-byte slot records and registers two packed keys from the settings block. */
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

extern int D_002E8000;
extern int D_002E8004;
extern Slot D_002E8008[2];
extern Blk D_001ED980;
extern int D_00166894;
extern int D_00166898;

extern int func_100C58(unsigned int value);
extern void func_0EAE50(unsigned int value);

void func_12F048(void)
{
    unsigned int i;
    Blk *b;

    D_002E8000 = func_100C58(0xCF9217BAu);
    D_002E8004 = func_100C58(0x5F65D235u);
    for (i = 0; i < 2; i++) {
        D_002E8008[i].f04 = 0;
        D_002E8008[i].f08 = 0;
        D_002E8008[i].f00 = 0;
    }
    b = &D_001ED980;
    D_00166894 = ((int (*)(unsigned int))func_0EAE50)((b->wEC << 16) | 0x800060C1u);
    D_00166898 = ((int (*)(unsigned int))func_0EAE50)((b->w1C << 16) | 0x800060C1u);
}
