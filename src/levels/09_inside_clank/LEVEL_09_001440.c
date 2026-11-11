typedef struct {
    char pad[0xF8];
    float fF8;
    float fFC;
} S;

extern S *D_001D9048;

void func_001440(void)
{
    S *p = D_001D9048;

    p->fFC = p->fF8;
}
