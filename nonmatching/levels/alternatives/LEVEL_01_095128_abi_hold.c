/* LEVEL_01.REL:0x095128: reviewed 148-byte candidate, held for ABI review.
 * Placement copy of LEVEL_02_09B7F8.c.
 * pinned C with gnu-ee-trial links 148/148 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It defines the function returning void with (pointer, pointer, pointer,
 * pointer), but the accepted caller LEVEL_01_0130F0.c declares it returning
 * void with (pointer, pointer, int, pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    int value;
    unsigned short start;
    unsigned short count;
} Entry;

typedef struct {
    char pad_00[10];
    short index;
    char pad_0C[4];
} Link;

typedef struct {
    int width;
    int height;
    char pad_08[0x58];
    Entry *entries;
    Link *links;
} Grid;

void func_095128(Grid *grid, Entry *entries, void *unused, Link *links)
{
    int next = 0;
    int i = 0;
    int height = grid->height;
    int width = grid->width;
    int total = width * height;

    grid->links = links;
    grid->entries = entries;
    while (i < total) {
        Entry *entry = entries + i;
        unsigned int count = entry->count;
        if (count != 0) {
            int j = count;
            int offset = next * 0x10 + 10;
            short *index = (short *)((char *)links + offset);
            do {
                *index = i;
                --j;
                index = (short *)((char *)index + 0x10);
            } while (j != 0);
        }
        entry->start = next;
        entry->value = 0;
        entry->count = 0;
        next += count;
        ++i;
    }
    entries[total].start = next;
    entries[total].value = 0;
    entries[total].count = 0;
}
