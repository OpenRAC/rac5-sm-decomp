/* LEVEL_16:0x02DDC0 -- placement copy of LEVEL_01_02FF10.c: dispatches on a mode byte stored in the object; mode 2 may latch a flag. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern int func_02E030(void *o, void *actor, Vec3 *offset, float *other, unsigned long flags, float amount);
extern int func_02E3C8(void *o, void *actor, Vec3 *offset, float *other, unsigned long flags, float amount);
extern float func_06FB28(void *a0);

unsigned int func_02DDC0(void *out, void *actor, Vec3 *offset, float *other, unsigned long flags, float amount)
{
    char *o = (char *)out;
    unsigned int m;
    float v;

    m = (unsigned char)o[0x29];
    if (m == 0 || m == 3) {
        return func_02E030(o, actor, offset, other, flags, amount);
    }
    if (m == 1) {
        return func_02E3C8(o, actor, offset, other, flags, amount);
    }
    if (m == 2) {
        v = func_06FB28(actor);
        if (other[0x28 / 4] <= v) {
            o[0x29] = 1;
        }
        return 1;
    }
    return -1;
}
