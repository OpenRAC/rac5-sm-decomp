/* LEVEL_10:0x000688 -- placement copy of LEVEL_01_0008F8.c: registers a slot with the sound table and plays or updates its cue. */
struct Slot {
    int f0;
    int f4;
    int f8;
};
extern int func_026E08(int a, int b);
extern void func_026E28(int a, int b, int c);
extern struct Slot *func_000660(int id);
extern void func_0B4E10(int a, int b, unsigned int c);
extern int func_0B4738(int a);
extern void func_0B4E40(int a);
extern int func_130310(int a);
extern void func_0B4BA0(int a, int b, unsigned int c);
extern void func_026D60(int a, int b, int c);

void func_000688(unsigned int id, int flag)
{
    unsigned char k = id - 1;
    int added = 0;
    struct Slot *p;

    if (!func_026E08(0x82, k)) {
        func_026E28(0x82, 1, k);
        added = 1;
    }
    if (flag) {
        p = func_000660(id);
        if (p->f8) {
            func_0B4E10(0, p->f8, 0xFFFFFFFF);
        } else if (added) {
            if (func_0B4738(-0x87)) {
                func_0B4E40(-0x88);
                func_0B4BA0(-0x88, func_130310(p->f0), 0xFFFFFFFF);
            } else {
                func_0B4BA0(-0x87, func_130310(p->f0), 0xFFFFFFFF);
                func_026D60(0xB6, id & 0xFF, 0xFF);
            }
        }
    }
}
