/* USA LEVEL_16.REL:0x15D478, 108-byte candidate.
 * Measured pinned/gnu-ee-trial: 84 linked bytes; first differing word +0x8.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
struct Entry { int key; int value; int pad[4]; };
struct Table { struct Entry entries[64]; unsigned int count; };
struct Owner { char pad[88]; struct Table *table; };
extern struct Owner *D_001BDDE0;
void func_15D478(int key, int value)
{
    struct Table *table;
    unsigned int i;
    if (!D_001BDDE0) return;
    table = D_001BDDE0->table;
    for (i = 0; i < table->count; ++i) {
        if (table->entries[i].key == key) {
            table->entries[i].value = value;
            return;
        }
    }
}
