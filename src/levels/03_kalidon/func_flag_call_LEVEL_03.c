/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_source->D_002336F0, level_state->D_0020C62C, sub_target->func_00028620); source body unchanged.
   Original lot source: func_flag_call.c. */
extern char D_002336F0[];
extern char *D_0020C62C;
extern void func_00028620(int);

void func_flag_call(void) {
    int value = *(int *)D_002336F0;

    *(int *)(D_0020C62C + 0x1C6C) = value;
    *(char *)(D_0020C62C + 0x10513) = 0;
    func_00028620(value);
}
