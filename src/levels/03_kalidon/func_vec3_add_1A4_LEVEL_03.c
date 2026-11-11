/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_target->D_002078D4); source body unchanged.
   Original lot source: func_vec3_add_1A4.c. */
extern void *D_002078D4;

void func_vec3_add_1A4(float *v) {
    float *dst = (float *)((char *)D_002078D4 + 0x1A4);

    dst[0] += v[0];
    dst[1] += v[1];
    dst[2] += v[2];
}
