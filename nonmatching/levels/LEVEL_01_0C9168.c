/* USA LEVEL_01.REL:0x0C9168 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_133550 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct Obj Obj;
extern unsigned char *D_001F3FAC;
extern void func_135678(Obj *p);
extern void func_133010(int a);
extern void func_133550(int);
void func_0C9168(Obj *o)
{
    func_135678(o);
    func_133010(0);
    func_133550(*(int *)(D_001F3FAC + 0x3c));
}
