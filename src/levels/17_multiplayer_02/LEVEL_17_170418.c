/* LEVEL_17:0x170418 -- after the shared refresh, finds the table entry with a fixed hashed id and stores a pointer to it (or 0) in a global. */
typedef struct {
    char pad00[0x24];
    unsigned int id;
    char pad28[0x1C];
} Ent;

typedef struct {
    char pad00[0x34];
    Ent *ents;
    unsigned int count;
} Table;

extern Table *D_001A7EA0;
extern Ent *D_001B1894;
extern void func_065668(void);

void func_170418(void)
{
    Ent *r;
    unsigned int i;
    unsigned int key;

    func_065668();
    key = 0xC9B607EEu;
    for (i = 0; i < D_001A7EA0->count; i++) {
        if (D_001A7EA0->ents[i].id == key) {
            r = &D_001A7EA0->ents[i];
            goto done;
        }
    }
    r = 0;
done:
    D_001B1894 = r;
}
