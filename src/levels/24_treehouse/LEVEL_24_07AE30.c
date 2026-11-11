/* LEVEL_24.REL:0x07AE30 -- hands the node's vector to func_11BD98 with the extra
   index. */
typedef struct {
    char pad_00[0x30];
    float a;
    float b;
    float c;
} Src;

extern void func_11BD98(int, float, float, float);

void func_07AE30(Src *a0, int a1)
{
    func_11BD98(a1, a0->a, a0->b, a0->c);
}
