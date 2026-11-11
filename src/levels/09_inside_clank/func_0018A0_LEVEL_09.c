/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_a->D_00213300, level_data_b->D_001D9054); source body unchanged.
   Original lot source: func_0018A0_LEVEL_09.c. */
extern unsigned char D_00213300[];
extern void *D_001D9054;

void func_0018A0(int index) {
    D_001D9054 = D_00213300 + index * 0x1CC0;
}
