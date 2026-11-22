/* USA FRONTEND.REL:0x018E78 (21 November 2026): exact linked bytes under gnu-
 * ee-trial, held.
 * Its form stays out of the accepted set because a placement declares
 * func_020B40 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern unsigned char D_00027E50;
extern int func_0205B8(int a0);
extern int func_01F778(int a0);
extern void func_0140E0(int a0, int a1, int a2, int a3);
extern void func_014118(int a0);
extern int func_020668(void);
extern int func_0206D8(void);
extern void func_020988(void);
extern void func_0209E0(int value);
extern void func_0229A0(int *p, int a1);
extern void func_0229D0(int *p);
extern int func_015308(int key, int state, int arg);
extern void func_0037F8(void);
extern int func_020B40(int a, int b);
extern void func_020750(void);
extern void func_0033F0(void);
extern int func_003568(void);
extern int func_001B40(int a, int b);

void func_018E78(char *obj)
{
    if (func_0205B8(1) != 0) {
        func_0140E0(0, func_01F778(0xA6B), 0, 0);
        func_014118(5);
        return;
    }
    if (func_020668() != 0) {
        func_015308(2, 0xA6A, 0x21A);
        func_0206D8();
        func_020988();
        func_0229A0((int *)obj, 0x1E);
        func_0209E0(1);
    } else {
        func_0037F8();
        func_020B40(0, 1);
        D_00027E50 = 0;
        func_020750();
        func_0033F0();
        func_001B40(func_003568(), 0);
        func_0209E0(1);
        func_0229D0((int *)obj);
    }
}
