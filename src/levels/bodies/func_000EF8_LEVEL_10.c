/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_b->D_001F8248); source body unchanged.
   Original lot source: func_000EF8_LEVEL_10.c. */
extern float *D_001F8248;

void func_000EF8(float *delta) {
    float *v = D_001F8248 + 12;
    v[0] += delta[0];
    v[1] += delta[1];
    v[2] += delta[2];
}
