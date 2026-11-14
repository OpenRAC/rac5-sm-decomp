/* USA LEVEL_19.REL:0x159F38 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_02D588 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern void *memset(void *, int, unsigned int);

typedef struct {
    int w[11];
} Blk;

typedef struct {
    char pad00[0x54];
    Blk *src;
    Blk *dst;
} Obj;

extern void func_02D528(Blk *a0);
extern void func_02D588(Blk *a0, Obj *o);

void func_159F38(Obj *o)
{
    Blk *dst = o->dst;
    Blk *src = o->src;

    memset(dst, 0, 0xF0);
    *dst = *src;
    func_02D528(src);
    func_02D588(src, o);
}
