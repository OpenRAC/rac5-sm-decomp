/* LEVEL_01:0x16F440 -- records in the linked block whether the record's third word is empty, then reports 1 unless it is empty, the first two words are zero and the object is not in state 4. */
typedef struct Rec {
    int w0;
    int w4;
    int w8;
} Rec;

typedef struct Link {
    char pad_00[0x63];
    unsigned char empty;
} Link;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0xE];
    Rec *rec;
    Link *link;
} Obj;

int func_16F440(Obj *o)
{
    Rec *rec = o->rec;
    Link *link = o->link;
    int empty;

    empty = rec->w8 == 0;
    link->empty = empty;
    if (empty && rec->w0 == 0 && rec->w4 == 0 && o->state != 4)
        return 0;
    return 1;
}
