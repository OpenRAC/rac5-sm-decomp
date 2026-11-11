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

extern PanelState D_003106B0;

extern void func_0AB9B8(int id, void *out, float initial);
extern int func_0A5930(const void *rect);
extern int func_0A5960(const void *rect);
extern int func_0A5990(const void *rect);
extern int func_0A5A48(const void *rect);
extern void func_0A8690(void *state, short x, short y,
                        short right, short bottom, u32 color);

void func_0BE9D0(void)
{
    u8 rect[16];
    PanelState *state;
    short x, y, right, bottom;

    func_0AB9B8(0x2E4, rect, 0.0f);
    state = &D_003106B0;
    x = (short)func_0A5930(rect);
    y = (short)func_0A5960(rect);
    right = (short)func_0A5990(rect);
    bottom = (short)func_0A5A48(rect);
    func_0A8690(state, x, y, right, bottom, 0x40602020);
    state->field_39 = 0;
    state->field_10 = 0;
    state->field_12 = 0;
    state->field_20 |= 0x840;
}
