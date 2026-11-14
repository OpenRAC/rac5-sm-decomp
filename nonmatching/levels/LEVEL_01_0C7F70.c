/* USA LEVEL_01.REL:0x0C7F70 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_135678 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern int D_00200C00;
extern int D_00200C04;
extern int D_00200C08;
extern unsigned char D_00200C10;
extern void func_135678(void);
extern int func_1324B0(int id);
extern void func_1356C8(void *p, int a);

void func_0C7F70(void *p)
{
    func_135678();
    D_00200C00 = func_1324B0(0xA89);
    D_00200C04 = func_1324B0(0xA8B);
    D_00200C08 = func_1324B0(0xA8C);
    D_00200C10 = 1;
    func_1356C8(p, 0x18);
}
