/* LEVEL_19:0x148138 -- counts the record's timer down by the step and runs the expiry helper when it is spent; returns 2. */
typedef struct {
    int w0;
    char pad04[0x24 - 0x04];
    float timer;
} Rec;

typedef struct {
    char pad00[0x58];
    Rec *rec;
} Obj;

extern void func_148660(Obj *o, int a);

int func_148138(Obj *o, float dt)
{
    Rec *r = o->rec;
    float t = r->timer - dt;

    r->timer = t;
    if (t <= 0.0f) {
        func_148660(o, r->w0);
    }
    return 2;
}
