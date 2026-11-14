/* USA LEVEL_01.REL:0x0C8930 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement disagrees with an
 * accepted prototype.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
struct Obj;

extern char D_0032BD90[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_135678(struct Obj *p);
extern char *func_1324B0(int id);
extern int func_133720(void);
extern void func_0D6F50(int a, char *text, char *title, int c);
extern void func_0D6F88(int a);

void func_0C8930(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_135678(p);
    buf = D_0032BD90;
    fmt = func_1324B0(0xA5B);
    a = func_133720();
    b = func_133720();
    sprintf(buf, fmt, a, b);
    func_0D6F50(2, buf, func_1324B0(0x218), 0);
    func_0D6F88(5);
}
