/* LEVEL_06:0x190648 -- placement copy of LEVEL_01_19AA70.c: resolves two hashed keys into globals, clears the two 16-byte slot records and registers two packed keys from the settings block. */
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

extern int D_00383B38;
extern int D_00383B3C;
extern Slot D_00383B40[2];
extern Blk D_00284B40;
extern int D_001F79FC;
extern int D_001F7A00;

extern int func_1206C0(unsigned int value);
extern void func_105678(unsigned int value);

void func_190648(void)
{
    unsigned int i;
    Blk *b;

    D_00383B38 = func_1206C0(0xCF9217BAu);
    D_00383B3C = func_1206C0(0x5F65D235u);
    for (i = 0; i < 2; i++) {
        D_00383B40[i].f04 = 0;
        D_00383B40[i].f08 = 0;
        D_00383B40[i].f00 = 0;
    }
    b = &D_00284B40;
    D_001F79FC = ((int (*)(unsigned int))func_105678)((b->wEC << 16) | 0x800060C1u);
    D_001F7A00 = ((int (*)(unsigned int))func_105678)((b->w1C << 16) | 0x800060C1u);
}
