/* USA LEVEL_01.REL:0x0F0998, 88-byte candidate (14 November 2026).
 * Measured pinned: 12 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Layout {
    int header;
    int stride;
} Layout;

typedef struct Pool {
    char pad0[0x14];
    Layout *layout;
} Pool;

typedef struct Chunk {
    int used;
    char *free;
} Chunk;

typedef struct Block {
    char pad0[0xC];
    Chunk *chunk;
    char pad10[4];
    int count;
} Block;

void func_0F0998(Pool *pool, Block *blk)
{
    Layout *l;
    Chunk *c;
    int stride;
    char *first;
    char *last;
    char *p;

    l = pool->layout;
    c = blk->chunk;
    stride = l->stride;
    first = (char *)c + l->header;
    last = first + stride * (blk->count - 1);
    for (p = first; p != last; p += stride) {
        *(char **)p = p + stride;
    }
    *(char **)p = 0;
    c->free = first;
    c->used = 0;
}
