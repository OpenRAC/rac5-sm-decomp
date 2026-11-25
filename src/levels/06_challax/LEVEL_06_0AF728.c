/* LEVEL_06:0x0AF728 -- placement copy of LEVEL_16_0A3DC8.c: placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_001EB568[];
extern unsigned int D_001EB570[];
extern int D_001EB580[];
extern int D_001EB598[];

void func_0AFA38(int slot, void *arg);
int func_0C4C08(unsigned int slot);
void func_0C4918(unsigned char arg);
void func_043EE8(void);
int func_0B0848(int arg);

void func_0AF728(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_001EB598[slot] = 0;
    v = D_001EB568[slot];
    if (v != 0) {
        v = v - 1;
        D_001EB568[slot] = v;
        if (v == 0) {
            func_0AFA38(slot, 0);
        } else {
            func_0C4C08(slot);
            func_0C4918(0x14);
            v = D_001EB580[slot];
            if (v != 0) {
                D_001EB580[slot] = v - 1;
            } else {
                state = D_001EB570[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_043EE8();
                        D_001EB598[slot] = 1;
                        func_0B0848(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_043EE8();
                        D_001EB598[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_043EE8();
                        D_001EB598[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
