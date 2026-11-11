/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_current->D_002078C8, level_table->D_00246760); source body unchanged.
   Original lot source: func_table_index_0118.c. */
extern char D_00246760[];
extern void *D_002078C8;

void func_table_index_0118(int index) { D_002078C8 = D_00246760 + index * 0x118; }
