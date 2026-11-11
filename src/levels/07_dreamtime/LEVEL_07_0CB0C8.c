/* LEVEL_07:0x0CB0C8 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_00214EB0;
extern int func_135BF8(int a0);
extern int func_1354B0(int a0);
extern void func_0D8FB0(int a0, int a1, int a2, int a3);
extern void func_0D8FE8(int a0);
extern int func_135C78(void);
extern int func_135D18(void);
extern void func_135FB8(void);
extern void func_136010(int value);
extern void func_1386E0(int *p, int a1);
extern void func_138710(char *record);
extern int func_0D94A0(int key, int state, int arg);

void func_0CB0C8(char *obj)
{
    if (func_135BF8(1) != 0) {
        func_0D8FB0(0, func_1354B0(0xA6F), 0, 0);
        func_0D8FE8(5);
        return;
    }
    if (func_135C78() != 0) {
        if (D_00214EB0 != 0) {
            func_135D18();
            func_135FB8();
            func_1386E0((int *)obj, 0x14);
        } else {
            func_0D94A0(2, 0xA72, 0x21A);
            func_135D18();
            func_135FB8();
            func_136010(1);
            func_138710(obj);
        }
    } else {
        func_1386E0((int *)obj, 8);
    }
}
