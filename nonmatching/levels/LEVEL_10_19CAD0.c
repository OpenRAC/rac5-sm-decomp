/* LEVEL_10.REL:0x19CAD0: reviewed 304-byte candidate, held for ABI review.
 * Starts the effect when a global value is within range; then copies a solved
 * transform into the object.
 * pinned C with gnu-ee-trial links 304/304 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_07D5E8 returning void with (pointer, pointer, int), but the
 * accepted LEVEL_10_07D5E8.c defines it returning float with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern float D_0023E574;
extern char D_0022E0F0[];

extern void func_19B4E0(void *o, int a1);
extern void func_07D5E8(void *o, float *m, int a2);
extern void func_123FF0(float *out, float *in, void *tbl);

int func_19CAD0(void *a0)
{
    if (D_0023E574 <= 31.0f) {
        func_19B4E0(a0, 5);
        return 1;
    }
    return 0;
}

static __inline__ void copy3_19CB18(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_19CB18(char *a0)
{
    float m[16];
    float v[3];
    char *s0;
    float *dst;

    s0 = *(char **)(a0 + 0x58);
    func_07D5E8(a0, m, 0x49);
    func_123FF0(v, m, D_0022E0F0);
    copy3_19CB18((float *)(s0 + 0xEC), v);
    dst = *(float **)(s0 + 0xC8);
    if (dst != 0) {
        dst[8] = m[8];
        dst[9] = m[9];
        dst[10] = m[10];
        dst[11] = m[11];
        dst[0] = m[0];
        dst[1] = m[1];
        dst[2] = m[2];
        dst[3] = m[3];
        dst[4] = m[4];
        dst[5] = m[5];
        dst[6] = m[6];
        dst[7] = m[7];
        dst[12] = m[12];
        dst[13] = m[13];
        dst[14] = m[14];
        dst[15] = m[15];
    }
}
