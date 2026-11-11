/* LEVEL_08:0x0D3F90 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_00249A70;
extern int func_144130(int a0);
extern int func_1439E8(int a0);
extern void func_0E1F10(int a0, int a1, int a2, int a3);
extern void func_0E1F48(int a0);
extern int func_1441B0(void);
extern int func_144250(void);
extern void func_1444F0(void);
extern void func_144548(int value);
extern void func_146C18(int *p, int a1);
extern void func_146C48(char *record);
extern int func_0E2410(int key, int state, int arg);

void func_0D3F90(char *obj)
{
    if (func_144130(1) != 0) {
        func_0E1F10(0, func_1439E8(0xA6F), 0, 0);
        func_0E1F48(5);
        return;
    }
    if (func_1441B0() != 0) {
        if (D_00249A70 != 0) {
            func_144250();
            func_1444F0();
            func_146C18((int *)obj, 0x14);
        } else {
            func_0E2410(2, 0xA72, 0x21A);
            func_144250();
            func_1444F0();
            func_144548(1);
            func_146C48(obj);
        }
    } else {
        func_146C18((int *)obj, 8);
    }
}
