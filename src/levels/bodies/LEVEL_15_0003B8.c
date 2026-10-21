/* LEVEL_15:0x0003B8 -- one entry of the global table is staged on the stack
   and two of its words are handed to the helper. */

typedef struct {
    float f[5];
} Elem;

typedef union {
    Elem e;
    int w[8];
} Entry;

extern Elem D_15FC80[];

extern void func_000390(int, int);

void func_0003B8(int index)
{
    Entry e;

    e.e = D_15FC80[index];
    func_000390(e.w[3], e.w[1]);
}
