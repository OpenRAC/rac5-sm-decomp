/* LEVEL_05:0x0B34A8 -- placement copy of LEVEL_16_0A3DC8.c: placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_001EB9E8[];
extern unsigned int D_001EB9F0[];
extern int D_001EBA00[];
extern int D_001EBA18[];

void func_0B37B8(int slot, void *arg);
int func_0C88B0(unsigned int slot);
void func_0C85C0(unsigned char arg);
void func_0453C0(void);
int func_0B45C8(int arg);

void func_0B34A8(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_001EBA18[slot] = 0;
    v = D_001EB9E8[slot];
    if (v != 0) {
        v = v - 1;
        D_001EB9E8[slot] = v;
        if (v == 0) {
            func_0B37B8(slot, 0);
        } else {
            func_0C88B0(slot);
            func_0C85C0(0x14);
            v = D_001EBA00[slot];
            if (v != 0) {
                D_001EBA00[slot] = v - 1;
            } else {
                state = D_001EB9F0[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_0453C0();
                        D_001EBA18[slot] = 1;
                        func_0B45C8(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_0453C0();
                        D_001EBA18[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_0453C0();
                        D_001EBA18[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
