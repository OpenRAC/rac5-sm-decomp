/* LEVEL_01:0x0008F8 -- registers a slot with the sound table and plays or updates its cue. */
struct Slot {
    int f0;
    int f4;
    int f8;
};
extern int func_027528(int a, int b);
extern void func_027548(int a, int b, int c);
extern struct Slot *func_0008D0(int id);
extern void func_0B3C38(int a, int b, unsigned int c);
extern int func_0B3560(int a);
extern void func_0B3C68(int a);
extern int func_1324B0(int a);
extern void func_0B39C8(int a, int b, unsigned int c);
extern void func_027480(int a, int b, int c);

void func_0008F8(unsigned int id, int flag)
{
    unsigned char k = id - 1;
    int added = 0;
    struct Slot *p;

    if (!func_027528(0x82, k)) {
        func_027548(0x82, 1, k);
        added = 1;
    }
    if (flag) {
        p = func_0008D0(id);
        if (p->f8) {
            func_0B3C38(0, p->f8, 0xFFFFFFFF);
        } else if (added) {
            if (func_0B3560(-0x87)) {
                func_0B3C68(-0x88);
                func_0B39C8(-0x88, func_1324B0(p->f0), 0xFFFFFFFF);
            } else {
                func_0B39C8(-0x87, func_1324B0(p->f0), 0xFFFFFFFF);
                func_027480(0xB6, id & 0xFF, 0xFF);
            }
        }
    }
}
