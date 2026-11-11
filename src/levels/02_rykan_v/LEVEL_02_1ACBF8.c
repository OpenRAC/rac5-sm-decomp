/* LEVEL_02:0x1ACBF8 -- placement copy of LEVEL_01_196628.c: object setup call chain, plus a one-shot trigger function. */
typedef struct Obj { char pad0[0x45]; unsigned char kind; char pad1[0x12]; struct Ext *ext; } Obj;
typedef struct Ext { char pad0[0x50]; float scale; char pad1[0x89]; unsigned char done; } Ext;
extern void func_01AB40(void *p);
extern void func_01AB80(void *p);
extern void func_01AC10(void *p, float f);
extern void func_01AC40(int n);
extern void func_01AC50(float f);
extern void func_01AC60(void *p);
extern void func_083968(void *p, void *buf, int id);
extern void func_171E38(void *p, void *buf);

void func_1ACBF8(Obj *o)
{
    Ext *e = o->ext;
    func_01AB40((char *)o + 0x30);
    func_01AB80(o);
    func_01AC10((char *)o + 0x20, e->scale);
    func_01AC40(1);
    func_01AC50(1.0f);
    func_01AC60(o);
}

void func_1ACC60(Obj *o)
{
    Ext *e;
    int buf[4];
    e = o->ext;
    if (o->kind == 6) {
        if (e->done == 0) {
            func_083968(o, buf, 42);
            func_171E38(o, buf);
            e->done = 1;
        }
    }
}
