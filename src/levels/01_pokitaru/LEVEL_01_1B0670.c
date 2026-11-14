/* LEVEL_01:0x1B0670 -- when the object is idle, builds a local vector and records the object in a global when the linked entry passes the test. */
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

extern Obj *D_002356D8;
extern void func_01A2A0(float *a0);
extern int func_084708(void *entry, float *v);

void func_1B0670(Obj *o)
{
    float v[4];
    Child *c = o->child;

    if (o->state == 0) {
        func_01A2A0(v);
        if (func_084708(c->entry, v) != 0)
            D_002356D8 = o;
    }
}
