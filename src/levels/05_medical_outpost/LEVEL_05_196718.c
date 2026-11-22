/* LEVEL_05:0x196718 -- placement copy of LEVEL_01_19AA70.c: resolves two hashed keys into globals, clears the two 16-byte slot records and registers two packed keys from the settings block. */
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

extern int D_0038E578;
extern int D_0038E57C;
extern Slot D_0038E580[2];
extern Blk D_00283C80;
extern int D_001F7AEC;
extern int D_001F7AF0;

extern int func_1259E0(unsigned int value);
extern void func_10B4E8(unsigned int value);

void func_196718(void)
{
    unsigned int i;
    Blk *b;

    D_0038E578 = func_1259E0(0xCF9217BAu);
    D_0038E57C = func_1259E0(0x5F65D235u);
    for (i = 0; i < 2; i++) {
        D_0038E580[i].f04 = 0;
        D_0038E580[i].f08 = 0;
        D_0038E580[i].f00 = 0;
    }
    b = &D_00283C80;
    D_001F7AEC = ((int (*)(unsigned int))func_10B4E8)((b->wEC << 16) | 0x800060C1u);
    D_001F7AF0 = ((int (*)(unsigned int))func_10B4E8)((b->w1C << 16) | 0x800060C1u);
}
