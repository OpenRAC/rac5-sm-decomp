/* LEVEL_23:0x0008F8 -- placement copy of LEVEL_01_0008F8.c: registers a slot with the sound table and plays or updates its cue. */
struct Slot {
    int f0;
    int f4;
    int f8;
};
extern int func_025280(int a, int b);
extern void func_0252A0(int a, int b, int c);
extern struct Slot *func_0008D0(int id);
extern void func_0AAA18(int a, int b, unsigned int c);
extern int func_0AA340(int a);
extern void func_0AAA48(int a);
extern int func_123C28(int a);
extern void func_0AA7A8(int a, int b, unsigned int c);
extern void func_0251D8(int a, int b, int c);

void func_0008F8(unsigned int id, int flag)
{
    unsigned char k = id - 1;
    int added = 0;
    struct Slot *p;

    if (!func_025280(0x82, k)) {
        func_0252A0(0x82, 1, k);
        added = 1;
    }
    if (flag) {
        p = func_0008D0(id);
        if (p->f8) {
            func_0AAA18(0, p->f8, 0xFFFFFFFF);
        } else if (added) {
            if (func_0AA340(-0x87)) {
                func_0AAA48(-0x88);
                func_0AA7A8(-0x88, func_123C28(p->f0), 0xFFFFFFFF);
            } else {
                func_0AA7A8(-0x87, func_123C28(p->f0), 0xFFFFFFFF);
                func_0251D8(0xB6, id & 0xFF, 0xFF);
            }
        }
    }
}
