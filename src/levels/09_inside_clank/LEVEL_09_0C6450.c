/* LEVEL_09:0x0C6450 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_12BC10 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_001EA9B0;
extern int func_12BB90(int a0);
extern int func_12B448(int a0);
extern void func_0D4200(int a0, int a1, int a2, int a3);
extern void func_0D4238(int a0);
extern int func_12BC10(void);
extern int func_12BCB0(void);
extern void func_12BF50(void);
extern void func_12BFA8(int a0);
extern int func_0D46F0(int key, int state, int arg);
extern void func_12E678(int *p, int a1);
extern void func_12E6A8(char *record);

void func_0C6450(int *o)
{
    if (func_12BB90(1) != 0) {
        func_0D4200(0, func_12B448(0xA73), 0, 0);
        func_0D4238(5);
    } else if (func_12BC10() != 0) {
        if (D_001EA9B0 != 0) {
            func_12BCB0();
            func_12BF50();
            func_12E678(o, 0x16);
        } else {
            func_0D46F0(2, 0xA75, 0x21A);
            func_12BCB0();
            func_12BF50();
            func_12BFA8(1);
            func_12E6A8((char *)o);
        }
    } else {
        func_12E678(o, 8);
    }
}
