/* USA LEVEL_01.REL:0x132BF8 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement disagrees with an
 * accepted prototype.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_0020704C;
extern int MEMCARD_Busy__Fv(void);
extern int func_132EC0(void);
extern int func_132DE0(int unused);
extern int func_132C78(void);

int func_132BF8(int unused)
{
    int r = 0;

    if (D_0020704C->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (((int (*)(int))func_132EC0)(0) == 0 && func_132DE0(0) != 0 && func_132C78() == 0)) {
        r = 1;
    }
    return r;
}
