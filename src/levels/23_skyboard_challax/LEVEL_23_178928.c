/* LEVEL_23:0x178928 -- placement copy of LEVEL_01_196628.c: object setup call chain, plus a one-shot trigger function. */
typedef struct Obj { char pad0[0x45]; unsigned char kind; char pad1[0x12]; struct Ext *ext; } Obj;
typedef struct Ext { char pad0[0x50]; float scale; char pad1[0x89]; unsigned char done; } Ext;
extern void func_018DA8(void *p);
extern void func_018DE8(void *p);
extern void func_018E78(void *p, float f);
extern void func_018EA8(int n);
extern void func_018EB8(float f);
extern void func_018EC8(void *p);
extern void func_074498(void *p, void *buf, int id);
extern void func_155440(void *p, void *buf);

void func_178928(Obj *o)
{
    Ext *e = o->ext;
    func_018DA8((char *)o + 0x30);
    func_018DE8(o);
    func_018E78((char *)o + 0x20, e->scale);
    func_018EA8(1);
    func_018EB8(1.0f);
    func_018EC8(o);
}

void func_178990(Obj *o)
{
    Ext *e;
    int buf[4];
    e = o->ext;
    if (o->kind == 6) {
        if (e->done == 0) {
            func_074498(o, buf, 42);
            func_155440(o, buf);
            e->done = 1;
        }
    }
}
