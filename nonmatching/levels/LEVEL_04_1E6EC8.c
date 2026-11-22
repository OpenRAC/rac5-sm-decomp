/* USA LEVEL_04.REL:0x1E6EC8, 440-byte candidate (22 November 2026).
 * Measured pinned: 7 differing words; first difference at +0x160.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float m[16];
} Mat;

typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Rec;

typedef struct {
    char pad00[0x20];
    int w20;
    char pad24[4];
    unsigned char b28;
    unsigned char state;
} Obj;

extern Rec *D_003AFF6C;
extern int D_0022286C;

extern void func_07E0B8(Obj *o);
extern void func_083E30(Mat *m, Rec *r, int *out, int e, int f, int g, int h, int i, float a, float b, float c, float d);
extern void func_1D81A8(Mat *buf, Mat *m);

void func_1E6EC8(float sign, Obj *obj, Mat *m)
{
    Mat buf;
    float dx;
    float dy;
    float dz;

    switch (obj->state) {
    case 0:
        buf.m[8] = m->m[8];
        buf.m[9] = m->m[9];
        buf.m[10] = m->m[10];
        buf.m[11] = m->m[11];
        buf.m[0] = m->m[0];
        buf.m[1] = m->m[1];
        buf.m[2] = m->m[2];
        buf.m[3] = m->m[3];
        buf.m[4] = m->m[4];
        buf.m[5] = m->m[5];
        buf.m[6] = m->m[6];
        buf.m[7] = m->m[7];
        buf.m[12] = m->m[12];
        buf.m[13] = m->m[13];
        buf.m[14] = m->m[14];
        buf.m[15] = m->m[15];
        if (0.0f <= sign) {
            dx = -buf.m[8];
            dy = -buf.m[9];
            dz = -buf.m[10];
            buf.m[12] = buf.m[12] + dx;
            buf.m[13] = buf.m[13] + dy;
            buf.m[14] = buf.m[14] + dz;
        } else {
            buf.m[12] = buf.m[12] + buf.m[8];
            buf.m[13] = buf.m[13] + buf.m[9];
            buf.m[14] = buf.m[14] + buf.m[10];
        }
        D_0022286C = D_0022286C - 1;
        func_1D81A8(&buf, m);
        break;
    case 1:
        break;
    case 2:
        func_07E0B8(obj);
        obj->b28 = 1;
        obj->state = 3;
        if (obj->w20 != 0) {
            return;
        }
        if (D_003AFF6C == 0) {
            return;
        }
        {
            Rec *r = D_003AFF6C;
            int *out = &obj->w20;
            float c = r->f1C;
            float d = r->f20;
            func_083E30(m, r, out, 0, 0, 0, 0, 1, r->f14, r->f18, c, d);
        }
        return;
    default:
        break;
    }
    obj->state = 3;
}
