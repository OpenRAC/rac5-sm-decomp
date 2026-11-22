/* USA LEVEL_16.REL:0x122D20, 396-byte candidate (21 November 2026).
 * Measured pinned -mno-check-zero-division: 24 differing words; first
 * difference at 0x10.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Slot {
    char pad0[0x8C];
    float f8C;
    char pad90[0x10];
    unsigned int iA0;
    char padA4[0x5C];
};

extern unsigned int D_001B4C84;
extern unsigned int D_001BC900[];
extern unsigned int D_001BC908[];
extern float D_001BC910[];
extern float D_001BC9A0;
extern struct Slot D_002E2040[][5];
extern void func_122AE8(struct Slot *s, unsigned int n);

void func_122D20(unsigned int k)
{
    int i;
    struct Slot *cur;
    struct Slot *p;

    D_001BC908[k] = (D_001BC908[k] + 1) % D_001B4C84;
    cur = &D_002E2040[k][D_001BC900[k]];
    D_001BC900[k] = (D_001BC900[k] + 1) % 5;
    func_122AE8(cur, (D_001BC908[k] + 2) % D_001B4C84);
    for (i = 0; i < 5; i++) {
        p = &D_002E2040[k][(i + D_001BC900[k]) % 5];
        p->f8C = (float)(i - 2) * 0.800000011920929f + 0.0f;
        p->iA0 = 0x80808080;
    }
    cur = &D_002E2040[k][(D_001BC900[k] + 2) % 5];
    D_001BC910[k] = D_001BC9A0;
    cur->iA0 = 0xFFFFFFFF;
}
