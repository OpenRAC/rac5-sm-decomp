/* LEVEL_17:0x127110 -- placement copy of LEVEL_01_137C80.c: builds two packed handles from the table, then resolves three table entries into their globals. */
extern int D_0023F540[];
extern unsigned int D_001C3D50[];
extern int D_001B0AE8[];
extern int D_001B0AF4;
extern int D_001B0AF8;
extern int func_17D1D0(unsigned int value);
extern void func_181E40(unsigned int value);
extern int func_106410(unsigned int value);

void func_127110(void)
{
    unsigned int i;
    int *p = &D_001B0AF4;

    *p = func_17D1D0(((unsigned int)D_0023F540[82] << 16) | 0xE8005041u);
    D_001B0AF8 = ((int (*)(unsigned int value))func_181E40)(((unsigned int)D_0023F540[20] << 16) | 0xE00050D9u);
    for (i = 0; i < 3; i++) {
        D_001B0AE8[i] = func_106410(D_001C3D50[i]);
    }
}
