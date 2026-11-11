extern unsigned char D_0020F5B4;
extern int D_0020F5AC;
extern void func_07BA60(void);
extern void func_07BC70(void);

typedef struct {
    int f0;
    int f1;
    int f2;
    int f3;
} Slot;

extern Slot D_00254AB0[];

void func_07BAC0(int param_1, int param_2, int param_3)
{
    unsigned int i;
    Slot *p;

    if (D_0020F5B4 == 0)
        func_07BA60();
    if (D_0020F5AC == 0x10)
        return;
    p = D_00254AB0;
    i = 0;
    do {
        i++;
        if (p->f0 == 0) {
            p->f2 = param_2;
            p->f0 = param_1;
            p->f1 = *(int *)(*(int *)(param_1 + 0x48) + 0xDC);
            p->f3 = param_3;
            *(int *)(*(int *)(param_1 + 0x48) + 0xDC) = (int)func_07BC70;
            D_0020F5AC++;
            return;
        }
        p++;
    } while (i < 0x10);
}
