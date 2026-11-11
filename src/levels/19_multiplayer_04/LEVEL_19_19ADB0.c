extern int D_002E6428;
extern char D_001DA388[];
extern char D_002E6448[];
extern void func_19AF90(void);
extern void func_19A998(void *state, const void *table, void *extra);

void *func_19ADB0(void) {
    if (!D_002E6428) {
        func_19AF90();
        func_19A998(&D_002E6428, D_001DA388, D_002E6448);
    }
    return &D_002E6428;
}
