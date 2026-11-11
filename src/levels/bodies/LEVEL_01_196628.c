/* LEVEL_01:0x196628 -- object setup call chain, plus a one-shot trigger function. */
typedef struct Obj { char pad0[0x45]; unsigned char kind; char pad1[0x12]; struct Ext *ext; } Obj;
typedef struct Ext { char pad0[0x50]; float scale; char pad1[0x89]; unsigned char done; } Ext;
extern void func_01A140(void *p);
extern void func_01A180(void *p);
extern void func_01A210(void *p, float f);
extern void func_01A240(int n);
extern void func_01A250(float f);
extern void func_01A260(void *p);
extern void func_07D098(void *p, void *buf, int id);
extern void func_159190(void *p, void *buf);

void func_196628(Obj *o)
{
    Ext *e = o->ext;
    func_01A140((char *)o + 0x30);
    func_01A180(o);
    func_01A210((char *)o + 0x20, e->scale);
    func_01A240(1);
    func_01A250(1.0f);
    func_01A260(o);
}

void func_196690(Obj *o)
{
    Ext *e;
    int buf[4];
    e = o->ext;
    if (o->kind == 6) {
        if (e->done == 0) {
            func_07D098(o, buf, 42);
            func_159190(o, buf);
            e->done = 1;
        }
    }
}
