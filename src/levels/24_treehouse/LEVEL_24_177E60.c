/* LEVEL_24:0x177E60 -- placement copy of LEVEL_01_196628.c: object setup call chain, plus a one-shot trigger function. */
typedef struct Obj { char pad0[0x45]; unsigned char kind; char pad1[0x12]; struct Ext *ext; } Obj;
typedef struct Ext { char pad0[0x50]; float scale; char pad1[0x89]; unsigned char done; } Ext;
extern void func_018888(void *p);
extern void func_0188C8(void *p);
extern void func_018958(void *p, float f);
extern void func_018988(int n);
extern void func_018998(float f);
extern void func_0189A8(void *p);
extern void func_077778(void *p, void *buf, int id);
extern void func_14D670(void *p, void *buf);

void func_177E60(Obj *o)
{
    Ext *e = o->ext;
    func_018888((char *)o + 0x30);
    func_0188C8(o);
    func_018958((char *)o + 0x20, e->scale);
    func_018988(1);
    func_018998(1.0f);
    func_0189A8(o);
}

void func_177EC8(Obj *o)
{
    Ext *e;
    int buf[4];
    e = o->ext;
    if (o->kind == 6) {
        if (e->done == 0) {
            func_077778(o, buf, 42);
            func_14D670(o, buf);
            e->done = 1;
        }
    }
}
