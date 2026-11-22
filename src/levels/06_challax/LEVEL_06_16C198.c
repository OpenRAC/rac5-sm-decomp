/* LEVEL_06:0x16C198 -- event handler of a timed enemy: reacts to hit/stun codes, drains its stun timer and decides the follow-up state (returns 1 ignored, 2 handled, 3 finished). */
typedef struct Obj Obj;

typedef struct {
    char pad_00[0x24];
    int key_24;
} Type;

typedef struct {
    char pad_00[0xE0];
    void (*upd_E0)(void);
} Hdl;

typedef struct {
    char pad_00[0x28];
    float stun_28;
    char pad_2C[0x58 - 0x2C];
    char pad_58[0x88 - 0x58];
    float heat_88;
    char pad_8C[0x91 - 0x8C];
    unsigned char prev_91;
    unsigned char arg_92;
    char pad_93[0x96 - 0x93];
    unsigned char dead_96;
    char pad_97[0x15A - 0x97];
    unsigned char flag_15A;
} Ext;

typedef struct {
    char pad_00[0x58];
    Ext *ext_58;
} Parent;

typedef struct {
    char pad_00[0x2C];
    Parent *parent_2C;
} Info;

struct Obj {
    char pad_00[0x40];
    Type *type_40;
    char pad_44[1];
    unsigned char pad_45_unused;
    char pad_46[2];
    Hdl *hdl_48;
    char pad_4C[0x54 - 0x4C];
    Info *info_54;
    Ext *ext_58;
};

extern void func_015A18(Obj *o, int a, int b, int c);
extern void func_16E008(void);
extern void func_16D220(Obj *o, int a);
extern void func_076268(Obj *o, int a);

int func_16C198(float dt, Obj *o, int code, int flag, int a3, int a4, Obj *src)
{
    Ext *e;
    Info *info;
    float t;
    float h;

    e = o->ext_58;
    info = o->info_54;
    if (e->dead_96 != 0 || ((unsigned char)(((unsigned char *)o)[0x45] - 0xE) < 2 && code != 7))
        return 1;
    if (code != 10)
        goto main;
fin:
    func_076268(o, 1);
    return 3;
main:
    if (code == 6 && e->stun_28 > 0.0f) {
        func_015A18(o, 1, (int)info->parent_2C, e->arg_92);
        o->hdl_48->upd_E0 = 0;
    } else if (code == 7) {
        func_015A18(o, 0, (int)info->parent_2C, e->arg_92);
        o->hdl_48->upd_E0 = func_16E008;
    }
    info->parent_2C->ext_58->flag_15A = 1;
    t = e->stun_28 - dt;
    e->stun_28 = t;
    if (t < 0.0f) {
        func_015A18(o, 0, (int)info->parent_2C, e->arg_92);
        if (code != 0xB) {
            func_16D220(o, 0xF);
            return 3;
        }
        goto fin;
    }
    if (src != 0 && src->type_40->key_24 == -0x68F8271A)
        return 2;
    h = e->heat_88;
    if (3.5f <= h) {
        if (((unsigned char *)o)[0x45] == 6)
            return 2;
        if (flag == 0)
            return 2;
        e->prev_91 = ((unsigned char *)o)[0x45];
        func_16D220(o, 0xE);
        e->heat_88 = 0;
    }
    return 2;
}
