/* LEVEL_17:0x017220 -- placement copy of LEVEL_16_017870.c. */
/* Apply enabled multiplayer settings and report success. */
typedef struct Settings { unsigned char pad[0x17c]; unsigned char enabled; unsigned char pad2[7]; int mode,secondary,duration; unsigned int amount; int last; } Settings;
extern Settings *D_001D13A8;
extern void func_112530(int);
extern void func_112550(int);
extern void func_112570(int);
extern void func_114F20(int);
extern void func_114F38(unsigned int);
extern void func_114F48(unsigned int);
extern void func_1122E8(int);
int func_017220(void)
{
    func_112530(1);
    if (D_001D13A8->enabled) {
        func_112550(D_001D13A8->mode);
        func_112570(D_001D13A8->secondary);
        if (D_001D13A8->duration) func_114F20((unsigned int)D_001D13A8->duration*300u);
        switch(D_001D13A8->mode) {
        case 0: break;
        case 1: func_114F38(D_001D13A8->amount); break;
        case 2: func_114F48(D_001D13A8->amount); break;
        }
        func_1122E8(D_001D13A8->last);
    }
    return 1;
}
