/* LEVEL_20:0x08EC38 -- placement copy of LEVEL_01_0B56C0.c: draws the three overlay elements of one slot, running its optional callback between the first two. */

struct Slot_0B56C0 {
    int w0;
    int w1;
    int w2;
    int w3;
};

extern int D_0010CE18[];
extern struct Slot_0B56C0 D_00199D30[];
extern void (*D_00199D20[])(int, struct Slot_0B56C0 *);
extern int D_00199D28[];

extern void func_081C38(int a0, int a1);
extern int func_081408(struct Slot_0B56C0 *s);
extern int func_081438(struct Slot_0B56C0 *s);
extern void func_0881E8(int a0, int a1, int a2, int a3, unsigned int a4, float f12, float f13, float f14, float f15);

static __inline__ void DrawElement(int id, struct Slot_0B56C0 *slot, int port)
{
    func_0881E8(id, 1, func_081408(slot), func_081438(slot),
                ((unsigned int)(unsigned char)D_0010CE18[port] << 24) | 0xFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
}

void func_08EC38(int port)
{
    struct Slot_0B56C0 *slot;

    if (D_0010CE18[port] != 0) {
        func_081C38(port, 0);
        slot = &D_00199D30[port];
        DrawElement(0x539, slot, port);
        if (D_00199D20[port] != 0) {
            D_00199D20[port](D_00199D28[port], slot);
        }
        DrawElement(0x53B, slot, port);
        DrawElement(0x53A, slot, port);
    }
}
