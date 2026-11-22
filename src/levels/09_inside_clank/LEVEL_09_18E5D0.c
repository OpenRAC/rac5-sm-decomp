/* LEVEL_09:0x18E5D0 -- placement copy of LEVEL_01_19AA70.c: resolves two hashed keys into globals, clears the two 16-byte slot records and registers two packed keys from the settings block. */
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

extern int D_0037E938;
extern int D_0037E93C;
extern Slot D_0037E940[2];
extern Blk D_0027F540;
extern int D_001F2784;
extern int D_001F2788;

extern int func_123000(unsigned int value);
extern void func_108498(unsigned int value);

void func_18E5D0(void)
{
    unsigned int i;
    Blk *b;

    D_0037E938 = func_123000(0xCF9217BAu);
    D_0037E93C = func_123000(0x5F65D235u);
    for (i = 0; i < 2; i++) {
        D_0037E940[i].f04 = 0;
        D_0037E940[i].f08 = 0;
        D_0037E940[i].f00 = 0;
    }
    b = &D_0027F540;
    D_001F2784 = ((int (*)(unsigned int))func_108498)((b->wEC << 16) | 0x800060C1u);
    D_001F2788 = ((int (*)(unsigned int))func_108498)((b->w1C << 16) | 0x800060C1u);
}
