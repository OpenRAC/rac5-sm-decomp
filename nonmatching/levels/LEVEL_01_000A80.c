/* USA LEVEL_01.REL:0x000A80, 208-byte candidate (21 November 2026).
 * Measured pinned: 28 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int w[5];
} Rec;

extern Rec D_0020B810[];
extern int func_0006B0(void);
extern int func_0002D8(int a);

int func_000A80(void)
{
    int r;
    int a;
    int b;
    int c;
    int d;
    unsigned int i;
    Rec *p;

    r = func_0006B0();
    if (r == 0) {
        a = func_0002D8(1);
        b = func_0002D8(0);
        c = func_0002D8(3);
        d = func_0002D8(5);
        for (i = 8; i < 14; i++) {
            p = &D_0020B810[i];
            if (p->w[0] == a && p->w[1] == b && p->w[2] == c && p->w[3] == d) {
                return i;
            }
        }
    }
    return r;
}
