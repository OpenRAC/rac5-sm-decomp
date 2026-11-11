/* LEVEL_15:0x013B30 -- copies the three coordinates of the source vector in
   the slot of the table and raises its fourth coordinate to 1.0. */
struct Elem {
    float f[16];
};

extern struct Elem D_00177AA0[8];

void func_013B30(unsigned int index, float *src)
{
    struct Elem *e;

    if (index < 8) {
        e = &D_00177AA0[index];
        e->f[0] = src[0];
        e->f[1] = src[1];
        e->f[2] = src[2];
        e->f[3] = 1.0f;
    }
}
