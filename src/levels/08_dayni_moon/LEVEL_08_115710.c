/* LEVEL_08:0x115710 -- derives a packed direction record from a source point and an angle. */
struct Pt {
    float x;
    float y;
    float z;
    short hi;
    short lo;
};

struct Src {
    float x;
    float y;
    float z;
};

struct Pt *func_09F6E8(int *out, struct Pt *a, int b);

void func_115710(struct Pt *a0, struct Src *s0, float ang)
{
    int tmp[4];
    struct Pt *r;
    int q;

    r = func_09F6E8(tmp, a0, 1);
    if (tmp[0] == 0) {
        return;
    }
    q = (int)(ang / 6.28318548f * 8.0f + 0.5f);
    r->x = s0->x;
    r->y = s0->y + 0.75f;
    r->z = s0->z;
    r->hi = (unsigned int)(q & 7) >> 2;
    r->lo = q & 3;
}
