/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_target->D_00203EC8); source body unchanged.
   Original lot source: func_vec3_add_30.c. */
extern void *D_00203EC8;

void func_vec3_add_30(float *v) {
    float *dst = (float *)((char *)D_00203EC8 + 0x30);

    dst[0] += v[0];
    dst[1] += v[1];
    dst[2] += v[2];
}
