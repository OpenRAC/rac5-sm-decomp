/* LEVEL_08:0x17A970 -- placement copy of LEVEL_04_16F5C8.c: passes the object's record to a helper, clears two state bytes, returns 1. */
typedef struct { char pad00[0x58]; int *rec; char pad5C[0x1A]; unsigned char b76; unsigned char b77; } Obj;
extern void func_205248(Obj *o, int *rec);

int func_17A970(Obj *o)
{
    func_205248(o, o->rec);
    o->b77 = 0;
    o->b76 = 0;
    return 1;
}
