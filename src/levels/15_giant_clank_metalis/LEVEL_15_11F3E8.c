/* LEVEL_15:0x11F3E8 -- two 12-byte blocks moved inside one struct and
   three flags written around them. */
typedef struct {
    float f[2];
    int x;
} F12;

typedef struct {
    char pad00[0x88];
    F12 second;
    F12 first;
    int flagA;
    int flagB;
    int flagC;
} Dest;

extern void func_11F3E8(Dest *dest, int unused, F12 *src);

void func_11F3E8(Dest *dest, int unused, F12 *src)
{
    dest->flagB = 0;
    dest->flagA = 1;
    dest->first = *src;
    dest->second = dest->first;
    dest->flagC = 0;
}
