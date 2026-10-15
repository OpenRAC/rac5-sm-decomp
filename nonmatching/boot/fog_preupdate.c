/* Local candidate with a measured loop-order mismatch; not a C match. */
typedef struct {
    unsigned char enabled;
    unsigned char padding[15];
    float distance;
} FogEntry;

extern FogEntry fog_entries[2];

void FOG_PreUpdate__Fv(void) {
    FogEntry *entry = fog_entries;
    do {
        entry->enabled = 0;
        entry->distance = 10000000000.0f;
        ++entry;
    } while (entry < fog_entries + 2);
}
