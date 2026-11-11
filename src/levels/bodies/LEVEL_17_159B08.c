/* LEVEL_17:0x159B08 -- placement copy of LEVEL_01_196628.c: object setup call chain, plus a one-shot trigger function. */
typedef struct Obj { char pad0[0x45]; unsigned char kind; char pad1[0x12]; struct Ext *ext; } Obj;
typedef struct Ext { char pad0[0x50]; float scale; char pad1[0x89]; unsigned char done; } Ext;
extern void func_017F80(void *p);
extern void func_017FC0(void *p);
extern void func_018050(void *p, float f);
extern void func_018080(int n);
extern void func_018090(float f);
extern void func_0180A0(void *p);
extern void func_070748(void *p, void *buf, int id);
extern void func_136A38(void *p, void *buf);

void func_159B08(Obj *o)
{
    Ext *e = o->ext;
    func_017F80((char *)o + 0x30);
    func_017FC0(o);
    func_018050((char *)o + 0x20, e->scale);
    func_018080(1);
    func_018090(1.0f);
    func_0180A0(o);
}

void func_159B70(Obj *o)
{
    Ext *e;
    int buf[4];
    e = o->ext;
    if (o->kind == 6) {
        if (e->done == 0) {
            func_070748(o, buf, 42);
            func_136A38(o, buf);
            e->done = 1;
        }
    }
}
