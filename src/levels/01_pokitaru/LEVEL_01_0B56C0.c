/* LEVEL_01:0x0B56C0 -- draws the three overlay elements of one slot, running its optional callback between the first two. */

struct Slot_0B56C0 {
    int w0;
    int w1;
    int w2;
    int w3;
};

extern int D_001FC6B8[];
extern struct Slot_0B56C0 D_003285B0[];
extern void (*D_003285A0[])(int, struct Slot_0B56C0 *);
extern int D_003285A8[];

extern void func_0A8E80(int a0, int a1);
extern int func_0A8680(struct Slot_0B56C0 *s);
extern int func_0A86B0(struct Slot_0B56C0 *s);
extern void func_0AF400(int a0, int a1, int a2, int a3, unsigned int a4, float f12, float f13, float f14, float f15);

static __inline__ void DrawElement(int id, struct Slot_0B56C0 *slot, int port)
{
    func_0AF400(id, 1, func_0A8680(slot), func_0A86B0(slot),
                ((unsigned int)(unsigned char)D_001FC6B8[port] << 24) | 0xFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
}

void func_0B56C0(int port)
{
    struct Slot_0B56C0 *slot;

    if (D_001FC6B8[port] != 0) {
        func_0A8E80(port, 0);
        slot = &D_003285B0[port];
        DrawElement(0x539, slot, port);
        if (D_003285A0[port] != 0) {
            D_003285A0[port](D_003285A8[port], slot);
        }
        DrawElement(0x53B, slot, port);
        DrawElement(0x53A, slot, port);
    }
}
