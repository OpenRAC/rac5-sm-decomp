/* LEVEL_02.REL:0x07B648: reviewed 80-byte candidate.
 * pinned C with gnu-ee-trial links 72 bytes; first differs at +18.
 * Retry: Recover the empty-list guard and traversal shape with the base copy and load
 * delays; ee-frozen alone is insufficient.
 * No matching credit.
 */
struct Entry {
    int key;
    int fields[8];
};

extern int D_0020B074;
extern struct Entry D_00251330[];

struct Entry *func_07B648(int key)
{
    struct Entry *base = D_00251330;
    struct Entry *entry = base;
    struct Entry *end = base + D_0020B074;
    if (entry != end) {
        do {
            if (entry->key == key)
                return entry;
            entry++;
        } while (entry != end);
    }
    return 0;
}
