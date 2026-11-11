/* FRONTEND:0x0190D8 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_00030438;
extern int func_0205B8(int a0);
extern int func_01F778(int a0);
extern void func_0140E0(int a0, int a1, int a2, int a3);
extern void func_014118(int a0);
extern int func_020638(void);
extern int func_0206D8(void);
extern void func_020988(void);
extern void func_0209E0(int value);
extern void func_0229A0(int *p, int a1);
extern void func_0229D0(char *record);
extern int func_015308(int key, int state, int arg);

void func_0190D8(char *obj)
{
    if (func_0205B8(1) != 0) {
        func_0140E0(0, func_01F778(0xA6F), 0, 0);
        func_014118(5);
        return;
    }
    if (func_020638() != 0) {
        if (D_00030438 != 0) {
            func_0206D8();
            func_020988();
            func_0229A0((int *)obj, 0x14);
        } else {
            func_015308(2, 0xA72, 0x21A);
            func_0206D8();
            func_020988();
            func_0209E0(1);
            func_0229D0(obj);
        }
    } else {
        func_0229A0((int *)obj, 8);
    }
}
