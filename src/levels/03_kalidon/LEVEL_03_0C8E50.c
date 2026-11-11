/* LEVEL_03:0x0C8E50 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_00219230;
extern int func_130FC0(int a0);
extern int func_130878(int a0);
extern void func_0D6D38(int a0, int a1, int a2, int a3);
extern void func_0D6D70(int a0);
extern int func_131040(void);
extern int func_1310E0(void);
extern void func_131380(void);
extern void func_1313D8(int value);
extern void func_133AA8(int *p, int a1);
extern void func_133AD8(char *record);
extern int func_0D7228(int key, int state, int arg);

void func_0C8E50(char *obj)
{
    if (func_130FC0(1) != 0) {
        func_0D6D38(0, func_130878(0xA6F), 0, 0);
        func_0D6D70(5);
        return;
    }
    if (func_131040() != 0) {
        if (D_00219230 != 0) {
            func_1310E0();
            func_131380();
            func_133AA8((int *)obj, 0x14);
        } else {
            func_0D7228(2, 0xA72, 0x21A);
            func_1310E0();
            func_131380();
            func_1313D8(1);
            func_133AD8(obj);
        }
    } else {
        func_133AA8((int *)obj, 8);
    }
}
