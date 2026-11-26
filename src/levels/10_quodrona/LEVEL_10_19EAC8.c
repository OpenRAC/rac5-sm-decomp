/* LEVEL_10:0x19EAC8 -- projects a steering target 5 units back from an entity, clamps/slides it against a 2D AABB, and runs a path update. */
typedef struct Vec2 {
    float x;
    float z;
} Vec2;

typedef struct Box19EAC8 {
    unsigned char pad00[4];
    float hx04;
    unsigned char pad08[0x24];
    float hz2C;
    unsigned char pad30[4];
    float cx34;
    unsigned char pad38[4];
    float cz3C;
} Box19EAC8;

typedef struct Init54 {
    float outX;
    float outZ;
    unsigned char pad08[8];
    Box19EAC8 *box10;
} Init54;

typedef struct Obj19EAC8 {
    unsigned char pad00[0x20];
    float f20;
    float f24;
    float f28;
    float f2C;
    float pos30;
    float pos34;
    float pos38;
    float pos3C;
    unsigned char pad40[0x14];
    Init54 *p54;
    char *p58;
} Obj19EAC8;

extern char D_0022E3E8[];
extern void func_0305C0(Init54 *a0, float *a1, char *a2, char *a3, int a4);

void func_19EAC8(Obj19EAC8 *o)
{
    Vec2 dir;
    Vec2 pt;
    Vec2 rel;
    Init54 *s1 = o->p54;
    char *s2 = o->p58;
    Box19EAC8 *box;
    float ax = 0.0f;
    float sx = 0.0f;
    float az = 0.0f;
    float sz = 0.0f;
    float t;

    dir.x = -o->f20;
    dir.z = -o->f28;
    pt.x = o->pos30 + dir.x * 5.0f;
    pt.z = o->pos38 + dir.z * 5.0f;

    box = s1->box10;
    rel.x = pt.x - box->cx34;
    rel.z = pt.z - box->cz3C;
    {
        float hx = box->hx04;
        float hz = box->hz2C;
        t = rel.x - hx;
        if (t > 0.0f) {
            ax = t;
            sx = ax;
        } else {
            t = rel.x + hx;
            if (t < 0.0f) {
                sx = t;
                ax = -t;
            }
        }

        t = rel.z - hz;
        if (t > 0.0f) {
            az = t;
            sz = az;
        } else {
            t = rel.z + hz;
            if (t < 0.0f) {
                sz = t;
                az = -t;
            }
        }
    }

    if (ax > 0.0f || az > 0.0f) {
        if (ax > 0.0f && az > 0.0f) {
            if (az < ax) {
                pt.x = o->pos30 - dir.x * 5.0f;
            } else {
                pt.z = o->pos38 - dir.z * 5.0f;
            }
        } else if (az < ax) {
            pt.x -= sx;
            if (dir.z > 0.0f) {
                pt.z += ax;
            } else {
                pt.z -= ax;
            }
        } else {
            pt.z -= sz;
            if (dir.x > 0.0f) {
                pt.x += az;
            } else {
                pt.x -= az;
            }
        }
    }

    s1->outX = pt.x;
    s1->outZ = pt.z;
    func_0305C0(s1, &o->pos30, s2 + 0x108, D_0022E3E8, 0);
}
