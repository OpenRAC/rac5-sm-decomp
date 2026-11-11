/* LEVEL_08:0x0008F8 -- placement copy of LEVEL_01_0008F8.c: registers a slot with the sound table and plays or updates its cue. */
struct Slot {
    int f0;
    int f4;
    int f8;
};
extern int func_027B50(int a, int b);
extern void func_027B70(int a, int b, int c);
extern struct Slot *func_0008D0(int id);
extern void func_0BEA10(int a, int b, unsigned int c);
extern int func_0BE338(int a);
extern void func_0BEA40(int a);
extern int func_1439E8(int a);
extern void func_0BE7A0(int a, int b, unsigned int c);
extern void func_027AA8(int a, int b, int c);

void func_0008F8(unsigned int id, int flag)
{
    unsigned char k = id - 1;
    int added = 0;
    struct Slot *p;

    if (!func_027B50(0x82, k)) {
        func_027B70(0x82, 1, k);
        added = 1;
    }
    if (flag) {
        p = func_0008D0(id);
        if (p->f8) {
            func_0BEA10(0, p->f8, 0xFFFFFFFF);
        } else if (added) {
            if (func_0BE338(-0x87)) {
                func_0BEA40(-0x88);
                func_0BE7A0(-0x88, func_1439E8(p->f0), 0xFFFFFFFF);
            } else {
                func_0BE7A0(-0x87, func_1439E8(p->f0), 0xFFFFFFFF);
                func_027AA8(0xB6, id & 0xFF, 0xFF);
            }
        }
    }
}
