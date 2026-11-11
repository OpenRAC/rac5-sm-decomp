/* LEVEL_19:0x0B76E8 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_110198 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_001AFDA8;
extern int func_110118(int a0);
extern int func_10F9D0(int a0);
extern void func_0C5F20(int a0, int a1, int a2, int a3);
extern void func_0C5F58(int a0);
extern int func_110198(void);
extern int func_110238(void);
extern void func_110410(void);
extern void func_110438(int a0);
extern int func_0C6410(int key, int state, int arg);
extern void func_112450(int *p, int a1);
extern void func_112480(char *record);

void func_0B76E8(int *o)
{
    if (func_110118(1) != 0) {
        func_0C5F20(0, func_10F9D0(0xA73), 0, 0);
        func_0C5F58(5);
    } else if (func_110198() != 0) {
        if (D_001AFDA8 != 0) {
            func_110238();
            func_110410();
            func_112450(o, 0x16);
        } else {
            func_0C6410(2, 0xA75, 0x21A);
            func_110238();
            func_110410();
            func_110438(1);
            func_112480((char *)o);
        }
    } else {
        func_112450(o, 8);
    }
}
