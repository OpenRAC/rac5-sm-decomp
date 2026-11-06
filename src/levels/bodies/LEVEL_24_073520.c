extern unsigned char D_001C6D74;
extern int D_001C6D6C;
extern void func_0734C0(void);
extern void func_0736D0(void);

typedef struct {
    int f0;
    int f1;
    int f2;
    int f3;
} Slot;

extern Slot D_002061A0[];

void func_073520(int param_1, int param_2, int param_3)
{
    unsigned int i;
    Slot *p;

    if (D_001C6D74 == 0)
        func_0734C0();
    if (D_001C6D6C == 0x10)
        return;
    p = D_002061A0;
    i = 0;
    do {
        i++;
        if (p->f0 == 0) {
            p->f2 = param_2;
            p->f0 = param_1;
            p->f1 = *(int *)(*(int *)(param_1 + 0x48) + 0xDC);
            p->f3 = param_3;
            *(int *)(*(int *)(param_1 + 0x48) + 0xDC) = (int)func_0736D0;
            D_001C6D6C++;
            return;
        }
        p++;
    } while (i < 0x10);
}
