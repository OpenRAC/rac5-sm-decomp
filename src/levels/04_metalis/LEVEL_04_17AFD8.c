/* LEVEL_04:0x17AFD8 -- starts the effect with the child object unless the state byte is 2. */
typedef struct {
    char pad0[0x45];
    unsigned char state;
    char pad46[0x58 - 0x46];
    void *child;
} Obj;

extern char D_0023A6C8[];
extern void func_1E6448(Obj *o, void *child, char *data, float f);

void func_17AFD8(Obj *o)
{
    void *child = o->child;

    if (o->state != 2)
        func_1E6448(o, child, D_0023A6C8, 1.0f);
}
