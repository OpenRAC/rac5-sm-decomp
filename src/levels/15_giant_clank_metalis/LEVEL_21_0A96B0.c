/* LEVEL_21:0x0A96B0 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_00155830;
extern int func_0F1AC0(int a0);
extern int func_0F1378(int a0);
extern void func_0B7590(int a0, int a1, int a2, int a3);
extern void func_0B75C8(int a0);
extern int func_0F1B40(void);
extern int func_0F1BE0(void);
extern void func_0F1E80(void);
extern void func_0F1ED8(int value);
extern void func_0F45A8(int *p, int a1);
extern void func_0F45D8(char *record);
extern int func_0B7A80(int key, int state, int arg);

void func_0A96B0(char *obj)
{
    if (func_0F1AC0(1) != 0) {
        func_0B7590(0, func_0F1378(0xA6F), 0, 0);
        func_0B75C8(5);
        return;
    }
    if (func_0F1B40() != 0) {
        if (D_00155830 != 0) {
            func_0F1BE0();
            func_0F1E80();
            func_0F45A8((int *)obj, 0x14);
        } else {
            func_0B7A80(2, 0xA72, 0x21A);
            func_0F1BE0();
            func_0F1E80();
            func_0F1ED8(1);
            func_0F45D8(obj);
        }
    } else {
        func_0F45A8((int *)obj, 8);
    }
}
