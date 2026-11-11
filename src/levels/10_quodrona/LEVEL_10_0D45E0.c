typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct {
    u8 pad_00[0x10];
    u16 field_10;
    u16 field_12;
    u8 pad_14[0x0C];
    u32 field_20;
    u8 pad_24[0x15];
    u8 field_39;
} PanelState;

extern PanelState D_00336060;

extern void func_0AF820(int id, void *out, float initial);
extern int func_0A9798(const void *rect);
extern int func_0A97C8(const void *rect);
extern int func_0A97F8(const void *rect);
extern int func_0A98B0(const void *rect);
extern void func_0AC4F8(void *state, short x, short y,
                        short right, short bottom, u32 color);

void func_0D45E0(void)
{
    u8 rect[16];
    PanelState *state;
    short x, y, right, bottom;

    func_0AF820(0x2E4, rect, 0.0f);
    state = &D_00336060;
    x = (short)func_0A9798(rect);
    y = (short)func_0A97C8(rect);
    right = (short)func_0A97F8(rect);
    bottom = (short)func_0A98B0(rect);
    func_0AC4F8(state, x, y, right, bottom, 0x40602020);
    state->field_39 = 0;
    state->field_10 = 0;
    state->field_12 = 0;
    state->field_20 |= 0x840;
}
