/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (sub_apply->func_0001A590, sub_begin->func_00087510, sub_emit->func_000BC2A0, sub_finish->func_00001250, sub_flags->func_00087DE0, sub_frame->func_0009FC18, sub_test->func_0001A5D0); source body unchanged.
   Original lot source: func_boot_sequence.c. */
extern void func_00087510(void);
extern void func_0009FC18(void);
extern int func_00087DE0(int);
extern void func_000BC2A0(int);
extern int func_0001A5D0(int);
extern void func_0001A590(int, void *);
extern void func_00001250(void);

void func_boot_sequence(void) {
    func_00087510();
    func_0009FC18();
    if (func_00087DE0(1) & 8) {
        func_000BC2A0(5);
        if (func_0001A5D0(10)) {
            func_0001A590(4, 0);
            return;
        }
        if (func_0001A5D0(4))
            func_0001A590(10, 0);
    }
    func_00001250();
}
