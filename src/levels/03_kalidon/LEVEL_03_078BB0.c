extern unsigned char D_0020E774;
extern int D_0020E76C;
extern void func_078B50(void);
extern void func_078D60(void);

typedef struct {
    int f0;
    int f1;
    int f2;
    int f3;
} Slot;

extern Slot D_00255120[];

void func_078BB0(int param_1, int param_2, int param_3)
{
    unsigned int i;
    Slot *p;

    if (D_0020E774 == 0)
        func_078B50();
    if (D_0020E76C == 0x10)
        return;
    p = D_00255120;
    i = 0;
    do {
        i++;
        if (p->f0 == 0) {
            p->f2 = param_2;
            p->f0 = param_1;
            p->f1 = *(int *)(*(int *)(param_1 + 0x48) + 0xDC);
            p->f3 = param_3;
            *(int *)(*(int *)(param_1 + 0x48) + 0xDC) = (int)func_078D60;
            D_0020E76C++;
            return;
        }
        p++;
    } while (i < 0x10);
}
