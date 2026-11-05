/* USA LEVEL_08:0x20FA38, 64 retail bytes; three raw-identical candidate sites.
 * Pinned C links to 64 bytes but first differs at body byte 13: the computed
 * end pointer uses another temporary, with later loop scheduling differences.
 * The link layout below is a source hypothesis. Revisit with evidence for the
 * original list-initialization loop and its live ranges. This is uncounted.
 */
struct Link_20FA38 {
    struct Link_20FA38 *next;
    struct Link_20FA38 *previous;
};

struct Pool_20FA38 {
    char pad_00[0xC];
    struct Link_20FA38 *first;
    int count;
    int active;
};

void func_20FA38(struct Pool_20FA38 *pool)
{
    struct Link_20FA38 *item = pool->first;
    struct Link_20FA38 *end = item + pool->count;
    if (item == end) {
        pool->active = 0;
        return;
    }
    pool->active = 0;
    item->previous = item;
    do {
        struct Link_20FA38 *next;
        item->next = item;
        next = item + 1;
        if (next == end)
            break;
        next->previous = next;
        item = next;
    } while (1);
}
