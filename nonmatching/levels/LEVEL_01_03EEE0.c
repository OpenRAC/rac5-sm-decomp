/* USA LEVEL_01:03EEE0, 244-byte candidate; measured 26 November 2026.
 * Profile gnu-ee-trial-divpad, assembler gnu-ee-trial; options: default.
 * Compiled 252 bytes: 34 differing words; first difference +0x4. No matching credit.
 * Remaining issue: reused Vec3 *v pointer (set three times, so alias analysis has no base and
 * the stack vector is reloaded after each store, as retail) + one-element-array global
 * D_00231930[1]: 54 -> 34 w; left: divpad also pads sqrt.s with two nops (retail pads only
 * div.s; non-divpad routes lose the div pad) and the pointer temps v1/v0/a0 assignment
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_01:0x03EEE0 -- updates a direction vector from the body's last position, its normalised copy and its horizontal length. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern float D_00231930[1];
extern float sqrtf(float);

static __inline__ void Sub3(Vec3 *d, Vec3 *a, Vec3 *b)
{
    d->x = a->x - b->x;
    d->y = a->y - b->y;
    d->z = a->z - b->z;
}

static __inline__ void Copy3(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static __inline__ void Scale3(Vec3 *d, Vec3 *s, float k)
{
    d->x = k * s->x;
    d->y = k * s->y;
    d->z = k * s->z;
}

void func_03EEE0(char *body)
{
    Vec3 *v;
    Vec3 delta;

    v = (Vec3 *)(body + 0x278);
    Sub3(&delta, (Vec3 *)(body + 0x30), v);
    v = (Vec3 *)(body + 0x288);
    Copy3(v, &delta);
    if (D_00231930[0] > 0.0f) {
        v = (Vec3 *)(body + 0x298);
        Scale3(v, &delta, 1.0f / D_00231930[0]);
    }
    *(float *)(body + 0x270) = sqrtf(delta.x * delta.x + delta.z * delta.z);
}
