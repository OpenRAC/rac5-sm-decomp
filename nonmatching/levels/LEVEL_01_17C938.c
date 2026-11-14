/* USA LEVEL_01.REL:0x17C938, 92-byte candidate (14 November 2026).
 * Measured pinned: 23 differing words; first difference at 0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Entry {
    char pad_00[0x20];
    int key;
    char pad_24[0x10];
} Entry;

typedef struct Model {
    char pad_00[4];
    Entry *entries;
} Model;

typedef struct Link {
    char pad_00[0x21];
    unsigned char slot;
} Link;

typedef struct Obj {
    char pad_00[0x40];
    Model *model;
    char pad_44[0x14];
    Link *link;
} Obj;

typedef struct Slot {
    int key;
    char pad_04[0x1C];
} Slot;

extern Slot D_00207A58[11];

void func_17C938(Obj *obj)
{
    Link *link;
    Slot *s;
    unsigned int i;

    link = obj->link;
    s = D_00207A58;
    i = 0;
    do {
        if (obj->model != 0) {
            if (s->key == obj->model->entries[((unsigned char *)obj)[0x44]].key)
                break;
        }
        s++;
        i++;
    } while (i < 11);
    link->slot = i;
}
