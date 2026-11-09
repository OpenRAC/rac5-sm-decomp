/* LEVEL_18:0x1142C0 -- placement copy of LEVEL_16_115518.c: reports whether the record lists the id among its
   four entries. */
typedef struct {
    int head;
    int ids[4];
    char pad[8];
} Rec;

extern Rec D_002DFD38[];

int func_1142C0(int index, int id)
{
    Rec *rec = &D_002DFD38[index];
    unsigned int i;

    for (i = 0; i < 4; i++) {
        if (rec->ids[i] == id)
            return 1;
    }
    return 0;
}
