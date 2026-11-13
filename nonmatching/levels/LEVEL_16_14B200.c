/* USA LEVEL_16.REL:0x14B200, 128-byte candidate.
 * Measured pinned/gnu-ee-trial: 120 linked bytes; first differing word +0x10.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
struct Entry { unsigned int key; unsigned char rest[24]; };
struct Nested { struct Entry entries[12]; unsigned char pad[701]; unsigned char values[1]; };
struct Owner { unsigned char pad[88]; struct Nested *entries; unsigned char pad2[8]; unsigned int flags; unsigned char tail[24]; };
extern struct Owner *D_001BD9FC, *D_001BDA00;
int func_14B200(unsigned int key, unsigned int index)
{
    struct Owner *owner;
    for (owner = D_001BD9FC; owner != D_001BDA00; ++owner) {
        if (owner->flags & 1) {
            struct Nested *nested = owner->entries;
            struct Entry *entry = nested->entries;
            struct Entry *end = entry + 12;
            unsigned char *value = nested->values + index;
            do {
                if (entry->key == key) return *value != 2;
                ++entry;
            } while (entry < end);
        }
    }
    return 1;
}
