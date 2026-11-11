/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_b->D_00143EB0); source body unchanged.
   Original lot source: func_000C50_LEVEL_15.c. */
extern float *D_00143EB0;

void func_000C50(float *delta) {
    float *v = D_00143EB0 + 12;
    v[0] += delta[0];
    v[1] += delta[1];
    v[2] += delta[2];
}
