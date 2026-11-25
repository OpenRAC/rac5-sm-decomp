/* LEVEL_07:0x0B6F48 -- placement copy of LEVEL_16_0A3DC8.c: placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_00210968[];
extern unsigned int D_00210970[];
extern int D_00210980[];
extern int D_00210998[];

void func_0B7270(int slot, void *arg);
int func_0CC368(unsigned int slot);
void func_0CC078(unsigned char arg);
void func_047D90(void);
int func_0B8080(int arg);

void func_0B6F48(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_00210998[slot] = 0;
    v = D_00210968[slot];
    if (v != 0) {
        v = v - 1;
        D_00210968[slot] = v;
        if (v == 0) {
            func_0B7270(slot, 0);
        } else {
            func_0CC368(slot);
            func_0CC078(0x14);
            v = D_00210980[slot];
            if (v != 0) {
                D_00210980[slot] = v - 1;
            } else {
                state = D_00210970[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_047D90();
                        D_00210998[slot] = 1;
                        func_0B8080(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_047D90();
                        D_00210998[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_047D90();
                        D_00210998[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
