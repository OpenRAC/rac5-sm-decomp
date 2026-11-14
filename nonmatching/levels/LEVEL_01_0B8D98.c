/* USA LEVEL_01.REL:0x0B8D98, 200-byte candidate (14 November 2026).
 * Measured pinned: 16 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Panel {
    int state;
    char pad04[0x38 - 4];
} Panel;

extern Panel D_001FC928[];
extern int D_001FC7C0[];

extern void func_0B8598(int index);
extern void func_0B89F8(int index);
extern void func_0B8020(int index);

void func_0B8D98(int index)
{
    switch (D_001FC928[index].state) {
    case 2:
    case 3:
    case 5:
    case 8:
        switch (D_001FC7C0[index]) {
        case 1:
            func_0B8598(index);
            break;
        case 2:
            func_0B89F8(index);
            break;
        case 0:
            break;
        default:
            func_0B8020(index);
            break;
        }
        break;
    }
}
