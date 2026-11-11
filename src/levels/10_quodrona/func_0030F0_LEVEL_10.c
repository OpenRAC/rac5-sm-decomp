/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_b->D_001F8254); source body unchanged.
   Original lot source: func_0030F0_LEVEL_10.c. */
extern float *D_001F8254;

void func_0030F0(float *delta) {
    float *v = D_001F8254 + 0x1A4 / 4;
    v[0] += delta[0];
    v[1] += delta[1];
    v[2] += delta[2];
}
