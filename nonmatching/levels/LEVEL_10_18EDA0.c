/* USA LEVEL_10.REL:0x18EDA0 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_18FA18 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern char D_003A00A0[];
extern char D_003A0120[];
extern int D_002A1204;
extern int D_002114E4;
typedef struct { char pad00[4]; int w04; } Obj;
extern void func_034AD8(char *item);
extern void func_035500(char *item, int arg, char *other);
extern int func_18FA18(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1);

void func_18EDA0(Obj *o)
{
    func_034AD8(D_003A00A0);
    func_035500(D_003A0120, o->w04, D_003A00A0);
    D_002114E4 = func_18FA18(0x10, D_002A1204, 0, 0, 0, 3);
}
