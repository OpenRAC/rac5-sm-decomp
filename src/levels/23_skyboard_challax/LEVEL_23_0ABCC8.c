/* LEVEL_23:0x0ABCC8 -- placement copy of LEVEL_16_0A3DC8.c: placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_001CFA68[];
extern unsigned int D_001CFA70[];
extern int D_001CFA80[];
extern int D_001CFA98[];

void func_0ABFD8(int slot, void *arg);
int func_0C1140(unsigned int slot);
void func_0C0E50(unsigned char arg);
void func_040BA0(void);
int func_0ACDE8(int arg);

void func_0ABCC8(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_001CFA98[slot] = 0;
    v = D_001CFA68[slot];
    if (v != 0) {
        v = v - 1;
        D_001CFA68[slot] = v;
        if (v == 0) {
            func_0ABFD8(slot, 0);
        } else {
            func_0C1140(slot);
            func_0C0E50(0x14);
            v = D_001CFA80[slot];
            if (v != 0) {
                D_001CFA80[slot] = v - 1;
            } else {
                state = D_001CFA70[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_040BA0();
                        D_001CFA98[slot] = 1;
                        func_0ACDE8(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_040BA0();
                        D_001CFA98[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_040BA0();
                        D_001CFA98[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
