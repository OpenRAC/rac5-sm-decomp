/* LEVEL_05:0x037E10 -- placement copy of LEVEL_01_03A100.c: builds the camera basis (right, up, forward) from a forward vector, defaulting to the global camera state. */
extern float sqrtf(float x);

typedef struct Gs {
    float right[4];
    float up[4];
    float fwd[4];
    char pad_30[0x1D0];
    float dir[4];
    float dir2[4];
} Gs;

extern Gs D_00220E40;
extern float D_00206D88[3];

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Copy4(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}

static __inline__ void Cross3(float *out, float *a, float *b)
{
    out[0] = a[1] * b[2] - a[2] * b[1];
    out[1] = a[2] * b[0] - a[0] * b[2];
    out[2] = a[0] * b[1] - a[1] * b[0];
}

static __inline__ void Norm3(float *v)
{
    float len;

    len = 1.0f / sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    v[0] = len * v[0];
    v[1] = len * v[1];
    v[2] = len * v[2];
}

static __inline__ void Norm3Safe(float *v)
{
    float len2;
    float inv;

    len2 = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    if (len2 < 2.3841858e-07f) {
        return;
    }
    inv = 1.0f / sqrtf(len2);
    v[0] = v[0] * inv;
    v[1] = v[1] * inv;
    v[2] = v[2] * inv;
}

void func_037E10(float *in, Gs *cam)
{
    if (cam == 0) {
        cam = &D_00220E40;
    }
    Copy3(cam->dir, in);
    Norm3(cam->dir);
    Copy3(cam->dir2, cam->dir);
    Copy4(cam->fwd, cam->dir);
    Cross3(cam->right, D_00206D88, cam->fwd);
    cam->right[3] = 0.0f;
    Norm3Safe(cam->right);
    Cross3(cam->up, cam->fwd, cam->right);
    cam->up[3] = 0.0f;
}
