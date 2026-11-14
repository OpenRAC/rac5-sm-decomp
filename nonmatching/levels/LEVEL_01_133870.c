/* USA LEVEL_01.REL:0x133870 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_1334B8; and is defined
 * unlike the declaration in the accepted caller LEVEL_01_133550.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_0020704C;
extern int *func_1355D8(int *p);

int func_133870(int *p)
{
    D_0020704C->value = func_1355D8(p);
    return 1;
}
