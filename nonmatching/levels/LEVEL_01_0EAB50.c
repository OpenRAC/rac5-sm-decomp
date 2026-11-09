/* LEVEL_01.REL:0x0EAB50: reviewed 580-byte candidate, held for ABI review.
 * Spawns an effect batch facing the camera from a position.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 580/580 bytes and is byte-
 * exact at this and 9 other USA placements, but the prototypes disagree.
 * It declares func_0011C8 returning pointer with no arguments, but the
 * accepted LEVEL_01_0011C8.c defines it returning int with no arguments.
 * It declares func_105A00 returning pointer with (int, int), but the accepted
 * LEVEL_01_105A00.c defines it returning int with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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
extern Ent D_00206918[];
extern int D_001EF418;

extern Cam *func_0011C8(void);
extern Elem *func_105A00(int a, int b);
extern int func_099328(int a, int flag);
extern Elem *func_105C18(Elem *e, int obj, void *tab, int a, V *p,
                         float f0, float f1, float f2, int b, int c);
extern void func_105A98(int n, unsigned s);

void func_0EAB50(int obj, int idx, V *pos, int arg, float f0, float f1, float f2, float scale)
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

    c = func_0011C8();
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
    s = D_00206918[idx].f_04;
    tab = D_00206918[idx].f_08;
    e = func_105A00(1, 2);
    if (e != 0) {
        fl = s + 0x60000000 <= 0x1FFFFFFF;
        r = func_099328(D_001EF418, fl);
        end = func_105C18(e, obj, tab, 2, &pt, f0, f1, f2, arg, r);
        n = end - e;
        if (n != 0) {
            func_105A98(n, s);
        }
    }
}
