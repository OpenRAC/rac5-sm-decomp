/* LEVEL_10.REL:0x1732B0: reviewed 288-byte candidate, held for ABI review.
 * Two small object helpers and an empty stub.
 * pinned C with gnu-ee-trial links 288/288 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_07D5E8 returning void with (pointer, pointer, int), but the
 * accepted LEVEL_10_07D5E8.c defines it returning float with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Inner { char pad0[0x30]; float pos[3]; } Inner;
typedef struct Def { char pad0[0x48]; char *table; char pad1[0x18]; unsigned int flags; } Def;
typedef struct Ext { char pad0[0x220]; Inner *child; } Ext;
typedef struct Obj { Def *def; char pad0[0x54]; Ext *ext; } Obj;
typedef struct Vec3 { float x, y, z; } Vec3;
extern Vec3 D_0022A618;
extern char D_0022A1B8[];
extern int func_173020(Obj *o);
extern int func_088FC0(void *p);
extern void func_07D5E8(Obj *o, void *dst, int id);
extern void func_123238(Inner *c, void *tbl, void *buf);

int func_1732B0(Obj *o)
{
    Def *d;
    int off;
    if (func_173020(o) == -1)
        return 0;
    d = o->def;
    off = ((d->flags >> 8) & 1) * 0x28 + 0x5C;
    return func_088FC0(d->table + off);
}

void func_173310(Obj *o)
{
    char buf[64];
    Ext *e = o->ext;
    Inner *c;
    float *p;
    func_07D5E8(o, (char *)e + 0x144, 0x3D);
    func_07D5E8(o, (char *)e + 0x184, 0x29);
    if (e->child != 0) {
        func_07D5E8(o, buf, 0x4C);
        func_123238(e->child, D_0022A1B8, buf);
        c = e->child;
        c->pos[0] = c->pos[0] + D_0022A618.x;
        p = c->pos;
        p[1] = p[1] + D_0022A618.y;
        p[2] = p[2] + D_0022A618.z;
    }
}

void func_1733C8(void)
{
}
