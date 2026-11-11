/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_a->D_001CBB80, level_data_b->D_0018E2DC); source body unchanged.
   Original lot source: func_00001498.c. */
extern char D_001CBB80[];
extern void *D_0018E2DC;

void func_00001498(int index) {
    D_0018E2DC = &D_001CBB80[index * 0x1CC0];
}
