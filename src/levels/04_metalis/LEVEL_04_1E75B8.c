/* LEVEL_04:0x1E75B8 -- steps a timed effect object: state 1 waits for a spawn and hands it over, state 0 queues the shifted transform once the delay has elapsed, any other live state registers the follow-up effect; then runs the common state helper. */
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
    char pad2A[2];
    int w2C;
} Obj;

extern Rec *D_003AFF6C;
extern int D_0022286C;

extern int func_1D8DE8(Mat *m, void *q);
extern void func_1D81A8(Mat *a, Mat *b, void *q);
extern void func_07E0B8(Obj *o);
extern void func_083E30(Mat *m, Rec *r, int *out, int e, int f, int g, int h, int i, float a, float b, float c, float d);

struct Obj;
extern struct Obj *func_1D8C70(int tbl, int b, int c, float f, int d);
extern void func_1E6E48(char *a0, void *a1);

void func_1E75B8(Obj *obj, Mat *m, void *q, float dt)
{
    Mat buf;
    int r;
    int *out;

    if (obj->state == 1) {
        r = func_1D8DE8(m, q);
        if (r != 0) {
            func_1D8C70((int)m, (int)q, (int)m, 0.33333334f, r);
            obj->state = 3;
        }
    } else if (obj->state != 3) {
        if (obj->w2C == 0) {
            if (obj->state == 0) {
                if (0.10000001f <= dt) {
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
                    buf.m[12] = buf.m[12] + buf.m[8];
                    buf.m[13] = buf.m[13] + buf.m[9];
                    buf.m[14] = buf.m[14] + buf.m[10];
                    D_0022286C = D_0022286C - 1;
                    func_1D81A8(m, m, q);
                    obj->state = 3;
                }
            } else {
                func_07E0B8(obj);
                obj->b28 = 1;
                obj->state = 3;
                if (obj->w20 == 0) {
                    out = &obj->w20;
                    if (D_003AFF6C != 0) {
                        func_083E30(m, D_003AFF6C, out, 0, 0, 0, 0, 1, D_003AFF6C->f14, D_003AFF6C->f18, D_003AFF6C->f1C, D_003AFF6C->f20);
                    }
                }
            }
        } else {
            obj->w2C = obj->w2C - 1;
        }
    }
    func_1E6E48((char *)obj, m);
}
