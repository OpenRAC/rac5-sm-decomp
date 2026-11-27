/* LEVEL_06:0x1128E8 -- placement copy of LEVEL_01_11C280.c: builds a negated and a scaled float triple and returns the helper's result on them. */
typedef struct {
    float x, y, z;
} Vec3;

extern int func_111DB0(float *res, float *pos, Vec3 *negative, float *pt, Vec3 *scaled, Vec3 *v0, Vec3 *v1, Vec3 *v2);

int func_1128E8(float *res, float *pos, float best, float scale, float *pt, Vec3 *dir, Vec3 *v0, Vec3 *v1, Vec3 *v2)
{
    Vec3 negative;
    Vec3 scaled;

    negative.x = -v0->y;
    negative.y = -v1->y;
    negative.z = -v2->y;
    scaled.x = scale * dir->x;
    scaled.y = scale * dir->y;
    scaled.z = scale * dir->z;
    return func_111DB0(res, pos, &negative, pt, &scaled, v0, v1, v2);
}
