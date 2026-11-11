/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_a->D_00234F80, level_data_b->D_001F8254); source body unchanged.
   Original lot source: func_001650_LEVEL_10.c. */
extern unsigned char D_00234F80[];
extern void *D_001F8254;

void func_001650(int index) {
    D_001F8254 = D_00234F80 + index * 0x1CC0;
}
