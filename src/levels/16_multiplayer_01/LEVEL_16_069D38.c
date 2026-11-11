extern unsigned char D_001A3B44;
extern int D_001A3B3C;
extern void func_069CD8(void);
extern void func_069EE8(void);

typedef struct {
    int f0;
    int f1;
    int f2;
    int f3;
} Slot;

extern Slot D_001EC970[];

void func_069D38(int param_1, int param_2, int param_3)
{
    unsigned int i;
    Slot *p;

    if (D_001A3B44 == 0)
        func_069CD8();
    if (D_001A3B3C == 0x10)
        return;
    p = D_001EC970;
    i = 0;
    do {
        i++;
        if (p->f0 == 0) {
            p->f2 = param_2;
            p->f0 = param_1;
            p->f1 = *(int *)(*(int *)(param_1 + 0x48) + 0xDC);
            p->f3 = param_3;
            *(int *)(*(int *)(param_1 + 0x48) + 0xDC) = (int)func_069EE8;
            D_001A3B3C++;
            return;
        }
        p++;
    } while (i < 0x10);
}
