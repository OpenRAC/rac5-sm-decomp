/* LEVEL_09:0x0C6318 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_001EA9B0;
extern int func_12BB90(int a0);
extern int func_12B448(int a0);
extern void func_0D4200(int a0, int a1, int a2, int a3);
extern void func_0D4238(int a0);
extern int func_12BC10(void);
extern int func_12BCB0(void);
extern void func_12BF50(void);
extern void func_12BFA8(int value);
extern void func_12E678(int *p, int a1);
extern void func_12E6A8(char *record);
extern int func_0D46F0(int key, int state, int arg);

void func_0C6318(char *obj)
{
    if (func_12BB90(1) != 0) {
        func_0D4200(0, func_12B448(0xA6F), 0, 0);
        func_0D4238(5);
        return;
    }
    if (func_12BC10() != 0) {
        if (D_001EA9B0 != 0) {
            func_12BCB0();
            func_12BF50();
            func_12E678((int *)obj, 0x14);
        } else {
            func_0D46F0(2, 0xA72, 0x21A);
            func_12BCB0();
            func_12BF50();
            func_12BFA8(1);
            func_12E6A8(obj);
        }
    } else {
        func_12E678((int *)obj, 8);
    }
}
