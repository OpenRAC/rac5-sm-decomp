/* USA LEVEL_01.REL:0x19AA70, 184-byte candidate (14 November 2026).
 * Measured pinned: 0 differing words; first difference at prototype-conflict.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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

extern int D_00396E78;
extern int D_00396E7C;
extern Slot D_00396E80[2];
extern Blk D_00297DC0;
extern int D_0020894C;
extern int D_00208950;

extern int func_12A068(unsigned int value);
extern int func_10F0A8(unsigned int value);

void func_19AA70(void)
{
    unsigned int i;
    Blk *b;

    D_00396E78 = func_12A068(0xCF9217BAu);
    D_00396E7C = func_12A068(0x5F65D235u);
    for (i = 0; i < 2; i++) {
        D_00396E80[i].f04 = 0;
        D_00396E80[i].f08 = 0;
        D_00396E80[i].f00 = 0;
    }
    b = &D_00297DC0;
    D_0020894C = func_10F0A8((b->wEC << 16) | 0x800060C1u);
    D_00208950 = func_10F0A8((b->w1C << 16) | 0x800060C1u);
}
