/* LEVEL_17:0x0A32A8 -- placement copy of LEVEL_16_0A3DC8.c: placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_0019DCE8[];
extern unsigned int D_0019DCF0[];
extern int D_0019DD00[];
extern int D_0019DD18[];

void func_0A35F0(int slot, void *arg);
int func_0B8D68(unsigned int slot);
void func_0B8920(unsigned char arg);
void func_042AF8(void);
int func_0A4590(int arg);

void func_0A32A8(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_0019DD18[slot] = 0;
    v = D_0019DCE8[slot];
    if (v != 0) {
        v = v - 1;
        D_0019DCE8[slot] = v;
        if (v == 0) {
            func_0A35F0(slot, 0);
        } else {
            func_0B8D68(slot);
            func_0B8920(0x14);
            v = D_0019DD00[slot];
            if (v != 0) {
                D_0019DD00[slot] = v - 1;
            } else {
                state = D_0019DCF0[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_042AF8();
                        D_0019DD18[slot] = 1;
                        func_0A4590(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_042AF8();
                        D_0019DD18[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_042AF8();
                        D_0019DD18[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
