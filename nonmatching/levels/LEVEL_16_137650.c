/* USA LEVEL_16.REL:0x137650, 548-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 15 differing words; first difference at 0x10.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float sqrtf(float x);

typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

typedef struct Type {
    char pad00[0x24];
    unsigned int id;
} Type;

typedef struct Ref {
    char pad00[0x20];
    V3 vec;
} Ref;

typedef struct Owner {
    char pad000[0x100];
    short h100;
    char pad102[0x59C - 0x102];
    Ref *ref;
} Owner;

typedef struct State {
    Owner *owner;
    V3 dir;
    char pad10[4];
    float f14;
    float f18;
} State;

typedef struct Self {
    char pad00[0x30];
    V3 pos;
    char pad3C[4];
    Type *type;
    char pad44;
    unsigned char mode;
    char pad46[0x58 - 0x46];
    State *state;
} Self;

extern int D_001D04A0;
extern unsigned char D_001DFC30[];

extern int func_05D640(char *object);
extern char *func_037450(char *object);
extern void func_0372B0(Owner *owner, V3 *dir);

static __inline__ void CopyV3(V3 *d, V3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static __inline__ void Sub3(V3 *d, V3 *a, V3 *b)
{
    d->x = a->x - b->x;
    d->y = a->y - b->y;
    d->z = a->z - b->z;
}

void func_137650(Self *self, Self *other)
{
    State *st;
    Owner *owner;
    Ref *ref;
    int r;
    V3 d;
    float len2;
    float inv;

    if (self->type->id == 0x2B1CB65C) {
        st = self->state;
        owner = st->owner;
        r = func_05D640((char *)owner);
        st->f14 = 1.5000299f;
        st->f18 = 0.25000498f;
        self->mode = 5;
        if (other != 0) {
            Sub3(&d, &other->pos, &self->pos);
            len2 = d.x * d.x + d.y * d.y + d.z * d.z;
            if (!(len2 < 2.3841858e-07f)) {
                inv = 1.0f / sqrtf(len2);
                d.x = d.x * inv;
                d.y = d.y * inv;
                d.z = d.z * inv;
            }
            CopyV3(&st->dir, &d);
            func_0372B0(owner, &d);
        } else {
            if (r == 0 && owner->h100 == 0x1F) {
                CopyV3(&st->dir, &owner->ref->vec);
            } else {
                CopyV3(&st->dir, &((Ref *)func_037450((char *)owner))->vec);
            }
        }
        if (D_001D04A0 == 7 && (unsigned int)(D_001DFC30[0xD] - 1) < 0x3F) {
            D_001DFC30[0xD] = 0x80;
        } else if (D_001D04A0 == 9 && (unsigned int)(D_001DFC30[0xD] - 1) < 0x3F) {
            D_001DFC30[0xD] = 0x80;
        }
    }
}
