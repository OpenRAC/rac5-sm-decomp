/* LEVEL_06:0x0C3968 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_001EFAB0;
extern int func_1292C8(int a0);
extern int func_128B80(int a0);
extern void func_0D1850(int a0, int a1, int a2, int a3);
extern void func_0D1888(int a0);
extern int func_129348(void);
extern int func_1293E8(void);
extern void func_129688(void);
extern void func_1296E0(int value);
extern void func_12BDB0(int *p, int a1);
extern void func_12BDE0(char *record);
extern int func_0D1D40(int key, int state, int arg);

void func_0C3968(char *obj)
{
    if (func_1292C8(1) != 0) {
        func_0D1850(0, func_128B80(0xA6F), 0, 0);
        func_0D1888(5);
        return;
    }
    if (func_129348() != 0) {
        if (D_001EFAB0 != 0) {
            func_1293E8();
            func_129688();
            func_12BDB0((int *)obj, 0x14);
        } else {
            func_0D1D40(2, 0xA72, 0x21A);
            func_1293E8();
            func_129688();
            func_1296E0(1);
            func_12BDE0(obj);
        }
    } else {
        func_12BDB0((int *)obj, 8);
    }
}
