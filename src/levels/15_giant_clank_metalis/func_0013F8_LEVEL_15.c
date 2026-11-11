/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_a->D_00173D00, level_data_b->D_00143EBC); source body unchanged.
   Original lot source: func_0013F8_LEVEL_15.c. */
extern unsigned char D_00173D00[];
extern void *D_00143EBC;

void func_0013F8(int index) {
    D_00143EBC = D_00173D00 + index * 0x1CC0;
}
