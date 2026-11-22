/* USA LEVEL_08.REL:0x1C1E88, 276-byte candidate (21 November 2026).
 * Measured pinned: 9 differing words; first difference at 0x48.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { float x, y, z; } Vec3;
typedef struct {
    char pad[0x20];
    Vec3 vel;
    float pad2;
    Vec3 pos;
} Obj;

extern float fabsf(float x);
extern char D_00263A80[];
extern int D_00264470;
extern float *func_01ACA0(Obj *o);
extern int func_0288B8(void);
extern void func_01AE28(int a, int b, float *v, Vec3 *vel, Obj *o, float t, float z);

int func_1C1E88(Obj *o)
{
    float *p;
    float v[4];
    float diff[2];
    float d;
    int idx;
    Vec3 *vel;
    char *tbl;
    int row;

    p = func_01ACA0(o);
    d = fabsf(o->pos.y - p[1]);
    if (d <= 1.5f) {
        vel = &o->vel;
        v[0] = o->pos.x + vel->x;
        v[2] = o->pos.z + vel->z;
        diff[0] = v[0] - p[0];
        diff[1] = v[2] - p[2];
        if (diff[0] * diff[0] + diff[1] * diff[1] <= 0.5625f) {
            v[1] = o->pos.y;
            v[3] = 0.0f;
            tbl = D_00263A80;
            idx = func_0288B8();
            idx = idx * 16 + 4;
            row = (D_00264470 - 1) * 64;
            tbl += idx + row;
            func_01AE28(2, 2, v, vel, o, *(float *)(tbl + 0x20), 0.0f);
            return 1;
        }
    }
    return 0;
}
