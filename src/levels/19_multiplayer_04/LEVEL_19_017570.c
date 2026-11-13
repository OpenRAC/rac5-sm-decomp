/* LEVEL_19:0x017570 -- placement copy of LEVEL_16_017870.c. */
/* Apply enabled multiplayer settings and report success. */
typedef struct Settings { unsigned char pad[0x17c]; unsigned char enabled; unsigned char pad2[7]; int mode,secondary,duration; unsigned int amount; int last; } Settings;
extern Settings *D_001E0228;
extern void func_113548(int);
extern void func_113568(int);
extern void func_113588(int);
extern void func_115F38(int);
extern void func_115F50(unsigned int);
extern void func_115F60(unsigned int);
extern void func_113300(int);
int func_017570(void)
{
    func_113548(1);
    if (D_001E0228->enabled) {
        func_113568(D_001E0228->mode);
        func_113588(D_001E0228->secondary);
        if (D_001E0228->duration) func_115F38((unsigned int)D_001E0228->duration*300u);
        switch(D_001E0228->mode) {
        case 0: break;
        case 1: func_115F50(D_001E0228->amount); break;
        case 2: func_115F60(D_001E0228->amount); break;
        }
        func_113300(D_001E0228->last);
    }
    return 1;
}
