/* USA LEVEL_08.REL:0x203390, 88-byte candidate (14 November 2026).
 * Measured pinned: 12 differing words; first difference at +0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int first;
    int stride;
} Layout;

typedef struct {
    int tail;
    char *head;
} Header;

typedef struct {
    char pad_00[0x14];
    Layout *layout;
} Owner;

typedef struct {
    char pad_00[0x0C];
    Header *hdr;
    char pad_10[4];
    int count;
} Pool;

void func_203390(Owner *o, Pool *pool)
{
    Layout *lay = o->layout;
    Header *hdr = pool->hdr;
    int stride = lay->stride;
    char *base = (char *)hdr + lay->first;
    char *end = stride * (pool->count - 1) + base;
    char *p = base;

    while (p != end) {
        char *next = p + stride;
        *(char **)(p + 0x48) = next;
        p = next;
    }
    *(char **)(p + 0x48) = 0;
    hdr->head = base;
    hdr->tail = 0;
}
