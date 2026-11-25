/* LEVEL_18:0x0A2DC0 -- placement copy of LEVEL_16_0A3DC8.c: placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_001ABB68[];
extern unsigned int D_001ABB70[];
extern int D_001ABB80[];
extern int D_001ABB98[];

void func_0A3108(int slot, void *arg);
int func_0B8800(unsigned int slot);
void func_0B83B8(unsigned char arg);
void func_041AD8(void);
int func_0A40A8(int arg);

void func_0A2DC0(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_001ABB98[slot] = 0;
    v = D_001ABB68[slot];
    if (v != 0) {
        v = v - 1;
        D_001ABB68[slot] = v;
        if (v == 0) {
            func_0A3108(slot, 0);
        } else {
            func_0B8800(slot);
            func_0B83B8(0x14);
            v = D_001ABB80[slot];
            if (v != 0) {
                D_001ABB80[slot] = v - 1;
            } else {
                state = D_001ABB70[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_041AD8();
                        D_001ABB98[slot] = 1;
                        func_0A40A8(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_041AD8();
                        D_001ABB98[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_041AD8();
                        D_001ABB98[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
