extern int D_002E6408;
extern char D_001DA2A0[];
extern char D_002E6400[];
extern void func_199760(void);
extern void func_19A998(void *state, const void *table, void *extra);

void *func_19A758(void) {
    if (!D_002E6408) {
        func_199760();
        func_19A998(&D_002E6408, D_001DA2A0, D_002E6400);
    }
    return &D_002E6408;
}
