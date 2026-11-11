/* LEVEL_19:0x162088 -- placement copy of LEVEL_01_196628.c: object setup call chain, plus a one-shot trigger function. */
typedef struct Obj { char pad0[0x45]; unsigned char kind; char pad1[0x12]; struct Ext *ext; } Obj;
typedef struct Ext { char pad0[0x50]; float scale; char pad1[0x89]; unsigned char done; } Ext;
extern void func_0182D0(void *p);
extern void func_018310(void *p);
extern void func_0183A0(void *p, float f);
extern void func_0183D0(int n);
extern void func_0183E0(float f);
extern void func_0183F0(void *p);
extern void func_070160(void *p, void *buf, int id);
extern void func_137608(void *p, void *buf);

void func_162088(Obj *o)
{
    Ext *e = o->ext;
    func_0182D0((char *)o + 0x30);
    func_018310(o);
    func_0183A0((char *)o + 0x20, e->scale);
    func_0183D0(1);
    func_0183E0(1.0f);
    func_0183F0(o);
}

void func_1620F0(Obj *o)
{
    Ext *e;
    int buf[4];
    e = o->ext;
    if (o->kind == 6) {
        if (e->done == 0) {
            func_070160(o, buf, 42);
            func_137608(o, buf);
            e->done = 1;
        }
    }
}
