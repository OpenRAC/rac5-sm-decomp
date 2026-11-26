/* LEVEL_15:0x0954A0 -- placement copy of LEVEL_16_0A3DC8.c: placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_001512E8[];
extern unsigned int D_001512F0[];
extern int D_00151300[];
extern int D_00151318[];

void func_0957B0(int slot, void *arg);
int func_0AA950(unsigned int slot);
void func_0AA660(unsigned char arg);
void func_0397A8(void);
int func_096530(int arg);

void func_0954A0(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_00151318[slot] = 0;
    v = D_001512E8[slot];
    if (v != 0) {
        v = v - 1;
        D_001512E8[slot] = v;
        if (v == 0) {
            func_0957B0(slot, 0);
        } else {
            func_0AA950(slot);
            func_0AA660(0x14);
            v = D_00151300[slot];
            if (v != 0) {
                D_00151300[slot] = v - 1;
            } else {
                state = D_001512F0[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_0397A8();
                        D_00151318[slot] = 1;
                        func_096530(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_0397A8();
                        D_00151318[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_0397A8();
                        D_00151318[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
