/* LEVEL_09:0x0B2198 -- placement copy of LEVEL_16_0A3DC8.c: placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_001E6468[];
extern unsigned int D_001E6470[];
extern int D_001E6480[];
extern int D_001E6498[];

void func_0B24C0(int slot, void *arg);
int func_0C75B8(unsigned int slot);
void func_0C72C8(unsigned char arg);
void func_043CA0(void);
int func_0B32D0(int arg);

void func_0B2198(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_001E6498[slot] = 0;
    v = D_001E6468[slot];
    if (v != 0) {
        v = v - 1;
        D_001E6468[slot] = v;
        if (v == 0) {
            func_0B24C0(slot, 0);
        } else {
            func_0C75B8(slot);
            func_0C72C8(0x14);
            v = D_001E6480[slot];
            if (v != 0) {
                D_001E6480[slot] = v - 1;
            } else {
                state = D_001E6470[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_043CA0();
                        D_001E6498[slot] = 1;
                        func_0B32D0(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_043CA0();
                        D_001E6498[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_043CA0();
                        D_001E6498[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
