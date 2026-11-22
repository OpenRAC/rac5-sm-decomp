/* USA LEVEL_03.REL:0x1CED10, 232-byte candidate (21 November 2026).
 * Measured pinned: 6 differing words; first difference at 0x6C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct P19338;

extern char D_0024A578[];

extern void *memset(void *s, int c, unsigned int n);
extern void func_1D4208(char *object, int value);
extern void func_095488(char *entry);
extern void func_019338(struct P19338 *p);

void func_1CED10(char *object)
{
    char *state;
    char *base;
    char *rec;
    char *entry;

    state = *(char **)(object + 0x58);
    base = *(char **)(*(char **)(*(char **)(object + 0x54) + 0x10) + 0x58);
    rec = base + *(unsigned char *)(state + 0x68) * 0x1C;
    if (*(unsigned char *)(rec + 0x18) & 1) {
        *(unsigned char *)(base + 0x158) = *(unsigned char *)(base + 0x158) - 1;
    }
    memset(rec, 0, 0x1C);
    if (*(unsigned char *)(object + 0x45) == 0x15) {
        if (*(int *)(state + 0x40) != 0) {
            func_1D4208(*(char **)(state + 0x40), (int)object);
        }
    }
    entry = D_0024A578 + *(unsigned char *)(state + 3) * 0x68;
    if (*(unsigned short *)state != 0xFFFF) {
        func_095488(entry);
        *(unsigned short *)state = 0xFFFF;
    }
    func_019338((struct P19338 *)object);
    if (*(int *)(object + 0x5C) == 0) {
        *(int *)(object + 0x5C) = 1;
    }
}
