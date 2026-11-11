/* LEVEL_06:0x18D150 -- placement copy of LEVEL_01_196628.c: object setup call chain, plus a one-shot trigger function. */
typedef struct Obj { char pad0[0x45]; unsigned char kind; char pad1[0x12]; struct Ext *ext; } Obj;
typedef struct Ext { char pad0[0x50]; float scale; char pad1[0x89]; unsigned char done; } Ext;
extern void func_0189F0(void *p);
extern void func_018A30(void *p);
extern void func_018AC0(void *p, float f);
extern void func_018AF0(int n);
extern void func_018B00(float f);
extern void func_018B10(void *p);
extern void func_076C78(void *p, void *buf, int id);
extern void func_14E920(void *p, void *buf);

void func_18D150(Obj *o)
{
    Ext *e = o->ext;
    func_0189F0((char *)o + 0x30);
    func_018A30(o);
    func_018AC0((char *)o + 0x20, e->scale);
    func_018AF0(1);
    func_018B00(1.0f);
    func_018B10(o);
}

void func_18D1B8(Obj *o)
{
    Ext *e;
    int buf[4];
    e = o->ext;
    if (o->kind == 6) {
        if (e->done == 0) {
            func_076C78(o, buf, 42);
            func_14E920(o, buf);
            e->done = 1;
        }
    }
}
