/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_a->D_001DA5E0, level_data_b->D_0019ACCC); source body unchanged.
   Original lot source: CAMERA_SetCurrentCamera__FUi.c. */
extern char D_001DA5E0[];
extern void *D_0019ACCC;

void CAMERA_SetCurrentCamera__FUi(int index) {
    D_0019ACCC = &D_001DA5E0[index * 0x118];
}
