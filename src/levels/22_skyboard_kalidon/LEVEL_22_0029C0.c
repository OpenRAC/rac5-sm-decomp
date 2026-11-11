/* LEVEL_22:0x0029C0 -- placement copy of LEVEL_01_002C50.c: resets the camera manager: flag bits, default matrix, tuning vectors, then restarts the camera subsystems. */

typedef struct Mat {
    float m[16];
} Mat;

typedef struct Vec3 {
    float x, y, z;
} Vec3;

typedef struct Cam {
    Mat mat;
    long long flags;
    char pad_48[0xC];
    char sub_54[0x4C];
    int w_A0;
    char pad_A4[0x10];
    int w_B4;
    char pad_B8[0x28];
    int w_E0;
    char pad_E4[0xA0];
    Vec3 v_184;
    char pad_190[0x48];
    Vec3 v_1D8;
    char pad_1E4[0xE4];
    int w_2C8;
} Cam;

extern Cam *D_0014E5D4[1];
extern Mat D_00175240;
extern Vec3 D_001752F8;
extern Vec3 D_00175318;

extern void func_001610(int a);
extern void func_000E08(int a);
extern char D_00002D78[];
extern void func_000E68(int a, char *b, int c);
extern Mat *func_000F48(void);
extern void func_0FCDE8(void *p);
static __inline__ void Vec3Copy(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

extern void func_00AB88(void);
extern void func_002458(void);

void func_0029C0(int a)
{
    Mat *m;

    func_001610(a);
    func_000E08(a);
    func_000E68(0, D_00002D78, a);
    D_0014E5D4[0]->flags |= 0x4000;
    D_0014E5D4[0]->flags |= 0x8000;
    D_0014E5D4[0]->flags &= ~0x10000;
    D_0014E5D4[0]->flags &= ~0x40;
    D_0014E5D4[0]->flags &= ~0x80000;
    m = func_000F48();
    D_0014E5D4[0]->mat = *(m ? m : &D_00175240);
    func_0FCDE8(D_0014E5D4[0]->sub_54);
    D_0014E5D4[0]->w_A0 = 0;
    D_0014E5D4[0]->w_B4 = 0;
    D_0014E5D4[0]->w_E0 = 0;
    Vec3Copy(&D_0014E5D4[0]->v_184, &D_001752F8);
    Vec3Copy(&D_0014E5D4[0]->v_1D8, &D_00175318);
    D_0014E5D4[0]->w_2C8 = 5;
    func_00AB88();
    func_002458();
}
