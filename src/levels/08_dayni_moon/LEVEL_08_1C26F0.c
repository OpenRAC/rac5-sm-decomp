/* LEVEL_08:0x1C26F0 -- stores the lookup result for a packed id, refreshes, then stores a second packed id built from another field of the same record. */
typedef struct {
    char pad0[0x1C];
    unsigned int f1c;
    char pad20[0x124 - 0x20];
    unsigned int f124;
} Rec;

extern Rec D_002E7040;
extern int D_00251E5C;
extern unsigned int D_003E8928;
extern int func_110E80(unsigned int value);
extern void func_07B0D8(void);

void func_1C26F0(void)
{
    D_00251E5C = func_110E80((D_002E7040.f124 << 16) | 0x700030D9u);
    func_07B0D8();
    D_003E8928 = (D_002E7040.f1c << 16) | 0xC0007044u;
}
