/* LEVEL_24:0x0AEF50 -- placement copy of LEVEL_01_0B56C0.c: draws the three overlay elements of one slot, running its optional callback between the first two. */

struct Slot_0B56C0 {
    int w0;
    int w1;
    int w2;
    int w3;
};

extern int D_001CD338[];
extern struct Slot_0B56C0 D_002F4470[];
extern void (*D_002F4460[])(int, struct Slot_0B56C0 *);
extern int D_002F4468[];

extern void func_0A26F8(int a0, int a1);
extern int func_0A1EF8(struct Slot_0B56C0 *s);
extern int func_0A1F28(struct Slot_0B56C0 *s);
extern void func_0A8C78(int a0, int a1, int a2, int a3, unsigned int a4, float f12, float f13, float f14, float f15);

static __inline__ void DrawElement(int id, struct Slot_0B56C0 *slot, int port)
{
    func_0A8C78(id, 1, func_0A1EF8(slot), func_0A1F28(slot),
                ((unsigned int)(unsigned char)D_001CD338[port] << 24) | 0xFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
}

void func_0AEF50(int port)
{
    struct Slot_0B56C0 *slot;

    if (D_001CD338[port] != 0) {
        func_0A26F8(port, 0);
        slot = &D_002F4470[port];
        DrawElement(0x539, slot, port);
        if (D_002F4460[port] != 0) {
            D_002F4460[port](D_002F4468[port], slot);
        }
        DrawElement(0x53B, slot, port);
        DrawElement(0x53A, slot, port);
    }
}
