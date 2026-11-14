/* LEVEL_05:0x152058 -- runs a helper on the object when its record has a flag byte set. */
typedef struct { char pad00[0x27]; unsigned char flag; } Rec;
typedef struct { char pad00[0x54]; Rec *rec; } Obj;
extern void func_018BF8(Obj *o);

void func_152058(Obj *o)
{
    if (o->rec->flag) {
        func_018BF8(o);
    }
}
