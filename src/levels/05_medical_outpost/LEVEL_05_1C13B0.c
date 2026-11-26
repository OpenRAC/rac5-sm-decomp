/* LEVEL_05:0x1C13B0 -- placement copy of LEVEL_01_1D1FB8.c: looks up the resource named by each of the two entries (0 when unnamed). */
extern int func_1259E0(unsigned int id);

typedef struct Entry {
    unsigned int id;
    int pad04[4];
    int handle;
} Entry;

typedef struct Owner {
    char pad00[0x6C];
    Entry entries[2];
} Owner;

void func_1C13B0(Owner *object)
{
    int i;

    for (i = 0; i != 2; i++) {
        object->entries[i].handle = object->entries[i].id != 0 ? func_1259E0(object->entries[i].id) : 0;
    }
}
