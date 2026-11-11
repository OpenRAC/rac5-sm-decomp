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

extern PanelState D_00282820;

extern void func_09CD18(int id, void *out, float initial);
extern int func_096C90(const void *rect);
extern int func_096CC0(const void *rect);
extern int func_096CF0(const void *rect);
extern int func_096DA8(const void *rect);
extern void func_0999F0(void *state, short x, short y,
                        short right, short bottom, u32 color);

void func_0C16E0(void)
{
    u8 rect[16];
    PanelState *state;
    short x, y, right, bottom;

    func_09CD18(0x2E4, rect, 0.0f);
    state = &D_00282820;
    x = (short)func_096C90(rect);
    y = (short)func_096CC0(rect);
    right = (short)func_096CF0(rect);
    bottom = (short)func_096DA8(rect);
    func_0999F0(state, x, y, right, bottom, 0x40602020);
    state->field_39 = 0;
    state->field_10 = 0;
    state->field_12 = 0;
    state->field_20 |= 0x840;
}
