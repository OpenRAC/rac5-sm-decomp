/* LEVEL_18:0x169C90 -- placement copy of LEVEL_17_15D620.c: sets up an effect on an actor's attachment. */
typedef struct C { char pad[0x28]; float k; } C;
typedef struct B { char pad[0x20]; char m[0x38]; C *c; } B;
typedef struct A { char pad[0xDC]; float x; float y; char pad2[0x24]; unsigned short flag; } A;
extern int D_001D72E8;
extern B *func_167FF0(A *);
extern void func_036608(A *);
extern void func_102DB8(float *, A *, int *);
extern void func_002FE8(char *);
extern void func_003038(float, float);
extern void func_002DD8(float *, int, float);
extern void func_003520(char *, int, int, float);
extern void func_003380(int, int, float, float);
void func_169C90(A *a)
{
    float v[4];
    B *b = func_167FF0(a);
    if (b) {
        C *c = b->c;
        func_036608(a);
        func_102DB8(v, a, &D_001D72E8);
        func_002FE8(b->m);
        func_003038(a->x, a->y);
        func_002DD8(v, 0, 0.0f);
        func_003520(b->m, 0x28, a->flag ? 3 : 0, 1.0f);
        func_003380(0x28, 3, 0.5f - c->k * 8.0f, 1.0f);
    }
}
