/* LEVEL_06.REL:0x07A330 -- hands the node's vector to func_11C710 with the extra
   index. */
typedef struct {
    char pad_00[0x30];
    float a;
    float b;
    float c;
} Src;

extern void func_11C710(int, float, float, float);

void func_07A330(Src *a0, int a1)
{
    func_11C710(a1, a0->a, a0->b, a0->c);
}
