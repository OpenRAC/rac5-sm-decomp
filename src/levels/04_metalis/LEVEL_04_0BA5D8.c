/* LEVEL_04:0x0BA5D8 -- placement copy of LEVEL_16_0A3DC8.c: placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_00215B28[];
extern unsigned int D_00215B30[];
extern int D_00215B40[];
extern int D_00215B58[];

void func_0BA900(int slot, void *arg);
int func_0CFB20(unsigned int slot);
void func_0CF830(unsigned char arg);
void func_0491E0(void);
int func_0BB828(int arg);

void func_0BA5D8(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_00215B58[slot] = 0;
    v = D_00215B28[slot];
    if (v != 0) {
        v = v - 1;
        D_00215B28[slot] = v;
        if (v == 0) {
            func_0BA900(slot, 0);
        } else {
            func_0CFB20(slot);
            func_0CF830(0x14);
            v = D_00215B40[slot];
            if (v != 0) {
                D_00215B40[slot] = v - 1;
            } else {
                state = D_00215B30[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_0491E0();
                        D_00215B58[slot] = 1;
                        func_0BB828(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_0491E0();
                        D_00215B58[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_0491E0();
                        D_00215B58[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
