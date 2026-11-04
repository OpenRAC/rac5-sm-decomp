typedef unsigned int u32;

typedef struct {
    u32 element[3];
} Triple;

typedef union {
    char ids[3];
    u32 rect[4];
} ChoiceBuffer;

typedef struct {
    char unused[0x14];
    u32 field_14;
    u32 field_18;
} Lookup;

extern u32 D_002046F8;
extern unsigned char D_0032CB18[];
extern unsigned char D_002045E8;
extern unsigned char D_002045EA;
extern unsigned char *D_001F3FAC;
extern Triple D_00214520;

extern void func_0D9248(void *, u32);
extern int func_024EC8(u32, int);
extern void *memset(void *, int, unsigned int);
extern int func_024B08(u32, u32, u32, int);
extern int func_024D28(u32);
extern int func_024C98(u32, u32, int);
extern Lookup *func_024A38(signed char);
extern Lookup *func_024670(u32, int);
extern void func_0D92F8(void *, u32, int, int, int, int, u32, u32,
                         u32, u32, int, int, int, u32, u32, u32);
extern void func_0D9488(void *);
extern int func_0AE708(int id, void *out, float zero);
extern void func_0D8F10(void *, void *, void *, void *, void *, void *,
                         void *, void *, void *, void *);
extern void func_0D9120(void *, void *);
extern u32 func_0A86E0(void *);
extern void func_0D9148(void *, u32, int);
extern void func_0D9168(void *, float);

void func_0D2408(void)
{
    ChoiceBuffer chosen;
    u32 values[3];
    Triple initial;
    u32 rect_70[4], rect_80[4], rect_90[4];
    u32 rect_a0[4], rect_b0[4], rect_c0[4];
    u32 rect_d0[4], rect_e0[4];
    void *pc0, *pd0, *pe0, *p70;
    u32 i, next_i;
    void *p80, *p90;
    u32 next_id;
    void *pa0, *pb0;
    float zero;

    i = 0;
    func_0D9248(D_0032CB18, D_002046F8);
    p70 = rect_70;
    p80 = rect_80;
    p90 = rect_90;
    pc0 = rect_c0;
    pd0 = rect_d0;
    pe0 = rect_e0;
    D_002045E8 = 0;
    pa0 = rect_a0;
    pb0 = rect_b0;
    D_002045EA = 0;
    if (*(u32 *)(D_001F3FAC + 0xE4) != 0) do {
        u32 resource = *(u32 *)(D_001F3FAC + 0x80 + i * 4);
        next_i = i + 1;
        if (func_024EC8(resource, -1)) {
            u32 id;
            int found = 0;
            memset(chosen.ids, 0, 3);
            memset(values, 0, 12);
            initial = D_00214520;
            for (id = 0; id < 43; id = next_id) {
                u32 slot;
                next_id = id + 1;
                for (slot = 0; slot < 3; slot++) {
                    if (func_024B08(resource, id, slot, -1) &&
                        func_024D28(id) &&
                        !func_024C98(resource, id, -1)) {
                        chosen.ids[slot] = (char)id;
                        values[slot] = func_024A38((signed char)id)->field_18;
                        initial.element[slot] =
                            func_024A38(chosen.ids[slot])->field_14;
                        if (values[slot] <= *(u32 *)(D_001F3FAC + 0x1C68))
                            D_002045EA = 1;
                        found = 1;
                        D_002045E8 = 1;
                    }
                }
            }
            if (found) {
                Lookup *entry = func_024670(resource, -1);
                int c0 = chosen.ids[0] ? 0x3B : 0;
                int c1 = chosen.ids[1] ? 0x3C : 0;
                int c2 = chosen.ids[2] ? 0x3D : 0;
                func_0D92F8(D_0032CB18, entry->field_18, c0, c1, c2, -1,
                             initial.element[0], initial.element[1], initial.element[2],
                             resource, chosen.ids[0], chosen.ids[1], chosen.ids[2],
                             values[0], values[1], values[2]);
            }
        }
        i = next_i;
    } while (i < *(u32 *)(D_001F3FAC + 0xE4));

    zero = 0.0f;
    func_0D9488(D_0032CB18);
    func_0AE708(0x227, chosen.rect, zero);
    func_0AE708(0x228, p70, zero);
    func_0AE708(0x22B, p80, zero);
    func_0AE708(0x22C, p90, zero);
    func_0AE708(0x22D, pa0, zero);
    func_0AE708(0x226, pb0, zero);
    func_0AE708(0x22B, pc0, zero);
    func_0AE708(0x22C, pd0, zero);
    func_0AE708(0x22D, pe0, zero);
    func_0D8F10(D_0032CB18, chosen.rect, p70, p80, p90, pa0, pb0, pc0, pd0, pe0);
    func_0AE708(0x229, chosen.rect, zero);
    func_0D9120(D_0032CB18, chosen.rect);
    func_0AE708(0x226, chosen.rect, zero);
    func_0D9148(D_0032CB18, func_0A86E0(chosen.rect), 0x10);
    func_0D9168(D_0032CB18, 8.0f);
}
