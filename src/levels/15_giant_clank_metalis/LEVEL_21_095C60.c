/* LEVEL_21:0x095C60 -- placement copy of LEVEL_01_0B56C0.c: draws the three overlay elements of one slot, running its optional callback between the first two. */

struct Slot_0B56C0 {
    int w0;
    int w1;
    int w2;
    int w3;
};

extern int D_00151338[];
extern struct Slot_0B56C0 D_0023FDF0[];
extern void (*D_0023FDE0[])(int, struct Slot_0B56C0 *);
extern int D_0023FDE8[];

extern void func_089748(int a0, int a1);
extern int func_088F48(struct Slot_0B56C0 *s);
extern int func_088F78(struct Slot_0B56C0 *s);
extern void func_08FCC8(int a0, int a1, int a2, int a3, unsigned int a4, float f12, float f13, float f14, float f15);

static __inline__ void DrawElement(int id, struct Slot_0B56C0 *slot, int port)
{
    func_08FCC8(id, 1, func_088F48(slot), func_088F78(slot),
                ((unsigned int)(unsigned char)D_00151338[port] << 24) | 0xFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
}

void func_095C60(int port)
{
    struct Slot_0B56C0 *slot;

    if (D_00151338[port] != 0) {
        func_089748(port, 0);
        slot = &D_0023FDF0[port];
        DrawElement(0x539, slot, port);
        if (D_0023FDE0[port] != 0) {
            D_0023FDE0[port](D_0023FDE8[port], slot);
        }
        DrawElement(0x53B, slot, port);
        DrawElement(0x53A, slot, port);
    }
}
