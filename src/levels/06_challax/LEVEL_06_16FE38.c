/* LEVEL_06:0x16FE38 -- placement copy of LEVEL_01_17C938.c: looks the object's current entry up in an eleven-slot table and records the matching slot index (or 11) in its linked state. */
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
    unsigned char index;
    char pad_45[0x13];
    Link *link;
} Obj;

typedef struct Slot {
    int key;
    char pad_04[0x1C];
} Slot;

extern Slot D_001F68C0[11];

void func_16FE38(Obj *obj)
{
    Link *link;
    Slot *s;
    unsigned int i;

    link = obj->link;
    s = D_001F68C0;
    for (i = 0; i < 11; i++, s++) {
        if (obj->model != 0 && s->key == obj->model->entries[obj->index].key) {
            link->slot = i;
            return;
        }
    }
    link->slot = i;
}
