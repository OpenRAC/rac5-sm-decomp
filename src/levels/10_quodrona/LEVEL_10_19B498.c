/* LEVEL_10:0x19B498 -- placement copy of LEVEL_10_1651D8.c: stores the value in the state record, then starts a
   positive amount or resets to zero. */
typedef struct {
    char pad[0xf8];
    int value;
} State;

typedef struct {
    char pad[0x58];
    State *state;
} Obj;

extern void func_07D358(Obj *obj, int value, float amount, float start, int a,
                        int b);
extern void func_07D188(Obj *obj, int value, float amount);

void func_19B498(Obj *obj, int value, float amount)
{
    obj->state->value = value;
    if (amount > 0.0f)
        func_07D358(obj, value, amount, 0.0f, 0, 1);
    else
        func_07D188(obj, value, 0.0f);
}
