/* LEVEL_24:0x000700 -- placement copy of LEVEL_01_0008F8.c: registers a slot with the sound table and plays or updates its cue. */
struct Slot {
    int f0;
    int f4;
    int f8;
};
extern int func_024E58(int a, int b);
extern void func_024E78(int a, int b, int c);
extern struct Slot *func_0006D8(int id);
extern void func_0AD4B0(int a, int b, unsigned int c);
extern int func_0ACDD8(int a);
extern void func_0AD4E0(int a);
extern int func_127FB0(int a);
extern void func_0AD240(int a, int b, unsigned int c);
extern void func_024DB0(int a, int b, int c);

void func_000700(unsigned int id, int flag)
{
    unsigned char k = id - 1;
    int added = 0;
    struct Slot *p;

    if (!func_024E58(0x82, k)) {
        func_024E78(0x82, 1, k);
        added = 1;
    }
    if (flag) {
        p = func_0006D8(id);
        if (p->f8) {
            func_0AD4B0(0, p->f8, 0xFFFFFFFF);
        } else if (added) {
            if (func_0ACDD8(-0x87)) {
                func_0AD4E0(-0x88);
                func_0AD240(-0x88, func_127FB0(p->f0), 0xFFFFFFFF);
            } else {
                func_0AD240(-0x87, func_127FB0(p->f0), 0xFFFFFFFF);
                func_024DB0(0xB6, id & 0xFF, 0xFF);
            }
        }
    }
}
