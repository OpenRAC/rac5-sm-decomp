/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_a->D_001DA5E0, level_data_b->D_0019ACCC); source body unchanged.
   Original lot source: func_00000BF0.c. */
extern char D_001DA5E0[];
extern void *D_0019ACCC;

void func_00000BF0(int index) {
    D_0019ACCC = &D_001DA5E0[index * 0x118];
}
