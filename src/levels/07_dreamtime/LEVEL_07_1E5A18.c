/* LEVEL_07:0x1E5A18 -- placement copy of LEVEL_01_1D7260.c: copies a vector into a local record with two fixed floats and a selected pointer, then calls a helper. */

struct Rec1D7260 {
    float v[3];
    float f_0C;
    float f_10;
    float f_14;
    float f_18;
    char *p_1C;
};

extern int D_0021DF70;
extern int D_0021DF6C;
extern char D_002404D8[];
extern char D_002404B0[];
int func_1F2760(int a, int b, struct Rec1D7260 *c, int d, float e, float f);

void func_1E5A18(float *src, int flag)
{
    struct Rec1D7260 r;
    float k;
    float z;

    r.v[0] = src[0];
    r.v[1] = src[1];
    r.v[2] = src[2];
    if (flag != 0) {
        r.p_1C = D_002404D8;
    } else {
        r.p_1C = D_002404B0;
    }
    r.f_18 = 0.0f;
    k = 0.2f;
    r.f_0C = 0.1f;
    r.f_10 = k;
    r.f_14 = k;
    z = r.f_18;
    func_1F2760(D_0021DF70, D_0021DF6C, &r, 1, z, z);
}
