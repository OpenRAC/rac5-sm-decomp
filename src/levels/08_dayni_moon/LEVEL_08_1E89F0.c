extern void func_01AB30(char *a);
extern void func_01AB70(char *a);
extern void func_01AC00(char *a, float b);
extern void func_01AC30(int a);
extern void func_01AC40(float a);
extern void func_01AC50(char *a);

typedef struct {
    char pad[0x20];
    float v;
} Inner;

void f(char *a0)
{
    Inner *s1 = *(Inner **)(a0 + 0x54);

    func_01AB30(a0 + 0x30);
    func_01AB70(a0);
    func_01AC00(a0 + 0x20, s1->v);
    func_01AC30(1);
    func_01AC40(0.75f);
    func_01AC50(a0);
}
