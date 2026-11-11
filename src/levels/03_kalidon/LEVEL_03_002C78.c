/* LEVEL_03:0x002C78 -- placement copy of LEVEL_01_002C50.c: resets the camera manager: flag bits, default matrix, tuning vectors, then restarts the camera subsystems. */

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

extern Cam *D_002078D4[1];
extern Mat D_00230CC0;
extern Vec3 D_00230D78;
extern Vec3 D_00230D98;

extern void func_0018C8(int a);
extern void func_001000(int a);
extern char D_00003030[];
extern void func_001088(int a, char *b, int c);
extern Mat *func_001200(void);
extern void func_121F78(void *p);
static __inline__ void Vec3Copy(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

extern void func_00AE40(void);
extern void func_002710(void);

void func_002C78(int a)
{
    Mat *m;

    func_0018C8(a);
    func_001000(a);
    func_001088(0, D_00003030, a);
    D_002078D4[0]->flags |= 0x4000;
    D_002078D4[0]->flags |= 0x8000;
    D_002078D4[0]->flags &= ~0x10000;
    D_002078D4[0]->flags &= ~0x40;
    D_002078D4[0]->flags &= ~0x80000;
    m = func_001200();
    D_002078D4[0]->mat = *(m ? m : &D_00230CC0);
    func_121F78(D_002078D4[0]->sub_54);
    D_002078D4[0]->w_A0 = 0;
    D_002078D4[0]->w_B4 = 0;
    D_002078D4[0]->w_E0 = 0;
    Vec3Copy(&D_002078D4[0]->v_184, &D_00230D78);
    Vec3Copy(&D_002078D4[0]->v_1D8, &D_00230D98);
    D_002078D4[0]->w_2C8 = 5;
    func_00AE40();
    func_002710();
}
