/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_current->D_00203EC8, level_table->D_00242DE0); source body unchanged.
   Original lot source: func_table_index_0118.c. */
extern char D_00242DE0[];
extern void *D_00203EC8;

void func_table_index_0118(int index) { D_00203EC8 = D_00242DE0 + index * 0x118; }
