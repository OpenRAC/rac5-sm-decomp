/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_current->D_002078D4, level_table->D_00246A00); source body unchanged.
   Original lot source: func_table_index_1CC0.c. */
extern char D_00246A00[];
extern void *D_002078D4;

void func_table_index_1CC0(int index) { D_002078D4 = D_00246A00 + index * 0x1CC0; }
