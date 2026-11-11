/* LEVEL_02:0x0008F8 -- placement copy of LEVEL_01_0008F8.c: registers a slot with the sound table and plays or updates its cue. */
struct Slot {
    int f0;
    int f4;
    int f8;
};
extern int func_027D10(int a, int b);
extern void func_027D30(int a, int b, int c);
extern struct Slot *func_0008D0(int id);
extern void func_0BA548(int a, int b, unsigned int c);
extern int func_0B9E70(int a);
extern void func_0BA578(int a);
extern int func_138860(int a);
extern void func_0BA2D8(int a, int b, unsigned int c);
extern void func_027C68(int a, int b, int c);

void func_0008F8(unsigned int id, int flag)
{
    unsigned char k = id - 1;
    int added = 0;
    struct Slot *p;

    if (!func_027D10(0x82, k)) {
        func_027D30(0x82, 1, k);
        added = 1;
    }
    if (flag) {
        p = func_0008D0(id);
        if (p->f8) {
            func_0BA548(0, p->f8, 0xFFFFFFFF);
        } else if (added) {
            if (func_0B9E70(-0x87)) {
                func_0BA578(-0x88);
                func_0BA2D8(-0x88, func_138860(p->f0), 0xFFFFFFFF);
            } else {
                func_0BA2D8(-0x87, func_138860(p->f0), 0xFFFFFFFF);
                func_027C68(0xB6, id & 0xFF, 0xFF);
            }
        }
    }
}
