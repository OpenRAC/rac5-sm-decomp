/* LEVEL_08:0x20EA98 -- placement copy of LEVEL_04_1E6EC8.c: steps a three-state effect object: state 0 queues a copy of the transform pushed along its axis (sign from the argument), state 2 finishes it and registers the follow-up effect. */
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

extern Rec *D_003E54A4;
extern int D_00252A6C;

extern void func_082C38(Obj *o);
extern void func_088940(Mat *m, Rec *r, int *out, int e, int f, int g, int h, int i, float a, float b, float c, float d);
extern void func_1FD128(Mat *buf, Mat *m);

void func_20EA98(Obj *obj, Mat *m, void *unused, float sign)
{
    Mat buf;
    float dx;
    float dy;
    float dz;
    int *out;

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
        D_00252A6C = D_00252A6C - 1;
        func_1FD128(&buf, m);
        break;
    case 1:
        break;
    case 2:
        func_082C38(obj);
        obj->b28 = 1;
        obj->state = 3;
        if (obj->w20 != 0) {
            return;
        }
        out = &obj->w20;
        if (D_003E54A4 == 0) {
            return;
        }
        {
            Rec *r = D_003E54A4;
            float c = r->f1C;
            float d = r->f20;
            func_088940(m, r, out, 0, 0, 0, 0, 1, r->f14, r->f18, c, d);
        }
        return;
    default:
        break;
    }
    obj->state = 3;
}
