/* LEVEL_06:0x0AFEE8 -- placement copy of LEVEL_01_0B56C0.c: draws the three overlay elements of one slot, running its optional callback between the first two. */

struct Slot_0B56C0 {
    int w0;
    int w1;
    int w2;
    int w3;
};

extern int D_001EB5B8[];
extern struct Slot_0B56C0 D_00315330[];
extern void (*D_00315320[])(int, struct Slot_0B56C0 *);
extern int D_00315328[];

extern void func_0A3650(int a0, int a1);
extern int func_0A2E50(struct Slot_0B56C0 *s);
extern int func_0A2E80(struct Slot_0B56C0 *s);
extern void func_0A9BD0(int a0, int a1, int a2, int a3, unsigned int a4, float f12, float f13, float f14, float f15);

static __inline__ void DrawElement(int id, struct Slot_0B56C0 *slot, int port)
{
    func_0A9BD0(id, 1, func_0A2E50(slot), func_0A2E80(slot),
                ((unsigned int)(unsigned char)D_001EB5B8[port] << 24) | 0xFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
}

void func_0AFEE8(int port)
{
    struct Slot_0B56C0 *slot;

    if (D_001EB5B8[port] != 0) {
        func_0A3650(port, 0);
        slot = &D_00315330[port];
        DrawElement(0x539, slot, port);
        if (D_00315320[port] != 0) {
            D_00315320[port](D_00315328[port], slot);
        }
        DrawElement(0x53B, slot, port);
        DrawElement(0x53A, slot, port);
    }
}
