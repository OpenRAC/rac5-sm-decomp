/* LEVEL_18:0x15E290 -- resets five fields of the object's attached record and reports success. */
typedef struct {
    char pad_00[0x120];
    unsigned char b120;
    char pad_121[0x13];
    int w134;
    unsigned char b138;
    char pad_139[0x1B];
    int w154;
    unsigned char b158;
} Rec;

typedef struct {
    char pad_00[0x58];
    Rec *rec;
} Obj;

int func_15E290(Obj *o)
{
    Rec *rec;

    rec = o->rec;
    rec->b138 = 0;
    rec->w134 = 0;
    rec->b158 = 0;
    rec->b120 = 0;
    rec->w154 = 0;
    return 1;
}
