/* LEVEL_15:0x0469C0 -- placement copy of LEVEL_01_055730.c: casts a probe ray from a point along a direction and reports the first contact point and its kind. */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Vec4 {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct Hit {
    short w0[6];
    unsigned short flags;
    short w1[5];
} Hit;

extern int func_01BBD0(float f, float *t, Hit *hit, Vec3 *origin, Vec3 *dir, int a, int b, int c);

int func_0469C0(float limit, float start, float extra, Vec3 *pos, Vec3 *dir, Vec4 *out, Hit *hit_out, int *kind)
{
    Hit hit;
    Vec3 origin;
    Vec3 back;
    float t;

    if (kind != 0) {
        *kind = 4;
    }
    origin.x = pos->x + dir->x * start;
    origin.y = pos->y + dir->y * start;
    origin.z = pos->z + dir->z * start;
    back.x = -dir->x;
    back.y = -dir->y;
    back.z = -dir->z;
    if (func_01BBD0(extra, &t, &hit, &origin, &back, 0x38, 0, 0) == 0) {
        return 4;
    }
    if (hit_out != 0) {
        *hit_out = hit;
    }
    if (kind != 0 && (hit.flags & 4) != 0) {
        *kind = 3;
    }
    if (!(t - start < limit)) {
        return 1;
    }
    out->x = origin.x + back.x * t;
    out->y = origin.y + back.y * t;
    out->z = origin.z + back.z * t;
    out->w = 1.0f;
    return 0;
}
