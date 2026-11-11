/* LEVEL_03:0x159E58 -- placement copy of LEVEL_02_174860.c: advances an object's timer and, once the current table entry's time is reached, runs that entry's action and steps to the next entry. */

union Flags174860 {
    unsigned int w;
    unsigned char b;
};
struct Rec174860 {
    float t_00;
    float f_04;
    union Flags174860 fl_08;
};
struct Sub174860 {
    char pad_00[0x11];
    unsigned char b_11;
};
struct Obj174860 {
    char pad_00[0x54];
    struct Sub174860 *s_54;
    char pad_58[0x18];
    float f_70;
};
struct Cam174860 {
    char pad_00[0x18];
    float f_18;
    float f_1C;
};

extern struct Rec174860 D_00238300[];
extern char D_003AFBD0[];
extern struct Cam174860 *D_0021FB64;

int func_159D40(struct Obj174860 *o, float f, int a, int b, int c, int d, int e);
void func_1DE638(char *p, struct Obj174860 *o, unsigned int v);
void func_1DE668(char *p, struct Obj174860 *o);
void func_0807B0(struct Obj174860 *o, struct Cam174860 *cam, int a2, int a3, int t0, int t1, int t2, int t3,
                 float f12, float f13, float f14, float f15);

void func_159E58(struct Obj174860 *o, float dt)
{
    struct Sub174860 *s;
    struct Cam174860 *cam;
    struct Rec174860 *rec;

    s = o->s_54;
    o->f_70 = o->f_70 + dt;
    rec = &D_00238300[s->b_11];
    if (rec->t_00 <= o->f_70) {
        if (((rec->fl_08.w >> 2) & 0x3F) != 0) {
            func_159D40(o, 0.0f, 0, 0, 0, 0, 0);
            return;
        }
        if ((rec->fl_08.w >> 1) & 1) {
            func_1DE638(D_003AFBD0, o, 0xFFFFFFFF);
        } else {
            func_1DE668(D_003AFBD0, o);
        }
        if (D_00238300[s->b_11].fl_08.b & 1) {
            cam = D_0021FB64;
            if (cam != 0) {
                func_0807B0(o, cam, 0, 0, 0, 0, 0, 1, 1.0f, cam->f_18, cam->f_1C, D_00238300[s->b_11].f_04);
            }
        }
        s->b_11 = s->b_11 + 1;
    }
}
