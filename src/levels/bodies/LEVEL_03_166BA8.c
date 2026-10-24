/* LEVEL_03:0x166BA8 -- when the object resolves to a record, notify and
   reset its counter pair. */
typedef struct Obj Obj;

typedef struct {
    char pad[0x64];
    float f64;
    int f68;
} Rec;

extern Rec *func_166C38(Obj *);
extern void func_166618(Obj *);

void func_166BA8(Obj *a0)
{
    Rec *p = func_166C38(a0);
    if (p != 0) {
        func_166618(a0);
        p->f68 = 0;
        p->f64 = -1.0f;
    }
}
