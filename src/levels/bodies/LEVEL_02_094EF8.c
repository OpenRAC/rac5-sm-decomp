/* LEVEL_02:0x094EF8 -- placement copy of LEVEL_01_08E828.c: builds a vector from the camera target (or a default), flattens it to a fixed height and writes it back normalized. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[0xC];
    Vec3 *vec;
    int flag;
} Cam;

extern Cam *D_0021BD50;
extern Vec3 D_0020B268;
extern float sqrtf(float x);

Vec3 *func_094EF8(Vec3 *out)
{
    Vec3 v;
    float len;
    float scale;

    if (D_0021BD50 != 0 && D_0021BD50->flag != 0) {
        v = *D_0021BD50->vec;
    } else {
        v = D_0020B268;
    }
    v.y = 0.5f;
    len = sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
    scale = 1.0f;
    if (0.01f < len) {
        scale = 1.0f / len;
    }
    v.x = v.x * scale;
    v.y = v.y * scale;
    v.z = v.z * scale;
    *out = v;
    return out;
}
