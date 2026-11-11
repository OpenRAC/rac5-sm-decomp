typedef struct {
    char pad[0x80];
    float x;
    float y;
    float z;
    float w;
    char pad2[0x118 - 0x90];
} Rec;

extern Rec D_001DA960[];

typedef struct {
    float x;
    float y;
} Out;

void f(Out *a0, Out *a1, int a2)
{
    if (a0) {
        a0->x = D_001DA960[a2].x;
        a0->y = D_001DA960[a2].y;
    }
    if (a1) {
        a1->x = D_001DA960[a2].z;
        a1->y = D_001DA960[a2].w;
    }
}
