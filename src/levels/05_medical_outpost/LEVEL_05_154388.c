/* LEVEL_05:0x154388 -- placement copy of LEVEL_02_1745D8.c: clears the timer, sets flag 0x40, clears the record byte, starts the effect and returns 1. */
typedef struct { char pad00[0x10]; unsigned char b10; } Rec;
typedef struct { char pad00[0x54]; Rec *rec; char pad58[0xC]; unsigned int flags; char pad68[8]; int timer; } Obj;
extern char D_00380B68[];
extern void func_1BC418(void *table, void *p);

int func_154388(Obj *o)
{
    o->timer = 0;
    o->flags |= 0x40;
    o->rec->b10 = 0;
    func_1BC418(D_00380B68, o);
    return 1;
}
