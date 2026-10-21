/* LEVEL_20:0x02C238 -- 12-byte block copy into a global, then a word
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

extern struct Global D_0013B468;

void func_02C238(F12 *src, int value)
{
    D_0013B468.block = *src;
    D_0013B468.value = value;
}
