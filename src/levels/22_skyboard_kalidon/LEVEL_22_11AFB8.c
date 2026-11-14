/* LEVEL_22:0x11AFB8 -- when the object exists and the global pause byte is clear, counts its timer down by one and dispatches on its state (1 and 2 share a handler, 3 has its own). */
struct Obj {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x2A];
    float timer;
};

extern unsigned char D_001664AC;
extern void func_11BC08(struct Obj *o);
extern void func_11BBC0(struct Obj *o);

void func_11AFB8(struct Obj *o)
{
    unsigned char s;

    if (o == 0) {
        return;
    }
    if (D_001664AC != 0) {
        return;
    }
    o->timer = o->timer - 1.0f;
    s = o->state;
    switch (s) {
    case 0:
        break;
    case 1:
        func_11BC08(o);
        break;
    case 2:
        func_11BC08(o);
        break;
    case 3:
        func_11BBC0(o);
        break;
    }
}
