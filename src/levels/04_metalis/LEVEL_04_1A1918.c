/* LEVEL_04:0x1A1918 -- placement copy of LEVEL_01_196628.c: object setup call chain, plus a one-shot trigger function. */
typedef struct Obj { char pad0[0x45]; unsigned char kind; char pad1[0x12]; struct Ext *ext; } Obj;
typedef struct Ext { char pad0[0x50]; float scale; char pad1[0x89]; unsigned char done; } Ext;
extern void func_019E18(void *p);
extern void func_019E58(void *p);
extern void func_019EE8(void *p, float f);
extern void func_019F18(int n);
extern void func_019F28(float f);
extern void func_019F38(void *p);
extern void func_0804F8(void *p, void *buf, int id);
extern void func_168038(void *p, void *buf);

void func_1A1918(Obj *o)
{
    Ext *e = o->ext;
    func_019E18((char *)o + 0x30);
    func_019E58(o);
    func_019EE8((char *)o + 0x20, e->scale);
    func_019F18(1);
    func_019F28(1.0f);
    func_019F38(o);
}

void func_1A1980(Obj *o)
{
    Ext *e;
    int buf[4];
    e = o->ext;
    if (o->kind == 6) {
        if (e->done == 0) {
            func_0804F8(o, buf, 42);
            func_168038(o, buf);
            e->done = 1;
        }
    }
}
