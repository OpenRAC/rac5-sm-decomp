/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (sub_apply->func_0001B188, sub_begin->func_0008DFE8, sub_emit->func_000C2DC8, sub_finish->func_00001228, sub_flags->func_0008E8B8, sub_frame->func_000A6780, sub_test->func_0001B1C8); source body unchanged.
   Original lot source: func_boot_sequence.c. */
extern void func_0008DFE8(void);
extern void func_000A6780(void);
extern int func_0008E8B8(int);
extern void func_000C2DC8(int);
extern int func_0001B1C8(int);
extern void func_0001B188(int, void *);
extern void func_00001228(void);

void func_boot_sequence(void) {
    func_0008DFE8();
    func_000A6780();
    if (func_0008E8B8(1) & 8) {
        func_000C2DC8(5);
        if (func_0001B1C8(10)) {
            func_0001B188(4, 0);
            return;
        }
        if (func_0001B1C8(4))
            func_0001B188(10, 0);
    }
    func_00001228();
}
