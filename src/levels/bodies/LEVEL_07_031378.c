/* LEVEL_07:0x031378 -- placement copy of LEVEL_01_032020.c: updates a record's planar position from a vector, advances a counter byte, and calls a helper when the move is large, when the flag byte changed, or when the counter reached two. */

struct Vec3 {
    float x;
    float y;
    float z;
};

struct Pt2 {
    float x;
    float y;
};

struct Obj {
    unsigned char pad00[0x08];
    struct Pt2 pos;
    unsigned char pad10[0x2D - 0x10];
    unsigned char b2D;
    unsigned char b2E;
};

void func_032088(struct Obj *a0, int a1);

void func_031378(struct Obj *a0, struct Vec3 *a1, int a2, int a3)
{
    struct Pt2 *p;
    unsigned char s1;
    float dx;
    float dz;
    float d2;
    int hit;

    p = &a0->pos;
    s1 = (unsigned char)a2;
    a0->b2E = a0->b2E + 1;
    dx = a1->x - a0->pos.x;
    dz = a1->z - p->y;
    d2 = dx * dx + dz * dz;
    hit = (0.010000000707805157f <= d2);
    a0->pos.x = a1->x;
    p->y = a1->z;
    if (hit || s1 != a0->b2D || a0->b2E >= 2) {
        a0->b2E = 0;
        func_032088(a0, a3);
    }
    a0->b2D = s1;
}
