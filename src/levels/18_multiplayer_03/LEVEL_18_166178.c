/* LEVEL_18:0x166178 -- placement copy of LEVEL_01_196628.c: object setup call chain, plus a one-shot trigger function. */
typedef struct Obj { char pad0[0x45]; unsigned char kind; char pad1[0x12]; struct Ext *ext; } Obj;
typedef struct Ext { char pad0[0x50]; float scale; char pad1[0x89]; unsigned char done; } Ext;
extern void func_017C20(void *p);
extern void func_017C60(void *p);
extern void func_017CF0(void *p, float f);
extern void func_017D20(int n);
extern void func_017D30(float f);
extern void func_017D40(void *p);
extern void func_06F6C8(void *p, void *buf, int id);
extern void func_136918(void *p, void *buf);

void func_166178(Obj *o)
{
    Ext *e = o->ext;
    func_017C20((char *)o + 0x30);
    func_017C60(o);
    func_017CF0((char *)o + 0x20, e->scale);
    func_017D20(1);
    func_017D30(1.0f);
    func_017D40(o);
}

void func_1661E0(Obj *o)
{
    Ext *e;
    int buf[4];
    e = o->ext;
    if (o->kind == 6) {
        if (e->done == 0) {
            func_06F6C8(o, buf, 42);
            func_136918(o, buf);
            e->done = 1;
        }
    }
}
