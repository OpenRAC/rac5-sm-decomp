/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_b->D_00143EBC); source body unchanged.
   Original lot source: func_002E98_LEVEL_15.c. */
extern float *D_00143EBC;

void func_002E98(float *delta) {
    float *v = D_00143EBC + 0x1A4 / 4;
    v[0] += delta[0];
    v[1] += delta[1];
    v[2] += delta[2];
}
