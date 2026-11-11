typedef struct {
    char pad0[0x20];
    int f20;
    char pad1[0x30 - 0x24];
    int f30;
    char pad2[0x54 - 0x34];
    void *p54;
} S;

typedef struct {
    char pad[0x20];
    float f20;
} T;

void func_01AB40(void *p);
void func_01AB80(S *s);
void func_01AC10(void *p, float f);
void func_01AC40(int v);
void func_01AC50(float f);
void func_01AC60(S *s);

void func_1D2B88(S *s)
{
    void *p = s->p54;

    func_01AB40(&s->f30);

    func_01AB80(s);
    func_01AC10(&s->f20, ((T *)p)->f20);
    func_01AC40(1);
    func_01AC50(0.75f);
    func_01AC60(s);
}
