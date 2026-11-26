/* LEVEL_10:0x0B60C0 -- placement copy of LEVEL_16_0A3DC8.c: placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_00205668[];
extern unsigned int D_00205670[];
extern int D_00205680[];
extern int D_00205698[];

void func_0B63E8(int slot, void *arg);
int func_0CB748(unsigned int slot);
void func_0CB458(unsigned char arg);
void func_045EC8(void);
int func_0B71F8(int arg);

void func_0B60C0(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_00205698[slot] = 0;
    v = D_00205668[slot];
    if (v != 0) {
        v = v - 1;
        D_00205668[slot] = v;
        if (v == 0) {
            func_0B63E8(slot, 0);
        } else {
            func_0CB748(slot);
            func_0CB458(0x14);
            v = D_00205680[slot];
            if (v != 0) {
                D_00205680[slot] = v - 1;
            } else {
                state = D_00205670[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_045EC8();
                        D_00205698[slot] = 1;
                        func_0B71F8(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_045EC8();
                        D_00205698[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_045EC8();
                        D_00205698[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
