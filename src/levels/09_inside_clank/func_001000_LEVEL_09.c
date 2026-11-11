/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_a->D_00213060, level_data_b->D_001D9048); source body unchanged.
   Original lot source: func_001000_LEVEL_09.c. */
extern unsigned char D_00213060[];
extern void *D_001D9048;

void func_001000(int index) {
    D_001D9048 = D_00213060 + index * 0x118;
}
