extern unsigned char D_001DFEF4;
extern int D_001DFEEC;
extern void func_075860(void);
extern void func_075A70(void);

typedef struct {
    int f0;
    int f1;
    int f2;
    int f3;
} Slot;

extern Slot D_00221A20[];

void func_0758C0(int param_1, int param_2, int param_3)
{
    unsigned int i;
    Slot *p;

    if (D_001DFEF4 == 0)
        func_075860();
    if (D_001DFEEC == 0x10)
        return;
    p = D_00221A20;
    i = 0;
    do {
        i++;
        if (p->f0 == 0) {
            p->f2 = param_2;
            p->f0 = param_1;
            p->f1 = *(int *)(*(int *)(param_1 + 0x48) + 0xDC);
            p->f3 = param_3;
            *(int *)(*(int *)(param_1 + 0x48) + 0xDC) = (int)func_075A70;
            D_001DFEEC++;
            return;
        }
        p++;
    } while (i < 0x10);
}
