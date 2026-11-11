/* LEVEL_24:0x018DF0 -- copies the twelve-byte vector-and-flag global into
   the destination, then hands the destination back to the caller. */
typedef struct {
    float f[2];
    int flag;
} Vec12;

extern Vec12 D_001FBAE8;

Vec12 *func_018DF0(Vec12 *dst)
{
    *dst = D_001FBAE8;
    return dst;
}
