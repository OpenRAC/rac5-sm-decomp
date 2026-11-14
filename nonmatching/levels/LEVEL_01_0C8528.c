/* USA LEVEL_01.REL:0x0C8528 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement disagrees with an
 * accepted prototype.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern int D_00200C00;
extern int D_00200C04;
extern int D_00200C08;
extern char D_00200C10;

struct Obj;
extern void func_135678(struct Obj *p);
extern int func_1324B0(int id);
extern void func_1356C8(struct Obj *p, int v);

void func_0C8528(struct Obj *o)
{
    func_135678(o);
    D_00200C00 = func_1324B0(0xA8A);
    D_00200C04 = func_1324B0(0x327);
    D_00200C08 = func_1324B0(0x218);
    D_00200C10 = 0;
    func_1356C8(o, 0x18);
}
