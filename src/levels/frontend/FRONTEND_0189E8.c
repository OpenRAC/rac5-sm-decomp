/* FRONTEND:0x0189E8 -- menu step: reads the pending input state and, when set, dispatches on its code (1: sets state 0xF, 2: clears the selection and sets state 0x1E), then, when the confirm check holds, runs the confirm step and sets state 1. */
extern void func_014118(int a0);
extern int func_013BF0(void);
extern int func_013C00(void);
extern void func_0229A0(int *p, int a1);
extern void func_013EC0(int a0);
extern int func_020650(void);
extern void func_020730(void);
void func_0189E8(int *o)
{
    int s;
    func_014118(5);
    s = func_013BF0();
    if (func_013C00() != 0) {
        switch (s) {
        case 1:
            func_0229A0(o, 0xF);
            break;
        case 2:
            func_013EC0(0);
            func_0229A0(o, 0x1E);
            break;
        default:
            break;
        }
    }
    if (func_020650() != 0) {
        func_020730();
        func_0229A0(o, 1);
    }
}
