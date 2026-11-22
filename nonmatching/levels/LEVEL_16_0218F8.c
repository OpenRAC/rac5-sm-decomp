/* USA LEVEL_16.REL:0x0218F8 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_17_1623D0.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    char pad0[0x10];
    int w10;
    char pad14[0x14];
    int w28;
    int w2C;
} Info;
typedef struct {
    char pad0[0xF8];
    int wF8;
} Obj;
extern char *D_001C1788[][2];
extern Info *func_022110(int a, int b);
extern Info *func_022170(int a, int b, int c);
extern char *func_10F330(int a);
extern int sprintf(char *buf, const char *fmt, ...);

void func_0218F8(Obj *o, char *buf, int x, unsigned int kind, int n)
{
    Info *u;
    Info *w;
    int j;

    if (kind < 3) {
        u = func_022110(x, o->wF8);
        if (n == 1)
            sprintf(buf, func_10F330(u->w28), 1);
        else
            sprintf(buf, func_10F330(u->w2C), n);
        return;
    }
    w = func_022170(x, 2, o->wF8);
    j = n != 1;
    sprintf(buf, func_10F330((int)D_001C1788[kind - 4][j]), n, func_10F330(w->w10));
}
