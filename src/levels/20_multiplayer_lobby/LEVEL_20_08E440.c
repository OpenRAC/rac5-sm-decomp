/* LEVEL_20:0x08E440 -- placement copy of LEVEL_16_0A3DC8.c: placement copy of LEVEL_01_0B4EE8.c: counts down per-slot timers and dispatches on the slot state and input flags. */

extern int D_0010CDC8[];
extern unsigned int D_0010CDD0[];
extern int D_0010CDE0[];
extern int D_0010CDF8[];

void func_08E788(int slot, void *arg);
int func_0A3D58(unsigned int slot);
void func_0A3910(unsigned char arg);
void func_03D3B8(void);
int func_08F6B0(int arg);

void func_08E440(int slot, void *arg)
{
    unsigned int flags = (unsigned int)arg;
    int v;
    unsigned int state;

    D_0010CDF8[slot] = 0;
    v = D_0010CDC8[slot];
    if (v != 0) {
        v = v - 1;
        D_0010CDC8[slot] = v;
        if (v == 0) {
            func_08E788(slot, 0);
        } else {
            func_0A3D58(slot);
            func_0A3910(0x14);
            v = D_0010CDE0[slot];
            if (v != 0) {
                D_0010CDE0[slot] = v - 1;
            } else {
                state = D_0010CDD0[slot];
                switch (state) {
                case 1:
                    if (flags & 0x1000) {
                        func_03D3B8();
                        D_0010CDF8[slot] = 1;
                        func_08F6B0(1);
                    }
                    break;
                case 0:
                    break;
                case 2:
                    if (flags & 0x1000) {
                        func_03D3B8();
                        D_0010CDF8[slot] = 2;
                    } else if (flags & 0x4000) {
                        func_03D3B8();
                        D_0010CDF8[slot] = 1;
                    }
                    break;
                }
            }
        }
    }
}
