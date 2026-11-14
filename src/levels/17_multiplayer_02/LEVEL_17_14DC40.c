/* LEVEL_17:0x14DC40 -- counts the linked record's timer down by one and, when it runs out, notifies the attached object and runs the finish step. */
typedef struct Obj Obj;
typedef struct Rec { char pad00[4]; Obj *w4; char pad08[0x3C]; float f44; } Rec;
struct Obj { char pad00[0x58]; Rec *f58; };
extern void func_16A7A8(char *object, int value);
extern void func_14F288(void *record);
void func_14DC40(Obj *o)
{
    Rec *r = o->f58;
    float t = r->f44 - 1.0f;
    r->f44 = t;
    if (t <= 0.0f) {
        if (r->w4 != 0) func_16A7A8((char *)r->w4, (int)o);
        func_14F288(o);
    }
}
