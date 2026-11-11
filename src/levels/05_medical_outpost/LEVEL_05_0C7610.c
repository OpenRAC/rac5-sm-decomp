/* LEVEL_05:0x0C7610 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_001EFF30;
extern int func_12E570(int a0);
extern int func_12DE28(int a0);
extern void func_0D54F8(int a0, int a1, int a2, int a3);
extern void func_0D5530(int a0);
extern int func_12E5F0(void);
extern int func_12E690(void);
extern void func_12E930(void);
extern void func_12E988(int value);
extern void func_131058(int *p, int a1);
extern void func_131088(char *record);
extern int func_0D59E8(int key, int state, int arg);

void func_0C7610(char *obj)
{
    if (func_12E570(1) != 0) {
        func_0D54F8(0, func_12DE28(0xA6F), 0, 0);
        func_0D5530(5);
        return;
    }
    if (func_12E5F0() != 0) {
        if (D_001EFF30 != 0) {
            func_12E690();
            func_12E930();
            func_131058((int *)obj, 0x14);
        } else {
            func_0D59E8(2, 0xA72, 0x21A);
            func_12E690();
            func_12E930();
            func_12E988(1);
            func_131088(obj);
        }
    } else {
        func_131058((int *)obj, 8);
    }
}
