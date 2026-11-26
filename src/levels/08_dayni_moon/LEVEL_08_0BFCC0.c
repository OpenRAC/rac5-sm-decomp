/* LEVEL_08:0x0BFCC0 -- placement copy of LEVEL_16_0A3DC8.c: placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_00245528[];
extern unsigned int D_00245530[];
extern int D_00245540[];
extern int D_00245558[];

void func_0BFFE8(int slot, void *arg);
int func_0D5230(unsigned int slot);
void func_0D4F40(unsigned char arg);
void func_04C8C8(void);
int func_0C0F10(int arg);

void func_0BFCC0(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_00245558[slot] = 0;
    v = D_00245528[slot];
    if (v != 0) {
        v = v - 1;
        D_00245528[slot] = v;
        if (v == 0) {
            func_0BFFE8(slot, 0);
        } else {
            func_0D5230(slot);
            func_0D4F40(0x14);
            v = D_00245540[slot];
            if (v != 0) {
                D_00245540[slot] = v - 1;
            } else {
                state = D_00245530[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_04C8C8();
                        D_00245558[slot] = 1;
                        func_0C0F10(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_04C8C8();
                        D_00245558[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_04C8C8();
                        D_00245558[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
