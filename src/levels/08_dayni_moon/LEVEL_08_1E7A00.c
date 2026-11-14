/* LEVEL_08:0x1E7A00 -- placement copy of LEVEL_02_1D1B98.c: states 0, 2, 8, 10 and 11 report 1; any other state is forwarded with code 11 and reports 3. */
typedef struct { char pad_00[0x45]; unsigned char state; } Obj;

extern void func_1E82D0(Obj *o, int state, int code);

int func_1E7A00(Obj *o)
{
    if (o->state != 0 && o->state != 2 && o->state != 8 && o->state != 11 && o->state != 10) {
        func_1E82D0(o, o->state, 11);
        return 3;
    }
    return 1;
}
