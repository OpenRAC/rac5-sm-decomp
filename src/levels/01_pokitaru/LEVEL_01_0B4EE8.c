/* LEVEL_01:0x0B4EE8 -- placement copy of LEVEL_16_0A3DC8.c: placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_001FC668[];
extern unsigned int D_001FC670[];
extern int D_001FC680[];
extern int D_001FC698[];

void func_0B5210(int slot, void *arg);
int func_0CA308(unsigned int slot);
void func_0CA018(unsigned char arg);
void func_0477C0(void);
int func_0B6020(int arg);

void func_0B4EE8(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_001FC698[slot] = 0;
    v = D_001FC668[slot];
    if (v != 0) {
        v = v - 1;
        D_001FC668[slot] = v;
        if (v == 0) {
            func_0B5210(slot, 0);
        } else {
            func_0CA308(slot);
            func_0CA018(0x14);
            v = D_001FC680[slot];
            if (v != 0) {
                D_001FC680[slot] = v - 1;
            } else {
                state = D_001FC670[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_0477C0();
                        D_001FC698[slot] = 1;
                        func_0B6020(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_0477C0();
                        D_001FC698[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_0477C0();
                        D_001FC698[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
