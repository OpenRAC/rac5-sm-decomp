/* LEVEL_16:0x0A45C0 -- placement copy of LEVEL_01_0B56C0.c: draws the three overlay elements of one slot, running its optional callback between the first two. */

struct Slot_0B56C0 {
    int w0;
    int w1;
    int w2;
    int w3;
};

extern int D_001AA738[];
extern struct Slot_0B56C0 D_002764F0[];
extern void (*D_002764E0[])(int, struct Slot_0B56C0 *);
extern int D_002764E8[];

extern void func_097540(int a0, int a1);
extern int func_096D10(struct Slot_0B56C0 *s);
extern int func_096D40(struct Slot_0B56C0 *s);
extern void func_09DAF0(int a0, int a1, int a2, int a3, unsigned int a4, float f12, float f13, float f14, float f15);

static __inline__ void DrawElement(int id, struct Slot_0B56C0 *slot, int port)
{
    func_09DAF0(id, 1, func_096D10(slot), func_096D40(slot),
                ((unsigned int)(unsigned char)D_001AA738[port] << 24) | 0xFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
}

void func_0A45C0(int port)
{
    struct Slot_0B56C0 *slot;

    if (D_001AA738[port] != 0) {
        func_097540(port, 0);
        slot = &D_002764F0[port];
        DrawElement(0x539, slot, port);
        if (D_002764E0[port] != 0) {
            D_002764E0[port](D_002764E8[port], slot);
        }
        DrawElement(0x53B, slot, port);
        DrawElement(0x53A, slot, port);
    }
}
