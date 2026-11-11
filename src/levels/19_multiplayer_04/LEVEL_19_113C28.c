/* LEVEL_19:0x113C28 -- placement copy of LEVEL_16_113480.c: runs a short shutdown sequence when a pending flag is set, then clears a status byte. */

extern int D_001B5DA4;
extern unsigned char D_001B5DB0;

void func_033118(void);
void func_117030(void);
void func_1196B8(void);

void func_113C28(void)
{
    if (D_001B5DA4 == 1) {
        func_033118();
        D_001B5DA4 = 0;
        func_117030();
        func_1196B8();
    }
    D_001B5DB0 = 0;
}
