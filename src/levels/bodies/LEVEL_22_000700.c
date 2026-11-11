/* LEVEL_22:0x000700 -- placement copy of LEVEL_01_0008F8.c: registers a slot with the sound table and plays or updates its cue. */
struct Slot {
    int f0;
    int f4;
    int f8;
};
extern int func_021EB8(int a, int b);
extern void func_021ED8(int a, int b, int c);
extern struct Slot *func_0006D8(int id);
extern void func_0A22B8(int a, int b, unsigned int c);
extern int func_0A1BE0(int a);
extern void func_0A22E8(int a);
extern int func_109980(int a);
extern void func_0A2048(int a, int b, unsigned int c);
extern void func_021E10(int a, int b, int c);

void func_000700(unsigned int id, int flag)
{
    unsigned char k = id - 1;
    int added = 0;
    struct Slot *p;

    if (!func_021EB8(0x82, k)) {
        func_021ED8(0x82, 1, k);
        added = 1;
    }
    if (flag) {
        p = func_0006D8(id);
        if (p->f8) {
            func_0A22B8(0, p->f8, 0xFFFFFFFF);
        } else if (added) {
            if (func_0A1BE0(-0x87)) {
                func_0A22E8(-0x88);
                func_0A2048(-0x88, func_109980(p->f0), 0xFFFFFFFF);
            } else {
                func_0A2048(-0x87, func_109980(p->f0), 0xFFFFFFFF);
                func_021E10(0xB6, id & 0xFF, 0xFF);
            }
        }
    }
}
