/* LEVEL_15:0x0F93D8 -- method of a part embedded in an object: asks func_0E1A68 whether the part's linked bodies touch (passing the squared length of the owner's velocity), and when they do runs the resolution step func_0DA500 into three local vectors; returns whether it resolved. */
struct Obj {
    float x;
    float y;
    float z;
    char pad0C[0x40];
    char *f4C;
};

extern int func_0E1A68(char *a0, char *a1, struct Obj *o, char *a3, char *t0, char *t1, int t2, int t3, float f12, float f13, float f14);
extern int func_0DA500(float *a0, float *a1, float *a2, int a3, int t0, float f12, char *t1, struct Obj *t2, int t3);

unsigned char func_0F93D8(char *self, int a1, int a2, float f)
{
    float v0[4];
    float v1[4];
    float v2[4];
    struct Obj *o = (struct Obj *)(self - 0x50);
    char *s1 = o->f4C;
    float len2 = o->x * o->x + o->y * o->y + o->z * o->z;
    int r;

    if ((unsigned char)func_0E1A68(s1 + 0x34, s1 + 0x40, o, self - 0x44, self - 0x38, self - 0x2C, a1, a2, f, len2, 0.0f) == 0) {
        r = 0;
    } else {
        r = func_0DA500(v2, v0, v1, a1, a2, f, s1, o, 0);
    }
    return r;
}
