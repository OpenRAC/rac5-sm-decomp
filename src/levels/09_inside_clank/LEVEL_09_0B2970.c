/* LEVEL_09:0x0B2970 -- placement copy of LEVEL_01_0B56C0.c: draws the three overlay elements of one slot, running its optional callback between the first two. */

struct Slot_0B56C0 {
    int w0;
    int w1;
    int w2;
    int w3;
};

extern int D_001E64B8[];
extern struct Slot_0B56C0 D_0030FD30[];
extern void (*D_0030FD20[])(int, struct Slot_0B56C0 *);
extern int D_0030FD28[];

extern void func_0A6130(int a0, int a1);
extern int func_0A5930(struct Slot_0B56C0 *s);
extern int func_0A5960(struct Slot_0B56C0 *s);
extern void func_0AC6B0(int a0, int a1, int a2, int a3, unsigned int a4, float f12, float f13, float f14, float f15);

static __inline__ void DrawElement(int id, struct Slot_0B56C0 *slot, int port)
{
    func_0AC6B0(id, 1, func_0A5930(slot), func_0A5960(slot),
                ((unsigned int)(unsigned char)D_001E64B8[port] << 24) | 0xFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
}

void func_0B2970(int port)
{
    struct Slot_0B56C0 *slot;

    if (D_001E64B8[port] != 0) {
        func_0A6130(port, 0);
        slot = &D_0030FD30[port];
        DrawElement(0x539, slot, port);
        if (D_0030FD20[port] != 0) {
            D_0030FD20[port](D_0030FD28[port], slot);
        }
        DrawElement(0x53B, slot, port);
        DrawElement(0x53A, slot, port);
    }
}
