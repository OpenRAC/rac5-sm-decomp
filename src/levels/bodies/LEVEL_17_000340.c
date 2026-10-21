/* LEVEL_17:0x000340 -- a 20-byte entry of a global table copied on the
   stack, two of its words handed to the shared code. */
typedef struct {
    int a;
    int b;
    int c;
    int d;
    int e;
} Entry;

extern Entry D_001B3900[];

extern void func_000318(int a, int b, int c);

void func(int index, int flag, int extra)
{
    Entry local = D_001B3900[index];

    func_000318(local.d, local.b, extra);
}
