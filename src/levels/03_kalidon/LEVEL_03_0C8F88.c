/* LEVEL_03:0x0C8F88 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_131040 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_00219230;
extern int func_130FC0(int a0);
extern int func_130878(int a0);
extern void func_0D6D38(int a0, int a1, int a2, int a3);
extern void func_0D6D70(int a0);
extern int func_131040(void);
extern int func_1310E0(void);
extern void func_131380(void);
extern void func_1313D8(int a0);
extern int func_0D7228(int key, int state, int arg);
extern void func_133AA8(int *p, int a1);
extern void func_133AD8(char *record);

void func_0C8F88(int *o)
{
    if (func_130FC0(1) != 0) {
        func_0D6D38(0, func_130878(0xA73), 0, 0);
        func_0D6D70(5);
    } else if (func_131040() != 0) {
        if (D_00219230 != 0) {
            func_1310E0();
            func_131380();
            func_133AA8(o, 0x16);
        } else {
            func_0D7228(2, 0xA75, 0x21A);
            func_1310E0();
            func_131380();
            func_1313D8(1);
            func_133AD8((char *)o);
        }
    } else {
        func_133AA8(o, 8);
    }
}
