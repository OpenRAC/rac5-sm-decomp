/* LEVEL_24:0x15EC70 -- placement copy of LEVEL_03_178BB0.c: rebases the record's offset fields by the global base: the first link, then the table entries, copying the first link into slot 0x13's mirror. */
typedef struct {
    char pad0[0x10];
    int link;
    char pad14[4];
    int table[20];
    char pad68[0xC];
} Rec;

typedef struct {
    char pad0[0x54];
    Rec *rec;
} Obj;

extern int D_001D7A14;

void func_15EC70(Obj *o)
{
    Rec *rec = o->rec;
    int i;

    if (rec->link != 0) {
        rec->link = D_001D7A14 + rec->link;
    }
    for (i = 0; i < 20; i++) {
        if (i == 0x13) {
            *(int *)((char *)rec + 0x64) = rec->link;
        } else if (rec->table[i] != 0) {
            rec->table[i] = D_001D7A14 + rec->table[i];
        }
    }
}
