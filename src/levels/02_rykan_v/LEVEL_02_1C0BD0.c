/* LEVEL_02:0x1C0BD0 -- forwards its three arguments to the shared handler together with the owner's configuration and its first field. */
typedef struct {
    char pad_00[0x30];
    int w30;
} Cfg;

typedef struct {
    char pad_00[0x54];
    Cfg *cfg;
} Obj;

extern void func_031F60(int a, int b, Obj *o, Cfg *cfg, int w);

void func_1C0BD0(int a, int b, Obj *o)
{
    func_031F60(a, b, o, o->cfg, o->cfg->w30);
}
