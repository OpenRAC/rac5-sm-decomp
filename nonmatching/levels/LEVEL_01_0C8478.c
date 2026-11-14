/* USA LEVEL_01.REL:0x0C8478 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement disagrees with an
 * accepted prototype.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
struct Obj;
struct S;

extern void func_135678(struct Obj *p);
extern int func_1324B0(int key);
extern void func_1356C8(struct S *p, int v);
extern int D_00200C00;
extern int D_00200C04;
extern int D_00200C08;
extern unsigned char D_00200C10;

void func_0C8478(struct Obj *o)
{
    func_135678(o);
    D_00200C00 = func_1324B0(0xA87);
    D_00200C04 = func_1324B0(0x327);
    D_00200C08 = func_1324B0(0x218);
    D_00200C10 = 0;
    func_1356C8((struct S *)o, 0x18);
}
