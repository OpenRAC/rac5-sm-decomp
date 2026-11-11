/* LEVEL_08:0x153E58 -- placement copy of LEVEL_04_14EDC0.c: looks up a table entry for an object and updates its state. */
typedef struct { int a, b, c, d; } Ent;
typedef struct { char pad0[0x10]; unsigned char kind; } Info;
typedef struct { char pad0[0x58]; Info *info; } Obj;
extern int D_00264470;
extern Ent D_002500A0[][3][5];
extern int func_154A20(int v);
extern int func_153FF8(Obj *o, int idx);
extern int func_153DD0(int a, int b);
extern int func_154A70(int a, int b);
void func_153E58(Obj *o, int idx, Ent *out)
{
    Info *info = o->info;
    int r;
    int off = func_154A20(D_00264470) * 0xF0 + info->kind * 0x50;
    *out = *(Ent *)((char *)D_002500A0 + off + idx * 16);
    r = func_153FF8(o, idx);
    if (r != 0 || func_153DD0(out->a, out->c) != 0) {
        out->c = 0;
        out->a = 1;
        out->b = func_154A70(out->b, r);
    }
}
