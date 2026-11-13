/* Apply enabled multiplayer settings and report success. */
typedef struct Settings { unsigned char pad[0x17c]; unsigned char enabled; unsigned char pad2[7]; int mode,secondary,duration; unsigned int amount; int last; } Settings;
extern Settings *D_001E00A8;
extern void func_112DA0(int);
extern void func_112DC0(int);
extern void func_112DE0(int);
extern void func_1157C0(int);
extern void func_1157D8(unsigned int);
extern void func_1157E8(unsigned int);
extern void func_112B58(int);
int func_017870(void)
{
    func_112DA0(1);
    if (D_001E00A8->enabled) {
        func_112DC0(D_001E00A8->mode);
        func_112DE0(D_001E00A8->secondary);
        if (D_001E00A8->duration) func_1157C0((unsigned int)D_001E00A8->duration*300u);
        switch(D_001E00A8->mode) {
        case 0: break;
        case 1: func_1157D8(D_001E00A8->amount); break;
        case 2: func_1157E8(D_001E00A8->amount); break;
        }
        func_112B58(D_001E00A8->last);
    }
    return 1;
}
