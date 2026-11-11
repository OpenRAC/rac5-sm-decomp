/* LEVEL_03:0x1A9698 -- placement copy of LEVEL_01_196628.c: object setup call chain, plus a one-shot trigger function. */
typedef struct Obj { char pad0[0x45]; unsigned char kind; char pad1[0x12]; struct Ext *ext; } Obj;
typedef struct Ext { char pad0[0x50]; float scale; char pad1[0x89]; unsigned char done; } Ext;
extern void func_019F50(void *p);
extern void func_019F90(void *p);
extern void func_01A020(void *p, float f);
extern void func_01A050(int n);
extern void func_01A060(float f);
extern void func_01A070(void *p);
extern void func_07CE78(void *p, void *buf, int id);
extern void func_157E88(void *p, void *buf);

void func_1A9698(Obj *o)
{
    Ext *e = o->ext;
    func_019F50((char *)o + 0x30);
    func_019F90(o);
    func_01A020((char *)o + 0x20, e->scale);
    func_01A050(1);
    func_01A060(1.0f);
    func_01A070(o);
}

void func_1A9700(Obj *o)
{
    Ext *e;
    int buf[4];
    e = o->ext;
    if (o->kind == 6) {
        if (e->done == 0) {
            func_07CE78(o, buf, 42);
            func_157E88(o, buf);
            e->done = 1;
        }
    }
}
