extern unsigned char D_001E5474;
extern int D_001E546C;
extern void func_075370(void);
extern void func_075580(void);

typedef struct {
    int f0;
    int f1;
    int f2;
    int f3;
} Slot;

extern Slot D_00225FA0[];

void func_0753D0(int param_1, int param_2, int param_3)
{
    unsigned int i;
    Slot *p;

    if (D_001E5474 == 0)
        func_075370();
    if (D_001E546C == 0x10)
        return;
    p = D_00225FA0;
    i = 0;
    do {
        i++;
        if (p->f0 == 0) {
            p->f2 = param_2;
            p->f0 = param_1;
            p->f1 = *(int *)(*(int *)(param_1 + 0x48) + 0xDC);
            p->f3 = param_3;
            *(int *)(*(int *)(param_1 + 0x48) + 0xDC) = (int)func_075580;
            D_001E546C++;
            return;
        }
        p++;
    } while (i < 0x10);
}
