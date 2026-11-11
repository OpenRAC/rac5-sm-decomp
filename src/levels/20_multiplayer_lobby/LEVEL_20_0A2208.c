/* LEVEL_20:0x0A2208 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_00111308;
extern int func_0E2860(int a0);
extern int func_0E2118(int a0);
extern void func_0B0B78(int a0, int a1, int a2, int a3);
extern void func_0B0BB0(int a0);
extern int func_0E28E0(void);
extern int func_0E2980(void);
extern void func_0E2B58(void);
extern void func_0E2B80(int value);
extern void func_0E4B98(int *p, int a1);
extern void func_0E4BC8(char *record);
extern int func_0B1068(int key, int state, int arg);

void func_0A2208(char *obj)
{
    if (func_0E2860(1) != 0) {
        func_0B0B78(0, func_0E2118(0xA6F), 0, 0);
        func_0B0BB0(5);
        return;
    }
    if (func_0E28E0() != 0) {
        if (D_00111308 != 0) {
            func_0E2980();
            func_0E2B58();
            func_0E4B98((int *)obj, 0x14);
        } else {
            func_0B1068(2, 0xA72, 0x21A);
            func_0E2980();
            func_0E2B58();
            func_0E2B80(1);
            func_0E4BC8(obj);
        }
    } else {
        func_0E4B98((int *)obj, 8);
    }
}
