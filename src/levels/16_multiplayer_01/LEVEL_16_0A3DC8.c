/* LEVEL_16:0x0A3DC8 -- placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_001AA6E8[];
extern unsigned int D_001AA6F0[];
extern int D_001AA700[];
extern int D_001AA718[];

void func_0A4110(int slot, void *arg);
int func_0B9828(unsigned int slot);
void func_0B93E0(unsigned char arg);
void func_043298(void);
int func_0A50B0(int arg);

void func_0A3DC8(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_001AA718[slot] = 0;
    v = D_001AA6E8[slot];
    if (v != 0) {
        v = v - 1;
        D_001AA6E8[slot] = v;
        if (v == 0) {
            func_0A4110(slot, 0);
        } else {
            func_0B9828(slot);
            func_0B93E0(0x14);
            v = D_001AA700[slot];
            if (v != 0) {
                D_001AA700[slot] = v - 1;
            } else {
                state = D_001AA6F0[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_043298();
                        D_001AA718[slot] = 1;
                        func_0A50B0(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_043298();
                        D_001AA718[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_043298();
                        D_001AA718[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
