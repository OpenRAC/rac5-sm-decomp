/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_current->D_002078C8, level_table->D_00246760); source body unchanged.
   Original lot source: CAMERA_SetCurrentCamera__FUi.c. */
extern char D_00246760[];
extern void *D_002078C8;

void CAMERA_SetCurrentCamera__FUi(int index) { D_002078C8 = D_00246760 + index * 0x118; }
