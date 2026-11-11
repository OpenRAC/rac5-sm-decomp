/* LEVEL_03:0x195BE8 -- when the object is idle, builds a local vector and starts the follow-up when the linked entry passes the test. */
typedef struct {
    char pad0[4];
    void *entry;
} Child;

typedef struct {
    char pad0[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Child *child;
} Obj;

extern void func_01A0B0(float *a0);
extern int func_084588(void *entry, float *v);
extern void func_195C48(Obj *o);

void func_195BE8(Obj *o)
{
    float v[4];
    Child *c = o->child;

    if (o->state == 0) {
        func_01A0B0(v);
        if (c->entry != 0 && func_084588(c->entry, v) != 0)
            func_195C48(o);
    }
}
