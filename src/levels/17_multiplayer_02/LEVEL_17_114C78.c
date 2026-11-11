/* LEVEL_17:0x114C78 -- placement copy of LEVEL_16_115518.c: reports whether the record lists the id among its
   four entries. */
typedef struct {
    int head;
    int ids[4];
    char pad[8];
} Rec;

extern Rec D_002D0CB8[];

int func_114C78(int index, int id)
{
    Rec *rec = &D_002D0CB8[index];
    unsigned int i;

    for (i = 0; i < 4; i++) {
        if (rec->ids[i] == id)
            return 1;
    }
    return 0;
}
