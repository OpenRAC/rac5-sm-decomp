/* LEVEL_24:0x199B90 -- releases the record's handle and, when its slot id is set, frees the slot and marks the id invalid. */
typedef struct Obj {
    char pad[0x68];
} Obj;

typedef struct Rec {
    unsigned short id;
    char pad_02;
    unsigned char kind;
    char pad_04[4];
    void *handle;
} Rec;

extern Obj D_001FB5F8[];
extern void func_076D68(void *handle, int flag);
extern void func_08E658(Obj *o, unsigned int index);

void func_199B90(char *object)
{
    Rec *rec = *(Rec **)(object + 0x58);
    unsigned int id;
    Obj *slot;

    if (rec->handle != 0)
        func_076D68(rec->handle, 1);
    slot = &D_001FB5F8[rec->kind];
    id = rec->id;
    if (id != 0xFFFF) {
        func_08E658(slot, id);
        rec->id = 0xFFFF;
    }
}
