typedef struct {
    char pad[0xF08];
    float fF08;
} S;

void func_037618(S *s);
float func_000FE0(void);

void func_05CC50(S *s)
{
    func_037618(s);
    s->fF08 = func_000FE0();
}
