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

extern PanelState D_00276E70;

extern void func_09CDF8(int id, void *out, float initial);
extern int func_096D10(const void *rect);
extern int func_096D40(const void *rect);
extern int func_096D70(const void *rect);
extern int func_096E28(const void *rect);
extern void func_099AD0(void *state, short x, short y,
                        short right, short bottom, u32 color);

void func_0B0BD8(void)
{
    u8 rect[16];
    PanelState *state;
    short x, y, right, bottom;

    func_09CDF8(0x2E4, rect, 0.0f);
    state = &D_00276E70;
    x = (short)func_096D10(rect);
    y = (short)func_096D40(rect);
    right = (short)func_096D70(rect);
    bottom = (short)func_096E28(rect);
    func_099AD0(state, x, y, right, bottom, 0x40602020);
    state->field_39 = 0;
    state->field_10 = 0;
    state->field_12 = 0;
    state->field_20 |= 0x840;
}
