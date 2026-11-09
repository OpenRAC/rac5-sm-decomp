/* LEVEL_16:0x115518 -- reports whether the record lists the id among its
   four entries. */
typedef struct {
    int head;
    int ids[4];
    char pad[8];
} Rec;

extern Rec D_002DF9B8[];

int func_115518(int index, int id)
{
    Rec *rec = &D_002DF9B8[index];
    unsigned int i;

    for (i = 0; i < 4; i++) {
        if (rec->ids[i] == id)
            return 1;
    }
    return 0;
}
