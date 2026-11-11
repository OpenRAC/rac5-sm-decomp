/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_a->D_001DA960, level_data_b->D_0019C14C); source body unchanged.
   Original lot source: func_00000BF0.c. */
extern char D_001DA960[];
extern void *D_0019C14C;

void func_00000BF0(int index) {
    D_0019C14C = &D_001DA960[index * 0x118];
}
