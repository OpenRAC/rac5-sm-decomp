/* LEVEL_07:0x15AD48 -- placement copy of LEVEL_05_152058.c: runs a helper on the object when its record has a flag byte set. */
typedef struct { char pad00[0x27]; unsigned char flag; } Rec;
typedef struct { char pad00[0x54]; Rec *rec; } Obj;
extern void func_019C98(Obj *o);

void func_15AD48(Obj *o)
{
    if (o->rec->flag) {
        func_019C98(o);
    }
}
