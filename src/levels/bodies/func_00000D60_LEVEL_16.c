/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_a->D_0019ACCC); source body unchanged.
   Original lot source: func_00000D60.c. */
struct vec { float x, y, z; };
struct object {
    char pad[0x30];
    struct vec pos;
};

extern struct object *D_0019ACCC;

void func_00000D60(float *v) {
    struct vec *d = &D_0019ACCC->pos;
    d->x += v[0];
    d->y += v[1];
    d->z += v[2];
}
