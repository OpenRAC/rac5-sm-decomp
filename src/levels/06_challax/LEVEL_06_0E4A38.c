/* LEVEL_06:0x0E4A38 -- placement copy of LEVEL_01_0EAB50.c: spawns an effect batch facing the camera from a position. */
typedef struct V {
    float x;
    float y;
    float z;
} V;

typedef struct Cam {
    char pad_00[0x20];
    V dir;
    char pad_2C[4];
    V pos;
} Cam;

typedef struct Ent {
    char pad_00[4];
    unsigned f_04;
    char f_08[0x98];
} Ent;

typedef struct Elem {
    char pad_00[0x30];
} Elem;

extern float sqrtf(float x);
extern Ent D_001F5818[];
extern int D_001DE318;

extern unsigned int func_0011C8(void);
extern int func_0FEAC0(int count, int size);
extern int func_092038(int a, int flag);
extern Elem *func_0FECD8(Elem *e, int obj, void *tab, int a, V *p,
                         float f0, float f1, float f2, int b, int c);
extern void func_0FEB58(int n, unsigned s);

void func_0E4A38(int obj, int idx, V *pos, int arg, float f0, float f1, float f2, float scale)
{
    Cam *c;
    V *cp;
    V *cd;
    Ent *en;
    V d;
    V dir;
    V pt;
    float len2;
    float len;
    float inv;
    unsigned s;
    void *tab;
    Elem *e;
    Elem *end;
    int fl;
    int r;
    int n;

    c = (Cam *)func_0011C8();
    cp = &c->pos;
    cd = &c->dir;
    d.x = pos->x - cp->x;
    d.y = pos->y - cp->y;
    d.z = pos->z - cp->z;
    len2 = d.x * d.x + d.y * d.y + d.z * d.z;
    if (len2 < 2.3841858e-07f) {
        dir.x = cd->x;
        dir.y = cd->y;
        dir.z = cd->z;
    } else {
        len = sqrtf(len2);
        inv = 1.0f / len;
        dir.x = inv * d.x;
        dir.y = inv * d.y;
        dir.z = inv * d.z;
    }
    pt.x = pos->x + dir.x * scale;
    pt.y = pos->y + dir.y * scale;
    pt.z = pos->z + dir.z * scale;
    s = D_001F5818[idx].f_04;
    tab = D_001F5818[idx].f_08;
    e = (Elem *)func_0FEAC0(1, 2);
    if (e != 0) {
        fl = s + 0x60000000 <= 0x1FFFFFFF;
        r = func_092038(D_001DE318, fl);
        end = func_0FECD8(e, obj, tab, 2, &pt, f0, f1, f2, arg, r);
        n = end - e;
        if (n != 0) {
            func_0FEB58(n, s);
        }
    }
}
