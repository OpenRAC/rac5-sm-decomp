typedef struct {
    char pad[0xF8];
    float fF8;
    float fFC;
} S;

extern S *D_001C2648;

void func_001440(void)
{
    S *p = D_001C2648;

    p->fFC = p->fF8;
}
