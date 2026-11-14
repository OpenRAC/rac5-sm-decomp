/* USA LEVEL_16.REL:0x14D820 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_066918 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern void func_066918(char *object);
extern int D_001BD9FC;
extern int D_001BDA00;

void func_14D820(char *object)
{
    func_066918(object);
    D_001BD9FC = *(int *)(object + 0xC);
    D_001BDA00 = *(int *)(object + 0xC) + *(int *)(object + 0x30) * 0x80;
}
