/* LEVEL_03:0x0B4CD0 -- placement copy of LEVEL_16_0A3DC8.c: placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_00214CE8[];
extern unsigned int D_00214CF0[];
extern int D_00214D00[];
extern int D_00214D18[];

void func_0B4FF8(int slot, void *arg);
int func_0CA0F0(unsigned int slot);
void func_0C9E00(unsigned char arg);
void func_045A80(void);
int func_0B5E08(int arg);

void func_0B4CD0(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_00214D18[slot] = 0;
    v = D_00214CE8[slot];
    if (v != 0) {
        v = v - 1;
        D_00214CE8[slot] = v;
        if (v == 0) {
            func_0B4FF8(slot, 0);
        } else {
            func_0CA0F0(slot);
            func_0C9E00(0x14);
            v = D_00214D00[slot];
            if (v != 0) {
                D_00214D00[slot] = v - 1;
            } else {
                state = D_00214CF0[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_045A80();
                        D_00214D18[slot] = 1;
                        func_0B5E08(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_045A80();
                        D_00214D18[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_045A80();
                        D_00214D18[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
