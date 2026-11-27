/* USA LEVEL_04:1C5A88, 280-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 280 bytes: 9 differing words; first difference +0x40. No matching credit.
 * Remaining issue: scheduling of the t = 0 stack store: callee declared int as accepted (andi
 * 0xFF on the unsigned char result), D_00249F04 as a one-element array (load stays after the
 * flag store), st.b before st.a, one return-1 condition (t > 0.4f || (r == 0 && D == 0x18)) for
 * the branch layout (36 -> 9 words); left: retail stores t = 0 right after the first mul, ours
 * after the second-row loads (9 placements and all accepted flags/profiles measured)
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_04:0x1C5A88 -- tests a scaled offset position for a hit; returns whether it is valid. */
typedef struct St { char pad[0x10]; int a; int b; } St;
typedef struct Vec3 { float x, y, z; } Vec3;
typedef struct Sub { char pad[0xC]; unsigned short flags; } Sub;
typedef struct Obj {
    char pad0[0x20];
    Vec3 v20;
    char padx[4];
    Vec3 v30;
    char pad1[0x58 - 0x3C];
    Sub *p58;
} Obj;
extern float D_00249F04[1];
extern int D_00234170;
extern int func_0201F0(float *t, St *st, Vec3 *l, int a, int b, float f);

static inline void VScale(Vec3 *d, Vec3 *a, float s)
{
    d->x = s * a->x;
    d->y = s * a->y;
    d->z = s * a->z;
}

static inline void VAdd(Vec3 *d, Vec3 *a)
{
    d->x += a->x;
    d->y += a->y;
    d->z += a->z;
}

int func_1C5A88(Obj *o, float s)
{
    St st;
    Vec3 l;
    float t;
    Sub *sub;
    unsigned char r;

    t = 0.0f;
    st.b = 0;
    st.a = 0;
    VScale(&l, &o->v20, s);
    l.y += 0.2f;
    VAdd(&l, &o->v30);
    sub = o->p58;
    sub->flags |= 8;
    r = func_0201F0(&t, &st, &l, 8, 0, l.y - D_00249F04[0]);
    sub->flags &= ~8;
    if (t > 0.4f || (r == 0 && D_00234170 == 0x18))
        return 1;
    return 0;
}
