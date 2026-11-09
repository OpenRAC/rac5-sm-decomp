/* LEVEL_09:0x08AF80 -- placement copy of LEVEL_01_08E828.c: builds a vector from the camera target (or a default), flattens it to a fixed height and writes it back normalized. */

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

extern Cam *D_001F0890;
extern Vec3 D_001E00A8;
extern float sqrtf(float x);

Vec3 *func_08AF80(Vec3 *out)
{
    Vec3 v;
    float len;
    float scale;

    if (D_001F0890 != 0 && D_001F0890->flag != 0) {
        v = *D_001F0890->vec;
    } else {
        v = D_001E00A8;
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
