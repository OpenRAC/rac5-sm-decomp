/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_a->D_001DA880, level_data_b->D_0019ACDC); source body unchanged.
   Original lot source: func_00001498.c. */
extern char D_001DA880[];
extern void *D_0019ACDC;

void func_00001498(int index) {
    D_0019ACDC = &D_001DA880[index * 0x1CC0];
}
