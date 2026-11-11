/* LEVEL_04:0x1A868 -- test palette/flag combination then run the common tail. */
extern void func_0008A950(void);
extern void func_000A50A8(void);
extern int func_0008B220(int);
extern void func_000C1CC8(int);
extern int func_0001A4E8(int);
extern void func_0001A4A8(int, int);
extern void func_00001030(void);

void func_0001A868(void) {
    func_0008A950();
    func_000A50A8();
    if (func_0008B220(1) & 8) {
        func_000C1CC8(5);
        if (func_0001A4E8(10)) {
            func_0001A4A8(4, 0);
            return;
        }
        if (func_0001A4E8(4))
            func_0001A4A8(10, 0);
    }
    func_00001030();
}
