/* FRONTEND:0x017C68 -- runs the shared object setup, looks up three resources into globals and then switches the object to mode 0x18. */
struct Obj;
struct S {
    int f00;
    int f04;
    int f08;
    int f0C;
    unsigned char f10;
};

extern int D_00030480;
extern int D_00030484;
extern int D_00030488;
extern int func_01F778(int id);
extern void func_022938(struct Obj *p);
extern void func_022988(struct S *p, int v);

void func_017C68(struct S *o)
{
    func_022938((struct Obj *)o);
    D_00030480 = func_01F778(0xA80);
    D_00030484 = func_01F778(0x30B);
    D_00030488 = func_01F778(0x218);
    func_022988(o, 0x18);
}
