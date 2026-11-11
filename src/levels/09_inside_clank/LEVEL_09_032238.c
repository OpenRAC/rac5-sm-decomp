/* LEVEL_09:0x032238 -- 12-byte block copy into a global, then a word
   store in the global's tail.  The global's address is materialised
   twice: once for the copy ($t1), once for the tail store ($v1). */
typedef struct {
    float f[2];
    int x;
} F12;

struct Global {
    F12 block;
    int value;
};

extern struct Global D_0021C320;

void func_032238(F12 *src, int value)
{
    D_0021C320.block = *src;
    D_0021C320.value = value;
}
