/* LEVEL_10:0x196F20 -- placement copy of LEVEL_01_196628.c: object setup call chain, plus a one-shot trigger function. */
typedef struct Obj { char pad0[0x45]; unsigned char kind; char pad1[0x12]; struct Ext *ext; } Obj;
typedef struct Ext { char pad0[0x50]; float scale; char pad1[0x89]; unsigned char done; } Ext;
extern void func_0197D8(void *p);
extern void func_019818(void *p);
extern void func_0198A8(void *p, float f);
extern void func_0198D8(int n);
extern void func_0198E8(float f);
extern void func_0198F8(void *p);
extern void func_07D6C8(void *p, void *buf, int id);
extern void func_157198(void *p, void *buf);

void func_196F20(Obj *o)
{
    Ext *e = o->ext;
    func_0197D8((char *)o + 0x30);
    func_019818(o);
    func_0198A8((char *)o + 0x20, e->scale);
    func_0198D8(1);
    func_0198E8(1.0f);
    func_0198F8(o);
}

void func_196F88(Obj *o)
{
    Ext *e;
    int buf[4];
    e = o->ext;
    if (o->kind == 6) {
        if (e->done == 0) {
            func_07D6C8(o, buf, 42);
            func_157198(o, buf);
            e->done = 1;
        }
    }
}
