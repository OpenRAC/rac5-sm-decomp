/* LEVEL_08:0x1670B0 -- refreshes the level's stored record from the object
   the shared code hands back, and raises the level's "changed" flag. */
typedef struct {
    float x;
    float y;
} V2;

typedef struct {
    V2 v;
    int i;
} Rec;

typedef struct {
    char pad[0x70];
    Rec rec;
} Src;

extern Rec D_3E1324;

Src *func_0A13C8(int a, int b);

void func_1670B0(void)
{
    Src *src = func_0A13C8(0, 0);

    D_3E1324 = src->rec;
    *(char *)((char *)&D_3E1324 - 4) = 1;
}
