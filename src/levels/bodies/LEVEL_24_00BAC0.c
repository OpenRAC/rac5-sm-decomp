/* LEVEL_24:0x00BAC0 -- placement copy of LEVEL_01_00BCB8.c: projects a point set, fits it with a helper, and returns the unprojected result when the fit error is under the limit. */

struct V3_00BCB8 {
    float x;
    float y;
    float z;
};

int func_00B8B8(struct V3_00BCB8 *pts, int a, int b, float f);
float func_00AFC8(struct V3_00BCB8 *out, struct V3_00BCB8 *pts, int n, int flag, float f);

int func_00BAC0(float *err_out, struct V3_00BCB8 *out, struct V3_00BCB8 *pts, int a, int b, int flag,
                float scale, float unused1, float limit, float unused2, float dist, float k)
{
    struct V3_00BCB8 res;
    struct V3_00BCB8 *p;
    struct V3_00BCB8 *end;
    float err;
    float t;
    float s;
    int n;

    n = func_00B8B8(pts, a, b, 0.0f);
    if (n < 3) {
        return 0;
    }
    end = pts + n;
    for (p = pts; p != end; p++) {
        t = dist / (p->z + dist);
        p->x *= t;
        p->y *= t;
    }
    err = func_00AFC8(&res, pts, n, flag, scale);
    if (limit <= err) {
        return 0;
    }
    s = res.z * k + 1.0f;
    out->z = res.z;
    out->x = res.x * s;
    out->y = res.y * s;
    *err_out = err;
    return 1;
}
