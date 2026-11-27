/* LEVEL_04:0x14A840 -- placement copy of LEVEL_01_13E430.c: triggers a burst effect/sound at an entity and spawns three scattered debris mobs with randomized launch angles. */
extern int rand(void);
extern float cosf(float);
extern float sinf(float);
extern float sqrtf(float);

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct SfxRec {
    unsigned char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} SfxRec;

typedef struct ClassRec44 {
    unsigned char pad00[0x24];
    unsigned int id24;
    unsigned char pad28[0x1C];
} ClassRec44;

typedef struct Mgr13E430 {
    unsigned char pad00[0x34];
    ClassRec44 *recs34;
    unsigned int count38;
} Mgr13E430;

typedef struct Mob13E430 {
    unsigned char pad00[0x30];
    Vec3 pos30;
    unsigned char pad3C[0x1C];
    void *p58;
} Mob13E430;

typedef struct MgrPtr {
    Mgr13E430 *p;
} MgrPtr;

extern Vec3 D_00235188;
extern int D_00235198[3];
extern char D_002351C0[];
extern int D_002351D8[3];
extern MgrPtr D_002201B0;

extern void func_132058(Vec3 *out, Mob13E430 *o, Vec3 *off);
extern void func_0F6E68(int flag, Vec3 *pos);
extern SfxRec *func_023EB8(int id);
extern void func_083E30(Mob13E430 *o, SfxRec *sfx, int a2, int a3, int a4, int a5, int a6, int a7, float f12, float f13, float f14, float f15);
extern Mob13E430 *func_07F9D0(ClassRec44 *cls, int arg1, int a2, int a3);
extern float func_080310(Mob13E430 *o, Mob13E430 *m, int arg2);
extern void func_1310E8(Mob13E430 *a0, Mob13E430 *a1, Mob13E430 *a2);
extern void func_1E6140(Mob13E430 *m, void *p58, char *name, Vec3 *vel, int arg4);

static __inline__ ClassRec44 *FindClass(unsigned int id)
{
    unsigned int i;

    for (i = 0; i < D_002201B0.p->count38; i++) {
        if (D_002201B0.p->recs34[i].id24 == id) {
            return &D_002201B0.p->recs34[i];
        }
    }
    return 0;
}

static __inline__ void SetLen2D(Vec3 *v, float len)
{
    float s = v->x * v->x + v->z * v->z;
    if (!(s < 2.384185791015625e-07f)) {
        s = len / sqrtf(s);
        v->x = s * v->x;
        v->z = s * v->z;
    }
}

void func_14A840(Mob13E430 *o, int flag)
{
    Vec3 pos;
    Vec3 vel;
    SfxRec *sfx;
    unsigned int i;
    float baseAng;
    float spanAng;

    func_132058(&pos, o, &D_00235188);
    if (flag != 0) {
        func_0F6E68(1, &pos);
    } else {
        func_0F6E68(0, &pos);
    }

    sfx = func_023EB8(3);
    if (sfx != 0) {
        func_083E30(o, sfx, 0, 0, 0, 0, 0, 1, sfx->f14, sfx->f18, sfx->f1C, sfx->f20);
    }

    baseAng = 0.7853981852531433f;
    spanAng = 0.2617993950843811f;
    for (i = 0; i < 3; i++) {
        int a1 = D_00235198[i];
        ClassRec44 *cls = FindClass(0x4FB90D64U);
        Mob13E430 *m;

        if (cls == 0) {
            m = 0;
        } else {
            m = func_07F9D0(cls, a1, 0, 0xFF);
        }

        if (m != 0) {
            float ang;
            float c;
            float len2;

            func_080310(o, m, D_002351D8[i]);
            func_1310E8(m, m, o);
            vel.x = m->pos30.x - pos.x;
            vel.z = m->pos30.z - pos.z;
            ang = (float)rand() * 4.656612873077393e-10f * spanAng + baseAng;
            c = cosf(ang);
            SetLen2D(&vel, c);
            vel.y = sinf(ang);
            func_1E6140(m, m->p58, D_002351C0, &vel, -1);
        }
    }
}
