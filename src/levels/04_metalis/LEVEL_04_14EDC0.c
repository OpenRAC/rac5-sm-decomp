/* LEVEL_04:0x14EDC0 -- looks up a table entry for an object and updates its state. */
typedef struct { int a, b, c, d; } Ent;
typedef struct { char pad0[0x10]; unsigned char kind; } Info;
typedef struct { char pad0[0x58]; Info *info; } Obj;
extern int D_00234170;
extern Ent D_00220600[][3][5];
extern int func_14F988(int v);
extern int func_14EF60(Obj *o, int idx);
extern int func_14ED38(int a, int b);
extern unsigned int func_14F9D8(unsigned int input, int enabled);
void func_14EDC0(Obj *o, int idx, Ent *out)
{
    Info *info = o->info;
    int r;
    int off = func_14F988(D_00234170) * 0xF0 + info->kind * 0x50;
    *out = *(Ent *)((char *)D_00220600 + off + idx * 16);
    r = func_14EF60(o, idx);
    if (r != 0 || func_14ED38(out->a, out->c) != 0) {
        out->c = 0;
        out->a = 1;
        out->b = func_14F9D8(out->b, r);
    }
}
