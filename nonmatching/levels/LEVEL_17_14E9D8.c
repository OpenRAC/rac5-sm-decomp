/* USA LEVEL_17.REL:0x14E9D8, 280-byte candidate (21 November 2026).
 * Measured pinned: 22 differing words; first difference at 0x38.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x2C];
    float position;
    float velocity;
} State;

typedef struct {
    char pad00[0x58];
    State *state;
} Obj;

extern float D_0018E324;
extern float D_001C6CF8[3];
extern void func_102F00(float *out, float scale);
extern void func_103708(Obj *a, Obj *b, float *delta);

void func_14E9D8(Obj *o, float f)
{
    float delta[12];
    State *s;
    int frames;
    int maximum_steps;
    int *selected;
    int remaining;
    float *position;
    float *velocity;
    float stiffness;
    float damping;
    float maximum;
    float next;

    s = o->state;
    func_102F00(delta, s->position * f);
    func_103708(o, o, delta);
    maximum_steps = 2;
    frames = (int)(D_0018E324 * 59.998802185058594f);
    selected = &frames;
    if (frames >= 2) selected = &maximum_steps;
    stiffness = D_001C6CF8[0];
    damping = D_001C6CF8[1];
    maximum = D_001C6CF8[2];
    position = &s->position;
    velocity = &s->velocity;
    remaining = *selected;
    if (remaining > 0) {
        do {
            next = (4.71238899230957f - *position) * stiffness - *velocity * damping;
            *velocity = next;
            if (maximum < next) *velocity = maximum;
            else if (next < -maximum) *velocity = -maximum;
            remaining--;
            *position = *position + *velocity;
        } while (remaining != 0);
    }
}
