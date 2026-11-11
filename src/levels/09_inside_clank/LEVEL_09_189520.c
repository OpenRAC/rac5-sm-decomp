/* LEVEL_09:0x189520 -- placement copy of LEVEL_01_196628.c: object setup call chain, plus a one-shot trigger function. */
typedef struct Obj { char pad0[0x45]; unsigned char kind; char pad1[0x12]; struct Ext *ext; } Obj;
typedef struct Ext { char pad0[0x50]; float scale; char pad1[0x89]; unsigned char done; } Ext;
extern void func_0195B0(void *p);
extern void func_0195F0(void *p);
extern void func_019680(void *p, float f);
extern void func_0196B0(int n);
extern void func_0196C0(float f);
extern void func_0196D0(void *p);
extern void func_079B18(void *p, void *buf, int id);
extern void func_1507E8(void *p, void *buf);

void func_189520(Obj *o)
{
    Ext *e = o->ext;
    func_0195B0((char *)o + 0x30);
    func_0195F0(o);
    func_019680((char *)o + 0x20, e->scale);
    func_0196B0(1);
    func_0196C0(1.0f);
    func_0196D0(o);
}

void func_189588(Obj *o)
{
    Ext *e;
    int buf[4];
    e = o->ext;
    if (o->kind == 6) {
        if (e->done == 0) {
            func_079B18(o, buf, 42);
            func_1507E8(o, buf);
            e->done = 1;
        }
    }
}
