/* USA LEVEL_01.REL:0x156EA0, 84-byte candidate (14 November 2026).
 * Measured pinned: 5 differing words; first difference at 0x14.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern char D_0021DC48[];
extern int func_0BBD30(void);
extern void func_0B3C38(char *msg, int code, unsigned int v);
extern void func_07C670(void *o, int a);

void func_156EA0(void *o)
{
    if (func_0BBD30() == 0) {
        func_0B3C38(D_0021DC48, -0x71, 0xFFFFFFFF);
        func_07C670(o, 1);
    }
}
