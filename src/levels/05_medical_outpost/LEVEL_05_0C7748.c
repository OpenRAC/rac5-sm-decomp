/* LEVEL_05:0x0C7748 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_12E5F0 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_001EFF30;
extern int func_12E570(int a0);
extern int func_12DE28(int a0);
extern void func_0D54F8(int a0, int a1, int a2, int a3);
extern void func_0D5530(int a0);
extern int func_12E5F0(void);
extern int func_12E690(void);
extern void func_12E930(void);
extern void func_12E988(int a0);
extern int func_0D59E8(int key, int state, int arg);
extern void func_131058(int *p, int a1);
extern void func_131088(char *record);

void func_0C7748(int *o)
{
    if (func_12E570(1) != 0) {
        func_0D54F8(0, func_12DE28(0xA73), 0, 0);
        func_0D5530(5);
    } else if (func_12E5F0() != 0) {
        if (D_001EFF30 != 0) {
            func_12E690();
            func_12E930();
            func_131058(o, 0x16);
        } else {
            func_0D59E8(2, 0xA75, 0x21A);
            func_12E690();
            func_12E930();
            func_12E988(1);
            func_131088((char *)o);
        }
    } else {
        func_131058(o, 8);
    }
}
