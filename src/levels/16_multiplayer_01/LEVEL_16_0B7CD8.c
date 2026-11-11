/* LEVEL_16:0x0B7CD8 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_001AEC28;
extern int func_10FA78(int a0);
extern int func_10F330(int a0);
extern void func_0C6648(int a0, int a1, int a2, int a3);
extern void func_0C6680(int a0);
extern int func_10FAF8(void);
extern int func_10FB98(void);
extern void func_10FD70(void);
extern void func_10FD98(int value);
extern void func_111DB0(int *p, int a1);
extern void func_111DE0(char *record);
extern int func_0C6B38(int key, int state, int arg);

void func_0B7CD8(char *obj)
{
    if (func_10FA78(1) != 0) {
        func_0C6648(0, func_10F330(0xA6F), 0, 0);
        func_0C6680(5);
        return;
    }
    if (func_10FAF8() != 0) {
        if (D_001AEC28 != 0) {
            func_10FB98();
            func_10FD70();
            func_111DB0((int *)obj, 0x14);
        } else {
            func_0C6B38(2, 0xA72, 0x21A);
            func_10FB98();
            func_10FD70();
            func_10FD98(1);
            func_111DE0(obj);
        }
    } else {
        func_111DB0((int *)obj, 8);
    }
}
