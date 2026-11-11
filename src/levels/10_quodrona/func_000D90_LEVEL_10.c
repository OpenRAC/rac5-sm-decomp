/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data_a->D_00234CE0, level_data_b->D_001F8248); source body unchanged.
   Original lot source: func_000D90_LEVEL_10.c. */
extern unsigned char D_00234CE0[];
extern void *D_001F8248;

void func_000D90(int index) {
    D_001F8248 = D_00234CE0 + index * 0x118;
}
