typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    unsigned char pad[0x34];
    float f34;
    float f38;
    float f3C;
    float f40;
    float f44;
    float f48;
} Rec;

extern Rec *D_1D7A28;

unsigned int func_109A30(V3 *a0)
{
    Rec *v = D_1D7A28;
    unsigned int r;
    if (a0->x < v->f34) {
        r = 1;
    } else {
        r = 0;
    }
    if (a0->y < v->f38) {
        r |= 2;
    }
    if (a0->z < v->f3C) {
        r |= 4;
    }
    if (v->f40 < a0->x) {
        r |= 8;
    }
    if (v->f44 < a0->y) {
        r |= 0x10;
    }
    if (v->f48 < a0->z) {
        r |= 0x20;
    }
    return r;
}