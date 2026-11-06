extern char D_001FFC90[];
extern char D_001E0918[];
extern void func_123340(void *, void *, int, void *);

void func_02CF20(void)
{
    func_123340(D_001FFC90, D_001FFC90 + 12, 0x800, D_001E0918);
}
