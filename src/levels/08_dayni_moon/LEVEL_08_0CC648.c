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

extern PanelState D_003781B0;

extern void func_0B9040(int id, void *out, float initial);
extern int func_0B2F78(const void *rect);
extern int func_0B2FA8(const void *rect);
extern int func_0B2FD8(const void *rect);
extern int func_0B3090(const void *rect);
extern void func_0B5D18(void *state, short x, short y,
                        short right, short bottom, u32 color);

void func_0CC648(void)
{
    u8 rect[16];
    PanelState *state;
    short x, y, right, bottom;

    func_0B9040(0x2E4, rect, 0.0f);
    state = &D_003781B0;
    x = (short)func_0B2F78(rect);
    y = (short)func_0B2FA8(rect);
    right = (short)func_0B2FD8(rect);
    bottom = (short)func_0B3090(rect);
    func_0B5D18(state, x, y, right, bottom, 0x40602020);
    state->field_39 = 0;
    state->field_10 = 0;
    state->field_12 = 0;
    state->field_20 |= 0x840;
}
