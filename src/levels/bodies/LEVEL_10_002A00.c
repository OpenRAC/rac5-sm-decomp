/* LEVEL_10:0x002A00 -- placement copy of LEVEL_01_002C50.c: resets the camera manager: flag bits, default matrix, tuning vectors, then restarts the camera subsystems. */

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

extern Cam *D_001F8254[1];
extern Mat D_00220D40;
extern Vec3 D_00220DF8;
extern Vec3 D_00220E28;

extern void func_001650(int a);
extern void func_000D90(int a);
extern char D_00002DB8[];
extern void func_000E18(int a, char *b, int c);
extern Mat *func_000F68(void);
extern void func_121EE8(void *p);
static __inline__ void Vec3Copy(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

extern void func_00ABC8(void);
extern void func_002498(void);

void func_002A00(int a)
{
    Mat *m;

    func_001650(a);
    func_000D90(a);
    func_000E18(0, D_00002DB8, a);
    D_001F8254[0]->flags |= 0x4000;
    D_001F8254[0]->flags |= 0x8000;
    D_001F8254[0]->flags &= ~0x10000;
    D_001F8254[0]->flags &= ~0x40;
    D_001F8254[0]->flags &= ~0x80000;
    m = func_000F68();
    D_001F8254[0]->mat = *(m ? m : &D_00220D40);
    func_121EE8(D_001F8254[0]->sub_54);
    D_001F8254[0]->w_A0 = 0;
    D_001F8254[0]->w_B4 = 0;
    D_001F8254[0]->w_E0 = 0;
    Vec3Copy(&D_001F8254[0]->v_184, &D_00220DF8);
    Vec3Copy(&D_001F8254[0]->v_1D8, &D_00220E28);
    D_001F8254[0]->w_2C8 = 5;
    func_00ABC8();
    func_002498();
}
