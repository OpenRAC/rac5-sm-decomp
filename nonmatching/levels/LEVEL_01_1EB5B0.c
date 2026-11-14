/* USA LEVEL_01.REL:0x1EB5B0, 104-byte candidate (14 November 2026).
 * Measured pinned: 21 differing words; first difference at 0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Shared {
    int w0;
    void *link;
    int w8;
    int wC;
} Shared;

extern int D_00398F40;
extern Shared D_00398F30;
extern char D_00398F48[];
extern void *memset(void *s, int c, unsigned int n);

Shared *func_1EB5B0(void)
{
    if (D_00398F40 == 0) {
        D_00398F40 = 1;
        memset(&D_00398F30, 0, 0x10);
        D_00398F30.link = D_00398F48;
    }
    return &D_00398F30;
}
