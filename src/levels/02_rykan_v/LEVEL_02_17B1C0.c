/* LEVEL_02:0x17B1C0 -- spawns an effect record between two vectors of the actor. */
typedef struct { float x, y, z; } V3;
typedef struct {
    int f0;
    int pad4;
    int f8;
    V3 a;
    float f18;
    int f1C;
    V3 b;
    float f2C;
} Effect;
typedef struct { char pad[0x20]; V3 p20; char pad2[4]; V3 p30; char pad3[0x58 - 0x3C]; Effect **slot; } Actor;
extern unsigned short D_002AF2C8;
extern Effect *func_09A298(int a, int b, int c, int d, int e);

void func_17B1C0(Actor *o)
{
    Effect **slot = o->slot;
    Effect *e;
    V3 *pa;
    V3 *pb;
    V3 *da;
    V3 *db;

    e = func_09A298(3, 1, D_002AF2C8, 1, 0);
    if (e) {
        pa = &o->p20;
        pb = &o->p30;
        da = &e->a;
        db = &e->b;
        e->f0 = 0;
        e->f8 = 0xFF00BAFF;
        e->f18 = 0.1f;
        e->f1C = 0xBAFF;
        e->f2C = 0.1f;
        e->a.x = o->p30.x + o->p20.x * -0.5f;
        da->y = pb->y + pa->y * -0.5f;
        da->z = pb->z + pa->z * -0.5f;
        e->b.x = o->p30.x + o->p20.x * -2.5f;
        db->y = pb->y + pa->y * -2.5f;
        db->z = pb->z + pa->z * -2.5f;
    }
    *slot = e;
}
