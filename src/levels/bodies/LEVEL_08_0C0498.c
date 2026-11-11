/* LEVEL_08:0x0C0498 -- placement copy of LEVEL_01_0B56C0.c: draws the three overlay elements of one slot, running its optional callback between the first two. */

struct Slot_0B56C0 {
    int w0;
    int w1;
    int w2;
    int w3;
};

extern int D_00245578[];
extern struct Slot_0B56C0 D_00377830[];
extern void (*D_00377820[])(int, struct Slot_0B56C0 *);
extern int D_00377828[];

extern void func_0B37B8(int a0, int a1);
extern int func_0B2F78(struct Slot_0B56C0 *s);
extern int func_0B2FA8(struct Slot_0B56C0 *s);
extern void func_0B9D38(int a0, int a1, int a2, int a3, unsigned int a4, float f12, float f13, float f14, float f15);

static __inline__ void DrawElement(int id, struct Slot_0B56C0 *slot, int port)
{
    func_0B9D38(id, 1, func_0B2F78(slot), func_0B2FA8(slot),
                ((unsigned int)(unsigned char)D_00245578[port] << 24) | 0xFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
}

void func_0C0498(int port)
{
    struct Slot_0B56C0 *slot;

    if (D_00245578[port] != 0) {
        func_0B37B8(port, 0);
        slot = &D_00377830[port];
        DrawElement(0x539, slot, port);
        if (D_00377820[port] != 0) {
            D_00377820[port](D_00377828[port], slot);
        }
        DrawElement(0x53B, slot, port);
        DrawElement(0x53A, slot, port);
    }
}
