/* LEVEL_22:0x0B7518 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_0015FF30;
extern int func_10A0C8(int a0);
extern int func_109980(int a0);
extern void func_0C5490(int a0, int a1, int a2, int a3);
extern void func_0C54C8(int a0);
extern int func_10A148(void);
extern int func_10A1E8(void);
extern void func_10A488(void);
extern void func_10A4E0(int value);
extern void func_10CBB0(int *p, int a1);
extern void func_10CBE0(char *record);
extern int func_0C5980(int key, int state, int arg);

void func_0B7518(char *obj)
{
    if (func_10A0C8(1) != 0) {
        func_0C5490(0, func_109980(0xA6F), 0, 0);
        func_0C54C8(5);
        return;
    }
    if (func_10A148() != 0) {
        if (D_0015FF30 != 0) {
            func_10A1E8();
            func_10A488();
            func_10CBB0((int *)obj, 0x14);
        } else {
            func_0C5980(2, 0xA72, 0x21A);
            func_10A1E8();
            func_10A488();
            func_10A4E0(1);
            func_10CBE0(obj);
        }
    } else {
        func_10CBB0((int *)obj, 8);
    }
}
