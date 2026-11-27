/* LEVEL_08:0x1826F8 -- placement copy of LEVEL_04_176F08.c: updates enemy path/navigation target selection, handling waypoint arrival transitions and fallback node queries. */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct SubS5 {
    unsigned char pad00[0xC];
    float f0C;
    int pad10;
    void *p14;
} SubS5;

typedef struct TargetObj {
    unsigned char pad00[0x30];
    Vec3 pos30;
} TargetObj;

typedef struct NodeRes {
    TargetObj *p00;
} NodeRes;

typedef struct Init54 {
    void *p00;
} Init54;

typedef struct State58 {
    int w00;
    unsigned char pad04[0xB0];
    int subB4;
    unsigned char padB8[0x58];
    int sub110;
    unsigned char pad114[0x24];
    Vec3 v138;
    Vec3 v144;
    unsigned char pad150[8];
    int w158;
    unsigned char pad15C[8];
    unsigned char b164;
} State58;

typedef struct Mob176F08 {
    unsigned char pad00[0x20];
    Vec3 v20;
    int pad2C;
    Vec3 pos30;
    unsigned char pad3C[0x18];
    Init54 *p54;
    State58 *p58;
} Mob176F08;

extern float D_00259228;
extern int D_00278930;
extern int D_00278960;

extern SubS5 *func_183058(Mob176F08 *o);
extern int func_204838(Mob176F08 *o, Vec3 *a1, Vec3 *a2, Vec3 *a3);
extern void func_080010(int *sub, Vec3 *a1, Vec3 *a2, int a3, float f12);
extern int func_1FA090(void *nav, Mob176F08 *o, Vec3 *a2, float f12);
extern void func_204970(Mob176F08 *o, Vec3 *a1, int *a2);
extern void func_182108(Mob176F08 *o, int a1);
extern void func_034FD0(int *sub, Mob176F08 *o, int *a2, float f12, float f13);
extern void func_0368F0(Mob176F08 *o);
extern NodeRes *func_1FA3F0(void *nav, Mob176F08 *o, Vec3 *pos, float *outDist, float f12, float f13, float f14, float f15, int a4);
extern void func_1FA760(void *nav, Mob176F08 *o, Vec3 *outPos, Vec3 *targetPos);
extern void func_182F10(int *sub, Mob176F08 *o, Vec3 *pos, void *a3, int flag);
extern void func_1823C0(Mob176F08 *o, void *a1);

static __inline__ TargetObj *FindNode(void *nav, Mob176F08 *o, Vec3 *pos, float *outDist, float minD, float maxD, float c0, float c1)
{
    NodeRes *res = func_1FA3F0(nav, o, pos, outDist, minD, maxD, c0, c1, 0);
    return (res != 0) ? res->p00 : 0;
}

void func_1826F8(Mob176F08 *o, void *a1)
{
    Vec3 vec0;
    float outDist;
    State58 *s2 = o->p58;
    Init54 *s0 = o->p54;
    SubS5 *s5 = ((SubS5 * (*)(Mob176F08 *o, void *a1))func_183058)(o, a1);
    void *nav = s0->p00;
    float dist2;
    TargetObj *target;
    Vec3 *pos;

    if (s2->b164 != 0) {
        if ((func_204838(o, &s2->v138, &s2->v144, &o->v20) & 0xFF) != 0) {
            func_080010(&s2->sub110, &s2->v138, &s2->v144, 2, D_00259228);
        }
        if (s2->b164 != 0) {
            if (func_1FA090(nav, o, &s2->v138, s5->f0C) != 0) {
                s2->w158 = s2->w00;
                func_204970(o, &s2->v138, &D_00278960);
                func_182108(o, 0);
                func_034FD0(&s2->subB4, o, &D_00278930, 0.0f, 0.0f);
                func_0368F0(o);
                return;
            }
        }
    }

    dist2 = 0.0f;
    pos = &o->pos30;
    if (s2->b164 != 0) {
        float dx = s2->v138.x - pos->x;
        float dz = s2->v138.z - pos->z;
        dist2 = dx * dx + dz * dz;
    }

    target = FindNode(nav, o, pos, &outDist, dist2, 1.0e30f, 0.8660253882408142f, 1.000100016593933f);
    if (target == 0) {
        target = FindNode(nav, o, pos, &outDist, dist2, 1.0e30f, -1.000100016593933f, 1.000100016593933f);
        if (target == 0) {
            target = FindNode(nav, o, pos, &outDist, 0.0f, 1.0e30f, -1.000100016593933f, 1.000100016593933f);
        }
    }

    func_1FA760(nav, o, &vec0, &target->pos30);
    func_182F10(&s2->subB4, o, &vec0, s5->p14, (outDist * outDist < dist2) ? 1 : 0);
    func_1823C0(o, a1);
}
