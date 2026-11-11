/* LEVEL_06:0x1B0C58 -- when the object is in state 6 and its record is in state 2, moves the record to state 1. */
typedef struct Rec { char pad_00[0x94]; unsigned char state; } Rec;
typedef struct Obj { char pad_00[0x45]; unsigned char mode; char pad_46[0x12]; Rec *rec; } Obj;

void func_1B0C58(Obj *o)
{
    Rec *r = o->rec;
    if (o->mode == 6 && r->state == 2)
        r->state = 1;
}
