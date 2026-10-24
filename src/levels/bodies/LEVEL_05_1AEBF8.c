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

void func_019780(void *p);
void func_0197C0(S *s);
void func_019850(void *p, float f);
void func_019880(int v);
void func_019890(float f);
void func_0198A0(S *s);

void func_1AEBF8(S *s)
{
    void *p = s->p54;

    func_019780(&s->f30);

    func_0197C0(s);
    func_019850(&s->f20, ((T *)p)->f20);
    func_019880(1);
    func_019890(0.75f);
    func_0198A0(s);
}
