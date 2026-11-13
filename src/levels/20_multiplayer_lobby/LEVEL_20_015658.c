/* LEVEL_20:0x015658 -- placement copy of LEVEL_16_017870.c. */
/* Apply enabled multiplayer settings and report success. */
typedef struct Settings { unsigned char pad[0x17c]; unsigned char enabled; unsigned char pad2[7]; int mode,secondary,duration; unsigned int amount; int last; } Settings;
extern Settings *D_00137A28;
extern void func_0E5910(int);
extern void func_0E5930(int);
extern void func_0E5950(int);
extern void func_0E80C0(int);
extern void func_0E80D8(unsigned int);
extern void func_0E80E8(unsigned int);
extern void func_0E5700(int);
int func_015658(void)
{
    func_0E5910(1);
    if (D_00137A28->enabled) {
        func_0E5930(D_00137A28->mode);
        func_0E5950(D_00137A28->secondary);
        if (D_00137A28->duration) func_0E80C0((unsigned int)D_00137A28->duration*300u);
        switch(D_00137A28->mode) {
        case 0: break;
        case 1: func_0E80D8(D_00137A28->amount); break;
        case 2: func_0E80E8(D_00137A28->amount); break;
        }
        func_0E5700(D_00137A28->last);
    }
    return 1;
}
