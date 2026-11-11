/* LEVEL_08:0x1C67D8 -- placement copy of LEVEL_01_196628.c: object setup call chain, plus a one-shot trigger function. */
typedef struct Obj { char pad0[0x45]; unsigned char kind; char pad1[0x12]; struct Ext *ext; } Obj;
typedef struct Ext { char pad0[0x50]; float scale; char pad1[0x89]; unsigned char done; } Ext;
extern void func_01AB30(void *p);
extern void func_01AB70(void *p);
extern void func_01AC00(void *p, float f);
extern void func_01AC30(int n);
extern void func_01AC40(float f);
extern void func_01AC50(void *p);
extern void func_085008(void *p, void *buf, int id);
extern void func_16FAC0(void *p, void *buf);

void func_1C67D8(Obj *o)
{
    Ext *e = o->ext;
    func_01AB30((char *)o + 0x30);
    func_01AB70(o);
    func_01AC00((char *)o + 0x20, e->scale);
    func_01AC30(1);
    func_01AC40(1.0f);
    func_01AC50(o);
}

void func_1C6840(Obj *o)
{
    Ext *e;
    int buf[4];
    e = o->ext;
    if (o->kind == 6) {
        if (e->done == 0) {
            func_085008(o, buf, 42);
            func_16FAC0(o, buf);
            e->done = 1;
        }
    }
}
