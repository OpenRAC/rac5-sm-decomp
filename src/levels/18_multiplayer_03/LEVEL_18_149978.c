/* LEVEL_18:0x149978 -- placement copy of LEVEL_16_14B200.c: looks through the flagged owners for an entry with the key and reports whether its status byte is not 2; reports 1 when none matches. */
struct Entry { unsigned int key; unsigned char rest[24]; };
struct Nested { struct Entry entries[12]; unsigned char pad[701]; unsigned char values[1]; };
struct Owner { unsigned char pad[88]; struct Nested *entries; unsigned char pad2[8]; unsigned int flags; unsigned char tail[24]; };
extern struct Owner *D_001BEEBC, *D_001BEEC0;
int func_149978(unsigned int key, unsigned int index)
{
    struct Owner *owner;

    for (owner = D_001BEEBC; owner != D_001BEEC0; ++owner) {
        if (owner->flags & 1) {
            struct Nested *nested = owner->entries;
            unsigned int i;

            for (i = 0; i < 12; i++) {
                if (nested->entries[i].key == key) {
                    return nested->values[index] != 2;
                }
            }
        }
    }
    return 1;
}
