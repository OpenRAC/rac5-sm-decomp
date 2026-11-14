/* USA LEVEL_10.REL:0x165998 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_168BB0 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern int D_002A11C0[];
extern int D_0039F100;
extern int D_0039F104;
extern int D_00210414;
extern int func_168BB0(int a0, int a1, int a2, int a3, int a4, int a5);
extern void func_074660(void);
extern int func_127EC8(unsigned int value);

void func_165998(void)
{
    D_0039F100 = func_168BB0(0x10, D_002A11C0[0], 0, 0, 0, 1);
    D_0039F104 = func_168BB0(0x10, D_002A11C0[2], 0, 0, 0, 3);
    func_074660();
    D_00210414 = func_127EC8(0x3BC144A5U);
}
