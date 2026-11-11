/* LEVEL_04:0x0BADB0 -- placement copy of LEVEL_01_0B56C0.c: draws the three overlay elements of one slot, running its optional callback between the first two. */

struct Slot_0B56C0 {
    int w0;
    int w1;
    int w2;
    int w3;
};

extern int D_00215B78[];
extern struct Slot_0B56C0 D_00342DB0[];
extern void (*D_00342DA0[])(int, struct Slot_0B56C0 *);
extern int D_00342DA8[];

extern void func_0AE0D0(int a0, int a1);
extern int func_0AD890(struct Slot_0B56C0 *s);
extern int func_0AD8C0(struct Slot_0B56C0 *s);
extern void func_0B4650(int a0, int a1, int a2, int a3, unsigned int a4, float f12, float f13, float f14, float f15);

static __inline__ void DrawElement(int id, struct Slot_0B56C0 *slot, int port)
{
    func_0B4650(id, 1, func_0AD890(slot), func_0AD8C0(slot),
                ((unsigned int)(unsigned char)D_00215B78[port] << 24) | 0xFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
}

void func_0BADB0(int port)
{
    struct Slot_0B56C0 *slot;

    if (D_00215B78[port] != 0) {
        func_0AE0D0(port, 0);
        slot = &D_00342DB0[port];
        DrawElement(0x539, slot, port);
        if (D_00342DA0[port] != 0) {
            D_00342DA0[port](D_00342DA8[port], slot);
        }
        DrawElement(0x53B, slot, port);
        DrawElement(0x53A, slot, port);
    }
}
