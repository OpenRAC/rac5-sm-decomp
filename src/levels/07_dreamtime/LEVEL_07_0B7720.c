/* LEVEL_07:0x0B7720 -- placement copy of LEVEL_01_0B56C0.c: draws the three overlay elements of one slot, running its optional callback between the first two. */

struct Slot_0B56C0 {
    int w0;
    int w1;
    int w2;
    int w3;
};

extern int D_002109B8[];
extern struct Slot_0B56C0 D_0033DEB0[];
extern void (*D_0033DEA0[])(int, struct Slot_0B56C0 *);
extern int D_0033DEA8[];

extern void func_0AAE80(int a0, int a1);
extern int func_0AA680(struct Slot_0B56C0 *s);
extern int func_0AA6B0(struct Slot_0B56C0 *s);
extern void func_0B1400(int a0, int a1, int a2, int a3, unsigned int a4, float f12, float f13, float f14, float f15);

static __inline__ void DrawElement(int id, struct Slot_0B56C0 *slot, int port)
{
    func_0B1400(id, 1, func_0AA680(slot), func_0AA6B0(slot),
                ((unsigned int)(unsigned char)D_002109B8[port] << 24) | 0xFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
}

void func_0B7720(int port)
{
    struct Slot_0B56C0 *slot;

    if (D_002109B8[port] != 0) {
        func_0AAE80(port, 0);
        slot = &D_0033DEB0[port];
        DrawElement(0x539, slot, port);
        if (D_0033DEA0[port] != 0) {
            D_0033DEA0[port](D_0033DEA8[port], slot);
        }
        DrawElement(0x53B, slot, port);
        DrawElement(0x53A, slot, port);
    }
}
