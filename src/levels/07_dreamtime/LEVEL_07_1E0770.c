/* LEVEL_07:0x1E0770 -- placement copy of LEVEL_01_1D1FB8.c: looks up the resource named by each of the two entries (0 when unnamed). */
extern int func_12D068(unsigned int id);

typedef struct Entry {
    unsigned int id;
    int pad04[4];
    int handle;
} Entry;

typedef struct Owner {
    char pad00[0x6C];
    Entry entries[2];
} Owner;

void func_1E0770(Owner *object)
{
    int i;

    for (i = 0; i != 2; i++) {
        object->entries[i].handle = object->entries[i].id != 0 ? func_12D068(object->entries[i].id) : 0;
    }
}
