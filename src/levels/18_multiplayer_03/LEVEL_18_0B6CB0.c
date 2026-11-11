/* LEVEL_18:0x0B6CB0 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_001B00A8;
extern int func_10E728(int a0);
extern int func_10DFE0(int a0);
extern void func_0C5620(int a0, int a1, int a2, int a3);
extern void func_0C5658(int a0);
extern int func_10E7A8(void);
extern int func_10E848(void);
extern void func_10EA20(void);
extern void func_10EA48(int value);
extern void func_110A60(int *p, int a1);
extern void func_110A90(char *record);
extern int func_0C5B10(int key, int state, int arg);

void func_0B6CB0(char *obj)
{
    if (func_10E728(1) != 0) {
        func_0C5620(0, func_10DFE0(0xA6F), 0, 0);
        func_0C5658(5);
        return;
    }
    if (func_10E7A8() != 0) {
        if (D_001B00A8 != 0) {
            func_10E848();
            func_10EA20();
            func_110A60((int *)obj, 0x14);
        } else {
            func_0C5B10(2, 0xA72, 0x21A);
            func_10E848();
            func_10EA20();
            func_10EA48(1);
            func_110A90(obj);
        }
    } else {
        func_110A60((int *)obj, 8);
    }
}
