/* LEVEL_03:0x06C110 -- placement copy of LEVEL_01_06D788.c: passes a table row to the draw helper, interpolating toward the next row when the current slot is the blending one. */

struct Row {
    float v_00[3];
    float v_0C[3];
    unsigned short h_18;
    char pad_1A[2];
    float f_1C;
    float f_20;
};

struct Obj {
    struct Row rows[12];
    char pad_1B0[0x201 - 0x1B0];
    unsigned char b_201;
    char pad_202[3];
    unsigned char b_205;
    unsigned char b_206;
    unsigned char b_207;
};

extern void func_06BDA8(void *p, float *a, float *b, float f12, float f13, float f14);

void func_06C110(struct Obj *o, void *p, unsigned char idx)
{
    struct Row *r;
    struct Row *n;
    float t;
    float v[3];

    r = &o->rows[idx];
    if (o->b_201 != 0 || idx != o->b_205 || o->b_206 < 2) {
        func_06BDA8(p, r->v_00, r->v_0C, (float) r->h_18, r->f_20, r->f_1C);
    } else {
        n = &o->rows[(idx + 1) % 12];
        t = (float) (o->b_207 + 1) * 0.5f;
        v[0] = (r->v_00[0] - n->v_00[0]) * t + n->v_00[0];
        v[1] = (r->v_00[1] - n->v_00[1]) * t + n->v_00[1];
        v[2] = (r->v_00[2] - n->v_00[2]) * t + n->v_00[2];
        func_06BDA8(p, v, r->v_0C, (float) r->h_18,
                    (r->f_20 - n->f_20) * t + n->f_20,
                    (r->f_1C - n->f_1C) * t + n->f_1C);
    }
}
