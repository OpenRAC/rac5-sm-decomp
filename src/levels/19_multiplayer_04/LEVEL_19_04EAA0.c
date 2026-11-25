/* LEVEL_19:0x04EAA0 -- placement copy of LEVEL_16_04F640.c: when the object is idle and fast enough, scans the entry table for one inside the sphere that passes the sweep test and records its selector on the object. */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Entry {
    char pad00[0xC];
    float v_0C[3];
    float v_18[3];
    Vec3 pos_24;
    int w30;
} Entry;

typedef struct Obj {
    char pad000[0x30];
    Vec3 pos;
    char pad3C[0xC4];
    short state_100;
    short sel_102;
    char pad104[0x47C];
    float speed_580;
    char pad584[0x720];
    int link_CA4;
} Obj;

extern int D_001A34CC;
extern Entry *D_001A34D0;
extern float D_001EB920;
extern Vec3 D_001C49E8;

extern int func_037638(Obj *o);
extern int func_0FDF78(Vec3 *p, float a, float b, Vec3 *q, Vec3 *r, Entry *e, float *s, float *t);

int func_04EAA0(Obj *o)
{
    Entry *e;
    Entry *end;
    float r2;
    float dx;
    float dy;
    float dz;
    unsigned char hit;
    float px;
    float py;
    float pz;

    if (o->state_100 == 0x37) {
        return 0;
    }
    if (((int (*)(void))func_037638)() != 0) {
        return 0;
    }
    if (o->speed_580 < 2.0f) {
        return 0;
    }
    e = D_001A34D0;
    end = e + D_001A34CC;
    r2 = D_001EB920 * D_001EB920;
    px = o->pos.x;
    py = o->pos.y;
    pz = o->pos.z;
    if (e != end) {
        do {
            dx = e->pos_24.x - px;
            dy = e->pos_24.y - py;
            dz = e->pos_24.z - pz;
            if (dx * dx + dy * dy + dz * dz < r2) {
                hit = func_0FDF78(&o->pos, r2, 1.0f, &e->pos_24, &D_001C49E8, e, e->v_0C, e->v_18);
                if (hit) {
                    break;
                }
            }
            e++;
        } while (e != end);
    }
    if (e == end) {
        return 0;
    }
    o->sel_102 = 0x37;
    o->link_CA4 = e->w30;
    return 0;
}
