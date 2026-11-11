/* LEVEL_05:0x0B3C68 -- placement copy of LEVEL_01_0B56C0.c: draws the three overlay elements of one slot, running its optional callback between the first two. */

struct Slot_0B56C0 {
    int w0;
    int w1;
    int w2;
    int w3;
};

extern int D_001EBA38[];
extern struct Slot_0B56C0 D_00314470[];
extern void (*D_00314460[])(int, struct Slot_0B56C0 *);
extern int D_00314468[];

extern void func_0A7440(int a0, int a1);
extern int func_0A6C40(struct Slot_0B56C0 *s);
extern int func_0A6C70(struct Slot_0B56C0 *s);
extern void func_0AD9C0(int a0, int a1, int a2, int a3, unsigned int a4, float f12, float f13, float f14, float f15);

static __inline__ void DrawElement(int id, struct Slot_0B56C0 *slot, int port)
{
    func_0AD9C0(id, 1, func_0A6C40(slot), func_0A6C70(slot),
                ((unsigned int)(unsigned char)D_001EBA38[port] << 24) | 0xFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
}

void func_0B3C68(int port)
{
    struct Slot_0B56C0 *slot;

    if (D_001EBA38[port] != 0) {
        func_0A7440(port, 0);
        slot = &D_00314470[port];
        DrawElement(0x539, slot, port);
        if (D_00314460[port] != 0) {
            D_00314460[port](D_00314468[port], slot);
        }
        DrawElement(0x53B, slot, port);
        DrawElement(0x53A, slot, port);
    }
}
