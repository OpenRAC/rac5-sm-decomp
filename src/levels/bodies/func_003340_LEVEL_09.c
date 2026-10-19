/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_b->D_001D9054); source body unchanged.
   Original lot source: func_003340_LEVEL_09.c. */
extern float *D_001D9054;

void func_003340(float *delta) {
    float *v = D_001D9054 + 0x1A4 / 4;
    v[0] += delta[0];
    v[1] += delta[1];
    v[2] += delta[2];
}
