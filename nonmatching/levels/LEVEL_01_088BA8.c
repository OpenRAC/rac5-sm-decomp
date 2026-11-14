/* USA LEVEL_01.REL:0x088BA8 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_07CE90.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct { char pad[0x14]; unsigned char flag; } Link;
typedef struct { char pad[0x18]; Link *link; } Obj;

int func_088BA8(Obj *o)
{
    Link *l = o->link;
    if (l == 0 || ((l->flag ^ 1) & 1) != 0) return 0;
    return 1;
}
