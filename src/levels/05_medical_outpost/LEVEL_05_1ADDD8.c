/* LEVEL_05:0x1ADDD8 -- placement copy of LEVEL_02_1D1B98.c: states 0, 2, 8, 10 and 11 report 1; any other state is forwarded with code 11 and reports 3. */
typedef struct { char pad_00[0x45]; unsigned char state; } Obj;

extern void func_1AE4D8(Obj *o, int state, int code);

int func_1ADDD8(Obj *o)
{
    if (o->state != 0 && o->state != 2 && o->state != 8 && o->state != 11 && o->state != 10) {
        func_1AE4D8(o, o->state, 11);
        return 3;
    }
    return 1;
}
