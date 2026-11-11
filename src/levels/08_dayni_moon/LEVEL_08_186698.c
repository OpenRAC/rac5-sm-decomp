/* LEVEL_08:0x186698 -- placement copy of LEVEL_04_17AFD8.c: starts the effect with the child object unless the state byte is 2. */
typedef struct {
    char pad0[0x45];
    unsigned char state;
    char pad46[0x58 - 0x46];
    void *child;
} Obj;

extern char D_0026BBD8[];
extern void func_20E018(Obj *o, void *child, char *data, float f);

void func_186698(Obj *o)
{
    void *child = o->child;

    if (o->state != 2)
        func_20E018(o, child, D_0026BBD8, 1.0f);
}
