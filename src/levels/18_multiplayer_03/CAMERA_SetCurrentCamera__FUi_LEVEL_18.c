/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_a->D_001DA960, level_data_b->D_0019C14C); source body unchanged.
   Original lot source: CAMERA_SetCurrentCamera__FUi.c. */
extern char D_001DA960[];
extern void *D_0019C14C;

void CAMERA_SetCurrentCamera__FUi(int index) {
    D_0019C14C = &D_001DA960[index * 0x118];
}
