/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_a->D_001CB8E0, level_data_b->D_0018E2CC); source body unchanged.
   Original lot source: CAMERA_SetCurrentCamera__FUi.c. */
extern char D_001CB8E0[];
extern void *D_0018E2CC;

void CAMERA_SetCurrentCamera__FUi(int index) {
    D_0018E2CC = &D_001CB8E0[index * 0x118];
}
