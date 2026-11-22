/* LEVEL_02:0x1B7430 -- re-registers an object's collision proxy: lets the behavior helper forward the new state (states 10 and 7 only when a probe passes), then, with the flags of the type record plus 0x10, registers the bounds from the helper in slot 0 or 1 (by box size) after unlinking the old registration. */
typedef struct { float x, y, z; } Vec3;
typedef struct { char pad00[0x0C]; int w0C; int w10; int w14; char pad18[0x34 - 0x18]; } Rec34;
typedef struct { char pad00[4]; Rec34 *recs; char pad08[0x3F - 8]; unsigned char b3F; } Type;

typedef struct State State;
struct State {
    State *next;
    char pad04[0x0F - 4];
    unsigned char b0F;
    int w10;
    State **prev;
};


typedef struct {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[4];
    Type *type;
    unsigned char b44;
    unsigned char b45;
    char pad46[0x54 - 0x46];
    void *owner;
    State *state;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
} Obj;

extern char D_00246BF8[][0x68];
extern char D_0023D938[];

extern int func_1B6650(Obj *o);
extern int func_031428(float f, void *owner, Obj *o, char *tbl, int n);
extern void func_1B5FC0(Obj *o, int b, int r);
extern int func_088610(Vec3 *lo, Vec3 *hi, int w);
extern void func_09BC40(char *slot, State *st, Vec3 *lo, Vec3 *hi, unsigned int bits);

static __inline__ void Unlink(State *s)
{
    if (s->prev != 0) {
        *s->prev = s->next;
        if (s->next == 0) {
            s->prev = 0;
        } else {
            s->next->prev = s->prev;
            s->prev = 0;
        }
    }
}

void func_1B7430(Obj *obj)
{
    State *st;
    void *owner;
    int r;
    Type *type;
    Rec34 *rec;
    Vec3 lo;
    Vec3 hi;
    float dx;
    float dz;
    unsigned int tf;
    unsigned int base;
    unsigned int alt;
    unsigned int f;
    unsigned int fl;
    int idx;
    int sel;
    Vec3 *lop;

    owner = obj->owner;
    r = func_1B6650(obj);
    if ((r != 10 && r != 7) || func_031428(0.9f, owner, obj, D_0023D938, 6) != 0)
        func_1B5FC0(obj, obj->b45, r & 0xFF);
    tf = obj->flags;
    type = obj->type;
    base = tf & 0x1420;
    rec = type->recs + obj->b44;
    alt = base | 1;
    f = base | 0x81;
    if (rec->w0C == 0)
        f = alt;
    if (rec->w10 != 0)
        f |= 0x100;
    if (rec->w14 != 0)
        f |= 0x200;
    if (type->b3F == 1)
        f |= 0x800;
    if ((tf >> 3) & 1)
        f |= 0x400;
    fl = f | 0x10;
    st = obj->state;
    if (func_088610(&lo, &hi, st->w10) != 0) {
        dx = hi.x - lo.x;
        dz = hi.z - lo.z;
        if (8.0f < dx || 8.0f < dz)
            idx = 1;
        else
            idx = 0;
        lop = &lo;
        sel = idx;
        Unlink(st);
        st->b0F = idx;
        func_09BC40(D_00246BF8[sel], st, lop, &hi, fl);
    } else {
        Unlink(st);
    }
}
