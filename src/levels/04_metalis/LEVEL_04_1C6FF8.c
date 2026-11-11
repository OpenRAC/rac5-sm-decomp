/* LEVEL_04:0x1C6FF8 -- switches an object's collision/placement state on or off: rebuilds its flag word, registers its bounds (small or large mode) or unlinks its record. */
typedef struct { float x, y, z; } Vec3;
typedef struct { char pad00[0x0C]; int w0C; int w10; int w14; char pad18[0x34 - 0x18]; } Rec34;
typedef struct { char pad00[4]; Rec34 *recs; char pad08[0x3F - 8]; unsigned char b3F; } Type;
typedef struct {
    int next;
    char pad04[0x0C];
    int w10;
    int w14;
} State;

typedef struct {
    char pad00[0x10];
    char at10[0x20];
    Vec3 pos;
    char pad3C[4];
    Type *type;
    unsigned char b44;
    unsigned char b45;
    unsigned char b46;
    char pad47[0x58 - 0x47];
    State *state;
    char pad5C[0x64 - 0x5C];
    int flags;
} Obj;

typedef struct { char pad[0x68]; } Rec68;

static __inline__ void Copy3(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

extern Rec68 D_00249EF8[];
extern char D_00241A98[];

extern void func_1C78B8(char *a0);
extern int func_0851A0(Vec3 *a, Vec3 *b, int c);
extern void func_098668(Rec68 *r, State *s, Vec3 *a, Vec3 *b, unsigned int bits);
extern void func_078058(void *a0, void *a1, void *a2, void *a3);

void func_1C6FF8(Obj *o, int on)
{
    Vec3 a;
    Vec3 b;
    State *s;
    unsigned int flag;
    unsigned int bits;
    unsigned int keep;
    Rec34 *rec;
    int big;
    float dx;
    float dz;

    flag = (on ^ 1) & 1;
    o->b45 = 0;
    o->b46 = 0;
    s = o->state;
    o->flags = (o->flags & ~0x10) | (flag << 4);
    o->flags = (o->flags & ~0x20) | (flag << 5);
    func_1C78B8((char *)o);
    if (on != 0) {
        keep = o->flags & 0x1420;
        rec = o->type->recs + o->b44;
        bits = keep | 1;
        if (rec->w0C != 0)
            bits = keep | 0x81;
        if (rec->w10 != 0)
            bits |= 0x100;
        if (rec->w14 != 0)
            bits |= 0x200;
        if (o->type->b3F == 1)
            bits |= 0x800;
        if (((unsigned int)o->flags >> 3) & 1)
            bits |= 0x400;
        if (func_0851A0(&a, &b, s->w10) != 0) {
            dx = b.x - a.x;
            dz = b.z - a.z;
            if (8.0f < dx || 8.0f < dz)
                big = 1;
            else
                big = 0;
            *((char *)s + 0xF) = big;
            func_098668(&D_00249EF8[big], s, &a, &b, bits);
        }
        Copy3(&a, &o->pos);
        a.y += 0.2f;
        func_078058(o, &a, o->at10, D_00241A98);
    } else {
        if (*(int *)((char *)s + 0x14) != 0) {
            **(int **)((char *)s + 0x14) = s->next;
            if (s->next == 0) {
                *(int *)((char *)s + 0x14) = 0;
            } else {
                *(int *)(s->next + 0x14) = *(int *)((char *)s + 0x14);
                *(int *)((char *)s + 0x14) = 0;
            }
        }
    }
}
