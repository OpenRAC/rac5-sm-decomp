/* LEVEL_16:0x0FA698 -- the global vector is staged on the stack, then one of
   its words is handed to the helper.

   The retail loads the global with a non canonical page: `lui 0x1D` then
   `addiu -0x33A8`, which is 0x1CC58.  The symbol therefore carries the page
   the retail loads and the offset stays in the expression. */

typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef union {
    V3 v;
    int w[4];
} Mix;

extern char D_001D0000[];

extern void func_027160(int, int, int);

void func_0FA698(int a, int b, int index)
{
    Mix m;

    m.v = *(V3 *)((char *)D_001D0000 - 0x33A8);
    func_027160(a - 1, b, m.w[index]);
}
