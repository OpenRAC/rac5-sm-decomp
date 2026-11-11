/* LEVEL_10:0x034188 -- copies the caller's small record into the global
   record and stores the tag that comes with it. */
typedef struct {
    float f[2];
    int i;
} Small;

typedef struct {
    Small s;
    int tag;
} Rec;

extern Rec D_0023DFA0;

void func_034188(Small *src, int tag)
{
    D_0023DFA0.s = *src;
    D_0023DFA0.tag = tag;
}
