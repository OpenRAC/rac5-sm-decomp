/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_current->D_00203ED4, level_table->D_00243080); source body unchanged.
   Original lot source: func_table_index_1CC0.c. */
extern char D_00243080[];
extern void *D_00203ED4;

void func_table_index_1CC0(int index) { D_00203ED4 = D_00243080 + index * 0x1CC0; }
