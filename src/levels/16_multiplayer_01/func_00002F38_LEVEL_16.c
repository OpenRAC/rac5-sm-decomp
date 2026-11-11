/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_a->D_0019ACDC); source body unchanged.
   Original lot source: func_00002F38.c. */
struct vec { float x, y, z; };
struct object {
    char pad[0x1A4];
    struct vec pos;
};

extern struct object *D_0019ACDC;

void func_00002F38(float *v) {
    struct vec *d = &D_0019ACDC->pos;
    d->x += v[0];
    d->y += v[1];
    d->z += v[2];
}
