/* USA LEVEL_01.REL:0x0B9E78 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_0C3530; and is defined
 * unlike the declaration in the accepted caller LEVEL_01_0C3E38.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct Obj {
    char pad_00[0x6C];
    int w6C;
    int w70;
} Obj;

int func_0B9E78(Obj *o, int a, int b)
{
    o->w70 = a;
    o->w6C = b;
    return 1;
}
