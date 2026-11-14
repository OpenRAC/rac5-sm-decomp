/* USA LEVEL_10.REL:0x18E018, 88-byte candidate (14 November 2026).
 * Measured pinned: 4 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int f00;
    unsigned int key;
    int result;
} Ent;

extern Ent D_00211490[];
extern int func_127EC8(unsigned int value);

void func_18E018(void)
{
    Ent *p = D_00211490;
    Ent *end = p + 6;

    do {
        if (p->key != 0) {
            p->result = func_127EC8(p->key);
        }
        p++;
    } while (p < end);
}
