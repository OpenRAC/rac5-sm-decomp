/* USA LEVEL_04.REL:0x16F730 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_16FA70 unlike its accepted definition; and declares func_16FDD8 unlike
 * its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    char pad0[0x45];
    unsigned char mode;
} Obj;

extern int D_00220D9C;
extern void func_16FDD8(Obj *o, int a);
extern void func_16F990(Obj *o);
extern void func_16FA70(Obj *o);
extern void func_16FA78(Obj *o);

void func_16F730(Obj *o)
{
    switch (o->mode) {
    case 0:
        D_00220D9C++;
        func_16FDD8(o, 1);
        break;
    case 2:
        func_16FA70(o);
        break;
    case 1:
        func_16F990(o);
        break;
    case 3:
        func_16FA78(o);
        break;
    }
}
