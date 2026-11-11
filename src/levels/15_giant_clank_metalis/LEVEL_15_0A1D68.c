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

extern PanelState D_00240770;

extern void func_08EFD0(int id, void *out, float initial);
extern int func_088F48(const void *rect);
extern int func_088F78(const void *rect);
extern int func_088FA8(const void *rect);
extern int func_089060(const void *rect);
extern void func_08BCA8(void *state, short x, short y,
                        short right, short bottom, u32 color);

void func_0A1D68(void)
{
    u8 rect[16];
    PanelState *state;
    short x, y, right, bottom;

    func_08EFD0(0x2E4, rect, 0.0f);
    state = &D_00240770;
    x = (short)func_088F48(rect);
    y = (short)func_088F78(rect);
    right = (short)func_088FA8(rect);
    bottom = (short)func_089060(rect);
    func_08BCA8(state, x, y, right, bottom, 0x40602020);
    state->field_39 = 0;
    state->field_10 = 0;
    state->field_12 = 0;
    state->field_20 |= 0x840;
}
