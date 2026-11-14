/* LEVEL_10:0x1BDA40 -- scales the record's first float by 30 into the object, converts the record's three stored offsets into pointers (the first two only when their target is valid), clears the object's state byte and returns 1. */
typedef struct {
    float scale;
    int f04;
    int f08;
    int f0C;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0xE];
    Rec *rec;
    char pad58[0x18];
    float f70;
} Obj;

extern int D_0020F9F4;

int func_1BDA40(Obj *o)
{
    Rec *rec = o->rec;
    int a;
    int b;
    int c;
    int ta;
    int tb;

    o->f70 = rec->scale * 30.0f;
    a = rec->f04;
    if (a != 0) {
        ta = D_0020F9F4 + a;
        if (*(int *)(ta + 0x40) == 0) {
            rec->f04 = 0;
        } else {
            rec->f04 = ta;
        }
    }
    b = rec->f08;
    if (b != 0) {
        tb = D_0020F9F4 + b;
        if (*(int *)(tb + 0x40) == 0) {
            rec->f08 = 0;
        } else {
            rec->f08 = tb;
        }
    }
    c = rec->f0C;
    if (c != 0) {
        rec->f0C = D_0020F9F4 + c;
    }
    o->state = 0;
    return 1;
}
