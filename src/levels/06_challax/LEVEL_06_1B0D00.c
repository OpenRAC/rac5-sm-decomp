/* LEVEL_06:0x1B0D00 -- clears a word of the object's linked record. */
typedef struct Rec { char pad00[0x10]; int w10; } Rec;
typedef struct Obj { char pad00[0x58]; Rec *f58; } Obj;
void func_1B0D00(Obj *o)
{
    o->f58->w10 = 0;
}
