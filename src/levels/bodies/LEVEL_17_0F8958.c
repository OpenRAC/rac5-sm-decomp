/* LEVEL_17:0x0F8958 -- placement copy of FRONTEND_01CE10.c: parses four floats from strings into a vector and clamps each to a range. */
typedef struct Vec4 {
    float x;
    float y;
    float z;
    float w;
} Vec4;

extern char D_001BFA60[];
extern int sscanf(const char *s, const char *fmt, ...);

int func_0F8958(const char *a, const char *b, const char *c, const char *d, Vec4 *out, float lo, float hi)
{
    Vec4 v;
    int n;
    int m;

    n = sscanf(a, D_001BFA60, &v.x);
    if (n != 1) {
        return 0;
    }
    m = sscanf(b, D_001BFA60, &v.y);
    if (m != n) {
        return 0;
    }
    n = sscanf(c, D_001BFA60, &v.z);
    if (n != m) {
        return 0;
    }
    if (sscanf(d, D_001BFA60, &v.w) != n) {
        return 0;
    }
    *out = v;
    if (out->x < lo) {
        out->x = lo;
    }
    if (out->x > hi) {
        out->x = hi;
    }
    if (out->y < lo) {
        out->y = lo;
    }
    if (out->y > hi) {
        out->y = hi;
    }
    if (out->z < lo) {
        out->z = lo;
    }
    if (out->z > hi) {
        out->z = hi;
    }
    if (out->w < lo) {
        out->w = lo;
    }
    if (out->w > hi) {
        out->w = hi;
    }
    return 1;
}
