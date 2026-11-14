/* LEVEL_06:0x16E278 -- clears the byte at offset 0x96 of the object's state record. */
typedef struct { char pad_00[0x96]; unsigned char flag; } State;
typedef struct { char pad_00[0x58]; State *state; } Obj;

void func_16E278(Obj *o)
{
    o->state->flag = 0;
}
