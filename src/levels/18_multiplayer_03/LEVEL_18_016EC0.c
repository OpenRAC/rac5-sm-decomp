/* LEVEL_18:0x016EC0 -- placement copy of LEVEL_16_017870.c. */
/* Apply enabled multiplayer settings and report success. */
typedef struct Settings { unsigned char pad[0x17c]; unsigned char enabled; unsigned char pad2[7]; int mode,secondary,duration; unsigned int amount; int last; } Settings;
extern Settings *D_001E0428;
extern void func_111B58(int);
extern void func_111B78(int);
extern void func_111B98(int);
extern void func_114568(int);
extern void func_114580(unsigned int);
extern void func_114590(unsigned int);
extern void func_111910(int);
int func_016EC0(void)
{
    func_111B58(1);
    if (D_001E0428->enabled) {
        func_111B78(D_001E0428->mode);
        func_111B98(D_001E0428->secondary);
        if (D_001E0428->duration) func_114568((unsigned int)D_001E0428->duration*300u);
        switch(D_001E0428->mode) {
        case 0: break;
        case 1: func_114580(D_001E0428->amount); break;
        case 2: func_114590(D_001E0428->amount); break;
        }
        func_111910(D_001E0428->last);
    }
    return 1;
}
