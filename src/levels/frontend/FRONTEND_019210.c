/* FRONTEND:0x019210 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_020638 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_00030438;
extern int func_0205B8(int a0);
extern int func_01F778(int a0);
extern void func_0140E0(int a0, int a1, int a2, int a3);
extern void func_014118(int a0);
extern int func_020638(void);
extern int func_0206D8(void);
extern void func_020988(void);
extern void func_0209E0(int a0);
extern int func_015308(int key, int state, int arg);
extern void func_0229A0(int *p, int a1);
extern void func_0229D0(char *record);

void func_019210(int *o)
{
    if (func_0205B8(1) != 0) {
        func_0140E0(0, func_01F778(0xA73), 0, 0);
        func_014118(5);
    } else if (func_020638() != 0) {
        if (D_00030438 != 0) {
            func_0206D8();
            func_020988();
            func_0229A0(o, 0x16);
        } else {
            func_015308(2, 0xA75, 0x21A);
            func_0206D8();
            func_020988();
            func_0209E0(1);
            func_0229D0((char *)o);
        }
    } else {
        func_0229A0(o, 8);
    }
}
