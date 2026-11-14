/* LEVEL_09:0x1A3208 -- placement copy of LEVEL_01_1B0670.c: when the object is idle, builds a local vector and records the object in a global when the linked entry passes the test. */
typedef struct {
    char pad0[0x10];
    void *entry;
} Child;

typedef struct {
    char pad0[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Child *child;
} Obj;

extern Obj *D_0021CE58;
extern void func_019710(float *a0);
extern int func_0810E8(void *entry, float *v);

void func_1A3208(Obj *o)
{
    float v[4];
    Child *c = o->child;

    if (o->state == 0) {
        func_019710(v);
        if (func_0810E8(c->entry, v) != 0)
            D_0021CE58 = o;
    }
}
