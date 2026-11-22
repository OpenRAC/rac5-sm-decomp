/* USA LEVEL_04.REL:0x1E47F0, 552-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 23 differing words; first difference at 0x10.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    int ids[8];
    unsigned char values[8];
    unsigned char count;
} Table;

typedef struct {
    void *items[8];
    unsigned char kinds[8];
    unsigned char count;
} List;

typedef struct {
    char pad_00[0x5C];
    Table list;
    char pad_8B[0x8A - 0x5C - sizeof(Table)];
} Pad;

typedef struct {
    char pad_00[0x14];
    float v14;
    float v18;
    float v1C;
    float v20;
} Fx;

struct Actor;

typedef struct {
    char pad_00[0x20];
    void (*react)(float f, struct Actor *self, int a, int b, int c, int d, struct Actor *src);
} VTable;

typedef struct {
    char pad_00[0x5C];
    unsigned char b5C[0x2E];
    unsigned char b8A;
} State;

typedef struct Actor {
    char pad_00[0x30];
    Vec3 pos;
    char pad_3C[4];
    VTable *vt;
    char pad_44[0x14];
    State *state;
} Actor;

extern Fx *D_003B3E78[1];
extern Fx *D_003B3E7C[1];
extern int func_1F4B90(Table *table, int id, int value);
extern void func_1F4BE0(List *list, void *item, int kind);
extern float func_1D7428(char *obj);
extern void func_083E30(void *obj, void *rec, int e, int f, int g, int h, int i, int j, float a, float b, float c, float d);
extern void func_1E4A18(float f, Actor *a, Vec3 *p);
extern float sqrtf(float x);

static __inline__ void Dir(Vec3 *out, Vec3 *from, Vec3 *to)
{
    float d2;
    float inv;

    out->x = to->x - from->x;
    out->z = to->z - from->z;
    d2 = out->x * out->x + out->z * out->z;
    if (!(d2 < 2.3841858e-7f)) {
        inv = 1.0f / sqrtf(d2);
        out->z = inv * out->z;
        out->x = inv * out->x;
    }
}

static __inline__ void Fin(Vec3 *out, Vec3 *from, float k)
{
    out->x = out->x * k + from->x;
    out->y = from->y + 0.6f;
    out->z = out->z * k + from->z;
}

static __inline__ void Spawn(Actor *a, Fx *rec)
{
    if (rec != 0)
        func_083E30(a, rec, 0, 0, 0, 0, 0, 1, rec->v14, rec->v18, rec->v1C, rec->v20);
}

int func_1E47F0(float fa, float fb, Actor *a, Actor *b)
{
    State *s;
    Vec3 out;

    s = a->state;
    if (func_1F4B90((Table *)s->b5C, (int)b, 0x16) != 0)
        return 0;
    func_1F4BE0((List *)s->b5C, b, 0x16);
    if (s->b8A != 0)
        Spawn(a, D_003B3E7C[0]);
    else
        Spawn(a, D_003B3E78[0]);
    b->vt->react(fb, b, 2, 1, 0, 0, a);
    Dir(&out, &a->pos, &b->pos);
    Fin(&out, &a->pos, func_1D7428((char *)a));
    func_1E4A18(fa, a, &out);
    return 1;
}
