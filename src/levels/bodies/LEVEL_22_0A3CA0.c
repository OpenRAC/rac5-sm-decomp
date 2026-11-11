/* LEVEL_22:0x0A3CA0 -- placement copy of LEVEL_01_0B56C0.c: draws the three overlay elements of one slot, running its optional callback between the first two. */

struct Slot_0B56C0 {
    int w0;
    int w1;
    int w2;
    int w3;
};

extern int D_0015BA38[];
extern struct Slot_0B56C0 D_0027E170[];
extern void (*D_0027E160[])(int, struct Slot_0B56C0 *);
extern int D_0027E168[];

extern void func_097490(int a0, int a1);
extern int func_096C90(struct Slot_0B56C0 *s);
extern int func_096CC0(struct Slot_0B56C0 *s);
extern void func_09DA10(int a0, int a1, int a2, int a3, unsigned int a4, float f12, float f13, float f14, float f15);

static __inline__ void DrawElement(int id, struct Slot_0B56C0 *slot, int port)
{
    func_09DA10(id, 1, func_096C90(slot), func_096CC0(slot),
                ((unsigned int)(unsigned char)D_0015BA38[port] << 24) | 0xFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
}

void func_0A3CA0(int port)
{
    struct Slot_0B56C0 *slot;

    if (D_0015BA38[port] != 0) {
        func_097490(port, 0);
        slot = &D_0027E170[port];
        DrawElement(0x539, slot, port);
        if (D_0027E160[port] != 0) {
            D_0027E160[port](D_0027E168[port], slot);
        }
        DrawElement(0x53B, slot, port);
        DrawElement(0x53A, slot, port);
    }
}
