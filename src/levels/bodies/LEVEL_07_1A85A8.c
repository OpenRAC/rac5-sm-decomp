/* LEVEL_07:0x1A85A8 -- placement copy of LEVEL_01_196628.c: object setup call chain, plus a one-shot trigger function. */
typedef struct Obj { char pad0[0x45]; unsigned char kind; char pad1[0x12]; struct Ext *ext; } Obj;
typedef struct Ext { char pad0[0x50]; float scale; char pad1[0x89]; unsigned char done; } Ext;
extern void func_01A8B0(void *p);
extern void func_01A8F0(void *p);
extern void func_01A980(void *p, float f);
extern void func_01A9B0(int n);
extern void func_01A9C0(float f);
extern void func_01A9D0(void *p);
extern void func_07F200(void *p, void *buf, int id);
extern void func_15B738(void *p, void *buf);

void func_1A85A8(Obj *o)
{
    Ext *e = o->ext;
    func_01A8B0((char *)o + 0x30);
    func_01A8F0(o);
    func_01A980((char *)o + 0x20, e->scale);
    func_01A9B0(1);
    func_01A9C0(1.0f);
    func_01A9D0(o);
}

void func_1A8610(Obj *o)
{
    Ext *e;
    int buf[4];
    e = o->ext;
    if (o->kind == 6) {
        if (e->done == 0) {
            func_07F200(o, buf, 42);
            func_15B738(o, buf);
            e->done = 1;
        }
    }
}
