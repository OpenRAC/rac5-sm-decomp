/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_a->D_001DAC00, level_data_b->D_0019C15C); source body unchanged.
   Original lot source: func_00001498.c. */
extern char D_001DAC00[];
extern void *D_0019C15C;

void func_00001498(int index) {
    D_0019C15C = &D_001DAC00[index * 0x1CC0];
}
