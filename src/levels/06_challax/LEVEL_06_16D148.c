/* LEVEL_06:0x16D148 -- when the object is in state 6, clears its record's flag, sets the attached block's scale to 1.0 and moves it to state 7. */
typedef struct {
    char pad_00[0x94];
    unsigned char b94;
} Rec;

typedef struct {
    char pad_00[8];
    float f08;
} Sub;

typedef struct {
    char pad_00[0x45];
    unsigned char b45;
    char pad_46[2];
    Sub *sub;
    char pad_4C[0xC];
    Rec *rec;
} Obj;

extern void func_16D220(Obj *o, int state);

void func_16D148(Obj *o)
{
    Rec *rec;

    rec = o->rec;
    if (o->b45 == 6) {
        rec->b94 = 0;
        o->sub->f08 = 1.0f;
        func_16D220(o, 7);
    }
}
