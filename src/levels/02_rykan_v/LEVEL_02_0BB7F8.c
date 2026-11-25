/* LEVEL_02:0x0BB7F8 -- placement copy of LEVEL_16_0A3DC8.c: placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_00211628[];
extern unsigned int D_00211630[];
extern int D_00211640[];
extern int D_00211658[];

void func_0BBB20(int slot, void *arg);
int func_0D0C18(unsigned int slot);
void func_0D0928(unsigned char arg);
void func_04C748(void);
int func_0BC930(int arg);

void func_0BB7F8(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_00211658[slot] = 0;
    v = D_00211628[slot];
    if (v != 0) {
        v = v - 1;
        D_00211628[slot] = v;
        if (v == 0) {
            func_0BBB20(slot, 0);
        } else {
            func_0D0C18(slot);
            func_0D0928(0x14);
            v = D_00211640[slot];
            if (v != 0) {
                D_00211640[slot] = v - 1;
            } else {
                state = D_00211630[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_04C748();
                        D_00211658[slot] = 1;
                        func_0BC930(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_04C748();
                        D_00211658[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_04C748();
                        D_00211658[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
