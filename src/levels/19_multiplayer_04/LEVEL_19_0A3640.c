/* LEVEL_19:0x0A3640 -- placement copy of LEVEL_16_0A3DC8.c: placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_001AB868[];
extern unsigned int D_001AB870[];
extern int D_001AB880[];
extern int D_001AB898[];

void func_0A3988(int slot, void *arg);
int func_0B9100(unsigned int slot);
void func_0B8CB8(unsigned char arg);
void func_042528(void);
int func_0A4928(int arg);

void func_0A3640(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_001AB898[slot] = 0;
    v = D_001AB868[slot];
    if (v != 0) {
        v = v - 1;
        D_001AB868[slot] = v;
        if (v == 0) {
            func_0A3988(slot, 0);
        } else {
            func_0B9100(slot);
            func_0B8CB8(0x14);
            v = D_001AB880[slot];
            if (v != 0) {
                D_001AB880[slot] = v - 1;
            } else {
                state = D_001AB870[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_042528();
                        D_001AB898[slot] = 1;
                        func_0A4928(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_042528();
                        D_001AB898[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_042528();
                        D_001AB898[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
