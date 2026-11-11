/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_source->D_0022F770, level_state->D_00208C2C, sub_target->func_00028FF0); source body unchanged.
   Original lot source: func_flag_call.c. */
extern char D_0022F770[];
extern char *D_00208C2C;
extern void func_00028FF0(int);

void func_flag_call(void) {
    int value = *(int *)D_0022F770;

    *(int *)(D_00208C2C + 0x1C6C) = value;
    *(char *)(D_00208C2C + 0x10513) = 0;
    func_00028FF0(value);
}
