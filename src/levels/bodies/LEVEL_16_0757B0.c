/* LEVEL_16:0x0757B0 -- drops the caller's block of floats at the head of
   the local scratch buffer. */
typedef struct {
    float f[4];
} Block;

typedef struct {
    Block head;
    float rest[356];
} Scratch;

void func_0757B0(int a, int b, Block *src)
{
    Scratch scratch;

    scratch.head = *src;
}
