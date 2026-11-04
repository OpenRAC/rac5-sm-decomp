/* Provisional menu setup for LEVEL_01.REL:0x0BF180. */
typedef unsigned int u32;

typedef struct {
    short first;
    short pad_02;
    unsigned short second;
    short pad_06;
    unsigned short third;
    short pad_0a;
    unsigned short fourth;
    short pad_0e;
} UiSamples;

typedef struct {
    u32 unused[5];
    u32 flags;
} MenuObject;

typedef struct {
    char unused[0x5d0];
    int current_id;
} MenuState;

extern MenuObject D_00328CD0;
extern char D_001FCB58[];
extern int D_002127B0[];
extern MenuState D_00235140;

extern void func_0B9B38(void *menu, const void *source, int size, int zero);
extern int func_0AE708(int id, void *out, float zero);
extern void func_0B9E90(void *menu, int a, int b, int c, int d);
extern void func_0B9E78(void *menu, int first, int second);
extern void func_0B9998(void *menu, u32 first, u32 second);
extern void func_0B9FC8(void *menu, void *samples, int a, int b, int c);
extern void func_0B9A78(void *menu, int a, int b);
extern void *func_027528(int type, u32 value);
extern u32 *func_0008D0(int id);
extern u32 *func_0008A8(int id);
extern void func_0BA008(void *menu, void *items, void *data, int id, int zero);
extern u32 func_000140(u32 item, int slot);
extern u32 func_000108(u32 item);
extern void func_0BA120(void *menu, u32 item, int zero, u32 text,
                        u32 first, int second, int other, u32 attr);
extern void func_0BA070(void *menu);
extern void func_0B9C10(void *menu);
extern void func_0B98A0(void *menu, int row, int slot,
                        u32 red, u32 green, u32 blue, int zero);
extern void func_0B99A8(void *menu, int selected);

void func_0BF180(void)
{
    MenuState *state = &D_00235140;
    MenuObject *menu = &D_00328CD0;
    UiSamples samples;
    int *ids;
    unsigned int index;
    int selected = 0;
    float zero = 0.0f;

    func_0B9B38(menu, D_001FCB58, 0x1000, 0);
    func_0AE708(0x151, &samples, zero);
    func_0B9E90(menu, samples.first, (short)samples.second,
                 (short)samples.third, (short)samples.fourth);
    func_0B9E78(menu, 0x144, 0x14e);
    func_0B9998(menu, 0x40602020u, 0xffb07050u);
    func_0AE708(0x153, &samples, zero);
    func_0B9FC8(menu, &samples, 1, 1, 1);
    func_0B9A78(menu, 1, 1);

    ids = D_002127B0;
    index = 1;
    do {
        int id = *ids;
        int row = index - 1;
        if (func_027528(0x82, ((u32)id - 1u) & 0xffu)) {
            u32 *data = func_0008D0(id);
            u32 *items = func_0008A8(id);
            u32 text;
            u32 attr;

            if (state->current_id == id)
                selected = row;
            func_0BA008(menu, items, data, id, 0);

            text = func_000140(items[0], 0);
            attr = func_000108(items[0]);
            func_0BA120(menu, data[0], 0, text, 0x144, 0x14e, 0, attr);

            text = func_000140(items[1], 1);
            attr = func_000108(items[1]);
            func_0BA120(menu, data[0], 0, text, 0xffffffffu, 0x14b, 0, attr);

            text = func_000140(items[2], 2);
            attr = func_000108(items[2]);
            func_0BA120(menu, data[0], 0, text, 0xffffffffu, 0x14d, 0, attr);

            text = func_000140(items[3], 3);
            attr = func_000108(items[3]);
            func_0BA120(menu, data[0], 0, text, 0xffffffffu, 0x14c, 0, attr);
            func_0BA070(menu);
        } else {
            func_0BA008(menu, 0, 0, 0, 0);
            func_0BA120(menu, 0x2c6, 0, 0x47, 0x144, 0x14e, 0, 0x66ffffffu);
            func_0BA120(menu, 0x2c6, 0, 0x47, 0xffffffffu, 0x14b, 0, 0x66ffffffu);
            func_0BA120(menu, 0x2c6, 0, 0x47, 0xffffffffu, 0x14d, 0, 0x66ffffffu);
            func_0BA120(menu, 0x2c6, 0, 0x47, 0xffffffffu, 0x14c, 0, 0x66ffffffu);
            func_0BA070(menu);
        }
        ++index;
        ++ids;
    } while (index < 14u);

    menu->flags |= 0x10u;
    func_0B9C10(menu);

    ids = D_002127B0;
    index = 1;
    do {
        int row = index - 1;
        if (!func_027528(0x82, ((u32)*ids - 1u) & 0xffu)) {
            func_0B98A0(menu, row, 0, 0xff808080u, 0xff808080u, 0xff808080u, 0);
            func_0B98A0(menu, row, 1, 0xff808080u, 0xff808080u, 0xff808080u, 0);
            func_0B98A0(menu, row, 2, 0xff808080u, 0xff808080u, 0xff808080u, 0);
            func_0B98A0(menu, row, 3, 0xff808080u, 0xff808080u, 0xff808080u, 0);
        }
        ++index;
        ++ids;
    } while (index < 14u);
    func_0B99A8(menu, selected);
}
