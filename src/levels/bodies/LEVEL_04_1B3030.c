/* LEVEL_04:0x1B3030 -- fills every element of a table with a copy of a template record and scales the alpha byte of its colour. */

struct Src1B3030 {
    int w_00;
    float v_04[3];
    float v_10[3];
    unsigned int c_1C;
};
struct Dst1B3030 {
    int w_00;
    float v_04[3];
    float v_10[3];
    int pad_1C;
    int z_20;
    float k_24;
    unsigned int c_28;
    unsigned int c_2C;
};

struct Dst1B3030 *func_09A760(int *count, void *a, int b);

static __inline__ void vcopy(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_1B3030(void *a0, struct Src1B3030 *src, float scale)
{
    int count;
    struct Dst1B3030 *tbl;
    struct Dst1B3030 *p;
    struct Dst1B3030 *end;
    unsigned int a;
    unsigned int w;

    tbl = func_09A760(&count, a0, 1);
    if (count != 0) {
        p = tbl;
        end = p + count;
        for (; p != end; p++) {
            p->w_00 = src->w_00;
            vcopy(p->v_04, src->v_04);
            vcopy(p->v_10, src->v_10);
            p->z_20 = 0;
            p->k_24 = 7.5f;
            w = src->c_1C & 0x00FFFFFF;
            a = (src->c_1C >> 24) & 0xFF;
            p->c_28 = w | ((int)((float)a * scale) << 24);
            p->c_2C = src->c_1C & 0x00FFFFFF;
        }
    }
}
