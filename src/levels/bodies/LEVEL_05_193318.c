/* LEVEL_05:0x193318 -- placement copy of LEVEL_01_196628.c: object setup call chain, plus a one-shot trigger function. */
typedef struct Obj { char pad0[0x45]; unsigned char kind; char pad1[0x12]; struct Ext *ext; } Obj;
typedef struct Ext { char pad0[0x50]; float scale; char pad1[0x89]; unsigned char done; } Ext;
extern void func_019780(void *p);
extern void func_0197C0(void *p);
extern void func_019850(void *p, float f);
extern void func_019880(int n);
extern void func_019890(float f);
extern void func_0198A0(void *p);
extern void func_07A738(void *p, void *buf, int id);
extern void func_152990(void *p, void *buf);

void func_193318(Obj *o)
{
    Ext *e = o->ext;
    func_019780((char *)o + 0x30);
    func_0197C0(o);
    func_019850((char *)o + 0x20, e->scale);
    func_019880(1);
    func_019890(1.0f);
    func_0198A0(o);
}

void func_193380(Obj *o)
{
    Ext *e;
    int buf[4];
    e = o->ext;
    if (o->kind == 6) {
        if (e->done == 0) {
            func_07A738(o, buf, 42);
            func_152990(o, buf);
            e->done = 1;
        }
    }
}
