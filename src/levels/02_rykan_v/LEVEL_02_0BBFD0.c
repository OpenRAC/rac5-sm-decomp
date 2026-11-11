/* LEVEL_02:0x0BBFD0 -- placement copy of LEVEL_01_0B56C0.c: draws the three overlay elements of one slot, running its optional callback between the first two. */

struct Slot_0B56C0 {
    int w0;
    int w1;
    int w2;
    int w3;
};

extern int D_00211678[];
extern struct Slot_0B56C0 D_0033FAB0[];
extern void (*D_0033FAA0[])(int, struct Slot_0B56C0 *);
extern int D_0033FAA8[];

extern void func_0AF790(int a0, int a1);
extern int func_0AEF90(struct Slot_0B56C0 *s);
extern int func_0AEFC0(struct Slot_0B56C0 *s);
extern void func_0B5D10(int a0, int a1, int a2, int a3, unsigned int a4, float f12, float f13, float f14, float f15);

static __inline__ void DrawElement(int id, struct Slot_0B56C0 *slot, int port)
{
    func_0B5D10(id, 1, func_0AEF90(slot), func_0AEFC0(slot),
                ((unsigned int)(unsigned char)D_00211678[port] << 24) | 0xFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
}

void func_0BBFD0(int port)
{
    struct Slot_0B56C0 *slot;

    if (D_00211678[port] != 0) {
        func_0AF790(port, 0);
        slot = &D_0033FAB0[port];
        DrawElement(0x539, slot, port);
        if (D_0033FAA0[port] != 0) {
            D_0033FAA0[port](D_0033FAA8[port], slot);
        }
        DrawElement(0x53B, slot, port);
        DrawElement(0x53A, slot, port);
    }
}
