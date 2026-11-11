/* LEVEL_04:0x091920 -- placement copy of LEVEL_01_08E828.c: builds a vector from the camera target (or a default), flattens it to a fixed height and writes it back normalized. */

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

extern Cam *D_002201B0;
extern Vec3 D_0020F768;
extern float sqrtf(float x);

Vec3 *func_091920(Vec3 *out)
{
    Vec3 v;
    float len;
    float scale;

    if (D_002201B0 != 0 && D_002201B0->flag != 0) {
        v = *D_002201B0->vec;
    } else {
        v = D_0020F768;
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
