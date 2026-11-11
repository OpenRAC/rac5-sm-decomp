/* LEVEL_19:0x0B75B0 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_001AFDA8;
extern int func_110118(int a0);
extern int func_10F9D0(int a0);
extern void func_0C5F20(int a0, int a1, int a2, int a3);
extern void func_0C5F58(int a0);
extern int func_110198(void);
extern int func_110238(void);
extern void func_110410(void);
extern void func_110438(int value);
extern void func_112450(int *p, int a1);
extern void func_112480(char *record);
extern int func_0C6410(int key, int state, int arg);

void func_0B75B0(char *obj)
{
    if (func_110118(1) != 0) {
        func_0C5F20(0, func_10F9D0(0xA6F), 0, 0);
        func_0C5F58(5);
        return;
    }
    if (func_110198() != 0) {
        if (D_001AFDA8 != 0) {
            func_110238();
            func_110410();
            func_112450((int *)obj, 0x14);
        } else {
            func_0C6410(2, 0xA72, 0x21A);
            func_110238();
            func_110410();
            func_110438(1);
            func_112480(obj);
        }
    } else {
        func_112450((int *)obj, 8);
    }
}
