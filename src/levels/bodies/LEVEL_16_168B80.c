/* LEVEL_16:0x168B80 -- compares the state's value with the table entry it
   indexes; the second function is a plain wrapper. */
typedef struct {
    char pad[0x68];
    unsigned char index;
    unsigned char value;
} State;

typedef struct {
    char pad[0x58];
    State *state;
} Obj;

extern unsigned char D_001D68F8[];

int func_168B80(Obj *obj)
{
    State *state = obj->state;

    return state->value == D_001D68F8[state->index];
}

int func_168BA8(Obj *obj)
{
    return func_168B80(obj);
}
