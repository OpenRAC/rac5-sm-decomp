/* LEVEL_19:0x115C90 -- placement copy of LEVEL_16_115518.c: reports whether the record lists the id among its
   four entries. */
typedef struct {
    int head;
    int ids[4];
    char pad[8];
} Rec;

extern Rec D_002DFB38[];

int func_115C90(int index, int id)
{
    Rec *rec = &D_002DFB38[index];
    unsigned int i;

    for (i = 0; i < 4; i++) {
        if (rec->ids[i] == id)
            return 1;
    }
    return 0;
}
