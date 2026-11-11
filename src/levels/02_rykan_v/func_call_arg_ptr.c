/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_data->D_00247060, sub_target->func_0008B060); source body unchanged.
   Original lot source: func_call_arg_ptr.c. */
extern void func_0008B060(void *first, void *data);
extern char D_00247060[];

void func_call_arg_ptr(void *first) { func_0008B060(first, D_00247060); }
