/* USA LEVEL_16.REL:0x123690 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_07B2E0 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    char pad00[0x28];
    int a;
    char pad2C[0x620 - 0x2C];
    int b;
} Obj;

extern Obj *D_001A1AB8[1];
extern int D_001BC908[];
extern void func_07B2E0(int mode);

void func_123690(void)
{
    func_07B2E0(0);
    D_001A1AB8[0]->a = D_001BC908[0];
    D_001A1AB8[0]->b = D_001BC908[1];
}
