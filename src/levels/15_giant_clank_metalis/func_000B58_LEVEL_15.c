/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_a->D_00173A60, level_data_b->D_00143EB0); source body unchanged.
   Original lot source: func_000B58_LEVEL_15.c. */
extern unsigned char D_00173A60[];
extern void *D_00143EB0;

void func_000B58(int index) {
    D_00143EB0 = D_00173A60 + index * 0x118;
}
