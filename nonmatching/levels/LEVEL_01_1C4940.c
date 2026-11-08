/* LEVEL_01.REL:0x1C4940: reviewed 140-byte candidate.
 * pinned C with gnu-ee-trial links 140 bytes; first differs at +50.
 * Retry: Recover the initial cursor-load intermediate and loop register lifetimes
 * while preserving the search behavior.
 * No matching credit.
 */
typedef struct SearchContext {
    char pad_00[0x45];
    unsigned char count;
    char pad_46[0x0E];
    void **items;
} SearchContext;

extern int func_084708(void *, void *);

void *func_1C4940(SearchContext *context, void *key)
{
    unsigned int index;
    void **cursor;

    cursor = context->items;
    for (index = 0; index < context->count; ++index, ++cursor) {
            void *item = *cursor;
            if (item != 0 && func_084708(item, key) != 0)
                return item;
    }
    return 0;
}
