/* LEVEL_17:0x15D620 -- sets up an effect on an actor's attachment. */
typedef struct C { char pad[0x28]; float k; } C;
typedef struct B { char pad[0x20]; char m[0x38]; C *c; } B;
typedef struct A { char pad[0xDC]; float x; float y; char pad2[0x24]; unsigned short flag; } A;
extern int D_001C8308;
extern B *func_15B980(A *);
extern void func_037618(A *);
extern void func_103B00(float *, A *, int *);
extern void func_002F78(char *);
extern void func_002FC8(float, float);
extern void func_002D68(float *, int, float);
extern void func_0034B0(char *, int, int, float);
extern void func_003310(int, int, float, float);
void func_15D620(A *a)
{
    float v[4];
    B *b = func_15B980(a);
    if (b) {
        C *c = b->c;
        func_037618(a);
        func_103B00(v, a, &D_001C8308);
        func_002F78(b->m);
        func_002FC8(a->x, a->y);
        func_002D68(v, 0, 0.0f);
        func_0034B0(b->m, 0x28, a->flag ? 3 : 0, 1.0f);
        func_003310(0x28, 3, 0.5f - c->k * 8.0f, 1.0f);
    }
}
