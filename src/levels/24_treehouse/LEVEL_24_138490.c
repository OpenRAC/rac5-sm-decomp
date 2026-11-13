/* LEVEL_24:0x138490 -- placement copy of LEVEL_04_14EDC0.c: looks up a table entry for an object and updates its state. */
typedef struct { int a, b, c, d; } Ent;
typedef struct { char pad0[0x10]; unsigned char kind; } Info;
typedef struct { char pad0[0x58]; Info *info; } Obj;
extern int D_001EB570;
extern Ent D_001D7E60[][3][5];
extern int func_139058(int v);
extern int func_138630(Obj *o, int idx);
extern int func_138408(int a, int b);
extern unsigned int func_1390A8(unsigned int input, int enabled);
void func_138490(Obj *o, int idx, Ent *out)
{
    Info *info = o->info;
    int r;
    int off = func_139058(D_001EB570) * 0xF0 + info->kind * 0x50;
    *out = *(Ent *)((char *)D_001D7E60 + off + idx * 16);
    r = func_138630(o, idx);
    if (r != 0 || func_138408(out->a, out->c) != 0) {
        out->c = 0;
        out->a = 1;
        out->b = func_1390A8(out->b, r);
    }
}
