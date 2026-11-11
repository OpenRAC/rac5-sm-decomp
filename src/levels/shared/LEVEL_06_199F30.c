/* LEVEL_06:0x199F30 -- clears the two words of the attached record and reports success. */
typedef struct {
    char pad_00[0x10];
    int w10;
    int w14;
} Rec;

typedef struct {
    char pad_00[0x54];
    Rec *rec;
} Obj;

int func_199F30(Obj *o)
{
    Rec *r = o->rec;
    r->w14 = 0;
    r->w10 = 0;
    return 1;
}
