/* LEVEL_01.REL:0x02FE68 -- scales a local vector before dispatch. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

static inline void copy_vec3(Vec3 *dst, const Vec3 *src)
{
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

extern void func_02FB28(void *out, float *state, float *other,
                         unsigned long flags);
extern int func_02FF10(void *out, void *actor, Vec3 *offset,
                        float *other, unsigned long flags, float amount);

void func_02FE68(float amount, char *out, char *actor, float *other,
                 unsigned long flags)
{
    Vec3 offset;
    float scale;

    func_02FB28(out, (float *)(actor + 0x30), other, flags);
    copy_vec3(&offset, (const Vec3 *)(actor + 0x20));
    scale = *(float *)(out + 0x1C);
    offset.x *= scale;
    offset.y *= scale;
    offset.z *= scale;
    func_02FF10(out, actor, &offset, other, flags, amount);
}
