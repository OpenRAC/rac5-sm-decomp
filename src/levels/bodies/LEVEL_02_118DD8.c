/* LEVEL_02:0x118DD8 -- the point is located inside the bounds kept in the
   global D_21BD68; the result is a bit mask of the violated bounds. */
typedef struct {
    char pad[0x34];
    float f34;
    float f38;
    float f3C;
    float f40;
    float f44;
    float f48;
} Bounds;

extern Bounds *D_21BD68;

int func_118DD8(void *a0)
{
    Bounds *b = D_21BD68;
    int r = 0;

    if (*(float *)((char *)a0 + 0x0) < b->f34) {
        r = 1;
    }
    if (*(float *)((char *)a0 + 0x4) < b->f38) {
        r |= 2;
    }
    if (*(float *)((char *)a0 + 0x8) < b->f3C) {
        r |= 4;
    }
    if (b->f40 < *(float *)((char *)a0 + 0x0)) {
        r |= 8;
    }
    if (b->f44 < *(float *)((char *)a0 + 0x4)) {
        r |= 16;
    }
    if (b->f48 < *(float *)((char *)a0 + 0x8)) {
        r |= 32;
    }
    return r;
}
