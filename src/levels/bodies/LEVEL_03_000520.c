/* LEVEL_03:0x000520 -- picks one element of a table of 20-byte records and
   hands two of its words to the shared helper. */
typedef union {
    float f[5];
    int i[5];
} Element;

extern Element D_224400[];
extern void func_0004F8(int a, int b);

void func_000520(int index)
{
    Element element = D_224400[index];

    func_0004F8(element.i[3], element.i[1]);
}
