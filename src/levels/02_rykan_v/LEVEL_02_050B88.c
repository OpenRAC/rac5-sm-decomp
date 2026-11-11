typedef struct {
    char pad0[0x30];
    int f30;
    char pad1[0x200 - 0x34];
    int f200;
    char pad2[0x270 - 0x204];
    float f270;
    char pad3[0x59C - 0x274];
    int w59C;
} S;

void func_01AB40(void *p);
void func_01AB80(S *s);
void func_01AC10(void *p, float f);
void func_01AC40(int v);
void func_01AC50(float v);
void func_01AC60(int v);

void func_050B88(S *s)
{
    func_01AB40(&s->f30);
    func_01AB80(s);
    func_01AC10(&s->f200, s->f270);
    func_01AC40(1);
    func_01AC50(0.5f);
    func_01AC60(s->w59C);
}
