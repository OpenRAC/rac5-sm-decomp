/* LEVEL_08:0x0D40C8 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_1441B0 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_00249A70;
extern int func_144130(int a0);
extern int func_1439E8(int a0);
extern void func_0E1F10(int a0, int a1, int a2, int a3);
extern void func_0E1F48(int a0);
extern int func_1441B0(void);
extern int func_144250(void);
extern void func_1444F0(void);
extern void func_144548(int a0);
extern int func_0E2410(int key, int state, int arg);
extern void func_146C18(int *p, int a1);
extern void func_146C48(char *record);

void func_0D40C8(int *o)
{
    if (func_144130(1) != 0) {
        func_0E1F10(0, func_1439E8(0xA73), 0, 0);
        func_0E1F48(5);
    } else if (func_1441B0() != 0) {
        if (D_00249A70 != 0) {
            func_144250();
            func_1444F0();
            func_146C18(o, 0x16);
        } else {
            func_0E2410(2, 0xA75, 0x21A);
            func_144250();
            func_1444F0();
            func_144548(1);
            func_146C48((char *)o);
        }
    } else {
        func_146C18(o, 8);
    }
}
