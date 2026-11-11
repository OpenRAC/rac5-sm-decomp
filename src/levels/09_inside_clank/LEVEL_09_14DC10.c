/* LEVEL_09:0x14DC10 -- refreshes the level's stored record from the object
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

extern Rec D_379794;

Src *func_095BD8(int a, int b);

void func_14DC10(void)
{
    Src *src = func_095BD8(0, 0);

    D_379794 = src->rec;
    *(char *)((char *)&D_379794 - 4) = 1;
}
