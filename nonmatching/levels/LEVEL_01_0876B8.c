/* LEVEL_01.REL:0x0876B8 -- update the two pad state records.
 * The selected record is changed by func_087E58 for each port. The copy
 * at +0x104/+0x18C preserves the prior input before refreshing it. */
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 *D_001F625C;
extern u8 D_001F6260;
extern void (*D_001F6264)(int port, int slot);

extern int scePadGetState(int port, int slot);
extern int scePadSetMainMode(int port, int slot, int mode, int lock);
extern int scePadRead(int port, int slot, void *buffer);
extern void *memcpy(void *dest, const void *src, unsigned int size);
extern float fabsf(float value);

extern void func_087E58(int port);
extern void func_087450(int port, int active);
extern void func_01B770(void);
extern int func_02A3F0(int value);
extern void func_087620(u32 *buttons);
extern float func_0880D0(u8 axis);
extern int func_087EE8(float x, float y);

#define B(off) (*((u8 *)D_001F625C + (off)))
#define W(off) (*(u32 *)((u8 *)D_001F625C + (off)))
#define F(off) (*(float *)((u8 *)D_001F625C + (off)))

void func_0876B8(void)
{
    unsigned int port;
    for (port = 0; port < 2; port++) {
        int state;
        int mode_result;
        int was_connected;
        u8 callback_pending;
        u8 buttons_hi;
        u8 buttons_lo;
        u8 *pad;
        int mode_scaled;
        u32 changed;
        u32 stick;
        int first_axis;
        int second_axis;
        float right_x;
        u8 near_x;
        u8 near_y;

        func_087E58(port);
        memcpy(D_001F625C + 0x63, D_001F625C + 0x41, 68);

        state = scePadGetState(port, 0);
        if (B(0x220) == 0 && state == 6) {
            mode_result = scePadSetMainMode(port, 0, 1, 3);
            if (mode_result == 1)
                B(0x220) = mode_result;
        }

        was_connected = B(0x144);
        B(0x144) = state != 0;
        if (B(0x144) == 0) {
            if (B(0x234) != 0)
                B(0x235) = 1;
            callback_pending = B(0x235);
            func_087450(port, 1);
            B(0x235) = callback_pending;
            B(0x234) = 0;
            if (B(0x235) != 0 && D_001F6264 != 0 && D_001F6260 == 0) {
                D_001F6264(port, 0);
                B(0x235) = 0;
            }
        } else {
            B(0x234) = 1;
            if (B(0x235) != 0 && D_001F6264 != 0 && D_001F6260 == 0) {
                D_001F6264(port, 0);
                B(0x235) = 0;
            }
            if (scePadRead(port, 0, (u8 *)D_001F625C + 0x114) == 0) {
                if (was_connected == 0)
                    B(0x144) = 0;
            } else {
                pad = (u8 *)D_001F625C;
                buttons_hi = (u8)~pad[0x116];
                mode_scaled = (pad[0x115] & 0xF) << 1;
                buttons_lo = (u8)~pad[0x117];
                *(u32 *)(pad + 0x108) = 0;
                if (buttons_hi & 1)    W(0x108) |= 1;
                if (buttons_hi & 8)    W(0x108) |= 8;
                if (buttons_hi & 0x10) W(0x108) |= 0x10;
                if (buttons_hi & 0x20) W(0x108) |= 0x20;
                if (buttons_hi & 0x40) W(0x108) |= 0x40;
                if (buttons_hi & 0x80) W(0x108) |= 0x80;
                if (buttons_lo & 1)    W(0x108) |= 0x400;
                if (buttons_lo & 2)    W(0x108) |= 0x800;
                if (buttons_lo & 4)    W(0x108) |= 0x100;
                if (buttons_lo & 8)    W(0x108) |= 0x200;
                if (buttons_lo & 0x10) W(0x108) |= 0x1000;
                if (buttons_lo & 0x20) W(0x108) |= 0x2000;
                if (buttons_lo & 0x40) W(0x108) |= 0x4000;
                if (buttons_lo & 0x80) W(0x108) |= 0x8000;
                if (buttons_hi & 2)    W(0x108) |= 0x40000;
                if (buttons_hi & 4)    W(0x108) |= 0x80000;

                if (mode_scaled > 5) {
                    B(0x10C) = B(0x11A);
                    B(0x10D) = B(0x11B);
                    B(0x10E) = B(0x118);
                    B(0x10F) = B(0x119);
                }
                if ((buttons_hi | buttons_lo) != 0)
                    func_01B770();

                changed = W(0x108) ^ W(0x190);
                W(0x1D0) = changed & W(0x108);
                W(0x1D4) = changed & W(0x190);
                W(0x1D8) = W(0x190) & W(0x108);
                W(0x1DC) = ~(W(0x108) | W(0x190));

                if (func_02A3F0(6) != 0 && W(0x100) != 0x4000 &&
                    W(0x100) != 0x200) {
                    B(0x10C) = 255 - B(0x10C);
                    B(0x10D) = 255 - B(0x10D);
                    func_087620((u32 *)((u8 *)D_001F625C + 0x108));
                    func_087620((u32 *)((u8 *)D_001F625C + 0x1D4));
                    func_087620((u32 *)((u8 *)D_001F625C + 0x1D0));
                    func_087620((u32 *)((u8 *)D_001F625C + 0x1D8));
                    func_087620((u32 *)((u8 *)D_001F625C + 0x1DC));
                }

                F(0x134) = func_0880D0(B(0x10C));
                F(0x138) = func_0880D0(B(0x10D));
                F(0x13C) = func_0880D0(B(0x10E));
                F(0x140) = func_0880D0(B(0x10F));
                if ((W(0x100) & 0x3110) != 0 || B(0x236) != 0) {
                    right_x = F(0x13C);
                    if (right_x != 0.0f || F(0x140) != 0.0f) {
                        near_x = fabsf(F(0x134)) <= 0.00001f;
                        if (near_x != 0) {
                            near_y = fabsf(F(0x138)) <= 0.00001f;
                            if (near_y != 0) {
                            F(0x134) = right_x;
                            F(0x138) = F(0x140);
                            B(0x10C) = B(0x10E);
                            B(0x10D) = B(0x10F);
                            F(0x13C) = 0.0f;
                            F(0x140) = 0.0f;
                            B(0x10E) = 0;
                            B(0x10F) = 0;
                            }
                        }
                    }
                }
                B(0x236) = 0;
                first_axis = func_087EE8(F(0x134), F(0x138));
                second_axis = func_087EE8(F(0x13C), F(0x140));
                if ((first_axis | second_axis) != 0)
                    func_01B770();
                stick = (u32)first_axis;
                W(0x1F4) = stick & ~W(0x1F0);
                /* Preserve the original two-step state update. */
                W(0x1F0) |= stick;
                W(0x1F0) &= stick;
                W(0x148) = W(0x104);
                if (W(0x1FC) == 0)
                    W(0x1F8) = 0xFFFFFFFF;
                else
                    W(0x1FC) = W(0x1FC) - 1;
            }
        }
    }
    func_087E58(0);
}
