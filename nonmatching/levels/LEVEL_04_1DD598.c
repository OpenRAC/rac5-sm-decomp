/* LEVEL_04.REL:0x1DD598: reviewed 332-byte candidate, held for ABI review.
 * Solves the ground-hit time of a thrown object and writes its landing point.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 332/332 bytes and is byte-
 * exact at this and 1 other USA placement, but the prototypes disagree.
 * It defines the function returning void with (pointer, pointer, pointer), but
 * the accepted caller LEVEL_04_177260.c declares it returning void with
 * (pointer, pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Level1DD598 {
    char pad_00[0x24];
    float f_24;
} Level1DD598;

typedef struct World1DD598 {
    char pad_00[0x54];
    Level1DD598 *p_54;
} World1DD598;

typedef struct Mover1DD598 {
    char pad_00[0x18];
    float f_18;
    float f_1C;
} Mover1DD598;

typedef struct Link1DD598 {
    Mover1DD598 *p_00;
} Link1DD598;

typedef struct Holder1DD598 {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x1C];
    Link1DD598 *p_58;
} Holder1DD598;

typedef struct Root1DD598 {
    Holder1DD598 *p_00;
} Root1DD598;

typedef struct Obj1DD598 {
    char pad_00[0x58];
    Root1DD598 *p_58;
} Obj1DD598;

extern World1DD598 *D_00221E2C;
extern float D_0023D160;

extern float sqrtf(float x);

void func_1DD598(Obj1DD598 *o, float *out, float *vec)
{
    Holder1DD598 *p;
    float *pos;
    Mover1DD598 *q;
    float h;
    float a;
    float b;
    float c;
    float disc;
    float t;
    float s;
    float d;

    p = o->p_58->p_00;
    pos = p->pos;
    h = D_00221E2C->p_54->f_24 + -0.1f;
    a = D_0023D160 * -0.5f;
    q = p->p_58->p_00;
    c = pos[1] - h;
    b = q->f_18;
    disc = b * b - a * 4.0f * c;
    if (!(disc < 0.0f)) {
        s = sqrtf(disc);
        t = 0.5f / a * (-b - s);
    }
    d = q->f_1C * t;
    out[0] = pos[0] + vec[0] * d;
    out[2] = pos[2] + vec[2] * d;
    out[1] = h;
}
