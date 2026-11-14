/* LEVEL_15:0x0A4640 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_00240B00[];
extern int func_09AA50(int *v);
extern unsigned int func_06C700(int value);
extern int func_096530(int index);
extern int func_09D168(void);
extern void func_016A10(int a, int b);
extern int func_099CF0(int *o, int arg);

void func_0A4640(void)
{
    unsigned int flags;

    func_09AA50(D_00240B00);
    flags = func_06C700(0x6B10);
    if (flags & 8) {
        func_096530(7);
        func_096530(0);
        func_016A10(4, 0);
    } else if (flags & 0x1000) {
        func_096530(7);
        func_096530(0);
        if (!func_09D168()) {
            func_016A10(4, 0);
        }
    } else {
        func_099CF0(D_00240B00, flags);
    }
}
